/*
 * SwapManager.cpp
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#include "SwapManager.h"
#include "SwapReader.h"
#include <list>
#include "SwapMetric.h"
#include "Utility.h"

swapMap SwapManager::_swap_map;
metaDataMap SwapManager::_metaDataMap;

// This is a helper method that is used for bringing in all the regions whenever garbage collection kicks in.
void SwapManager::swapInRegions(){
	typedef std::map<void *, SSDRange>::iterator it_type;
	std::list<void*> mylist;
	for(it_type iterator = _swap_map.begin(); iterator != _swap_map.end(); iterator++) {
		   mylist.push_back(iterator->first);
	}
	for (std::list<void *>::iterator it = mylist.begin(); it != mylist.end(); it++){
		void *address = *it;
		printf("Generating a fault at address %p\n", address); fflush(stdout);
		SSDSwap::swapInRegion(address);
		removeRegion(address); // Removing the region from the swap map
	}
}

void SwapManager::removeRegion(void *address){
	void *end = Utility::getRegionEnd(address);
	_swap_map.erase(end);
}

bool SwapManager::isSwappedOut(void *address){
	swapMapIter iter = _swap_map.lower_bound(address);
	if  (iter == _swap_map.end()){
		return false;
	}
	return true;
}

bool liesWithin(void *address, void *top, void *bottom){
	return (((long)address >= (long)bottom) && ((long)address <= (long)top));
}
/*
 * This function fetches in an object, whenever there is a object level fault.
 * The address is the address of the header of the object here. The accesses could
 * come from zero filled pages also. For those pages there is no
 */
void SwapManager::remapPage(void *address, bool partialCheck = true){
  if(L_SWAP && REMAP){
	  printf("SwapManager::remapPage:: In remapPage, swapping in page address %p.\n", address); fflush (stdout);
  }

  // Getting the SSD range, where the region lies.
  swapMapIter iter = _swap_map.lower_bound(address);
  if  (iter == _swap_map.end()){ /* Error condition. */
	  printf("Cannot swap in page %p does not exist in the page buffer. Exiting.\n", address);
	  fflush(stdout);
	  return;
//	  exit(1);
  }
  if(Universe::isPresent(address)){
	  printf("SwapManager::remapPage::The page (%p = address) is already present in memory. Probably two different threads accessed the same page. One of the threads "
			  "fetched in the page. Therefore, this thread can proceed safely.\n");
	  fflush(stdout);
	  return;
  }

  SSDRange ssdRange = iter->second;
  // Getting the starting address of the Page on the SSD.
  int ssdRangeStart = ssdRange.getStart();
  int numPagesSwappedOut = ssdRange.getNumPages();

  int pageIndex = getPageNumInRegion(address);

  int ssdStartIndex = ssdRangeStart + pageIndex;
  long int ssdStartOffset = ssdStartIndex * _PAGE_SIZE;

  if(L_SWAP && REMAP){
	  void *top = iter->first;
	  printf("SwapManager::remapPage::Getting pair %p -> (%d, %d)\n", top, ssdRange.getStart(), ssdRange.getEnd()); fflush(stdout);
	  printf("SwapManager::remapPage::The start offset on the SSD = %ld.\n", ssdStartOffset); fflush(stdout);
  }

  // Find the number of pages to be pre-fetched
  int numPages = Universe::getContiguousPageFetches(address);
//  int numPages = numPrefetches + 1;

  if(L_SWAP && REMAP){
	  printf("SwapManager::remapPage()::NumPages = %d, Address = %p.\n", numPages, address);
	  fflush(stdout);
  }
  int numberBytes = numPages * _PAGE_SIZE;
  char* bufferStart = (char *)object_va_to_page_start(address);
  char* bufferEnd = (char *)object_va_to_page_start(bufferStart + numberBytes -1);

  // Checking if the first page is partially filled.
  if (Universe::isPartiallyFilled((void *)bufferStart)){
//   metadataMapIter mIter = _metaDataMap.find(bufferStart);
//   if(mIter == _metaDataMap.end()){
//	   printf("SwapManager::remapPage::Entry for page (address = %p, pageStart = %p) not found within"
//			   " the metadata map. Exiting.\n", address, bufferStart);
//	   fflush(stdout);
//	   exit(1);
//   }
//   PageMetaData pMetadata = mIter->second;
   int prefilledBytes = (int)(*(uint16_t *)Universe::getPartialPageTablePosition(address));
   bufferStart += prefilledBytes;
   numberBytes -= prefilledBytes;
   ssdStartOffset += prefilledBytes;
//   _metaDataMap.erase(bufferStart);
  }

  // If the last page is present, we do not fetch the last page.
  bool lastPageIsPresent = Universe::isPresent((void *)bufferEnd);
  if (lastPageIsPresent){
	  numberBytes -= _PAGE_SIZE;
  }

  if(numberBytes == 0){
	  printf("The number of bytes to be fetched is 0. "
			  "There is some problem. Exiting."
			  "\n");
	  fflush(stdout);
	  exit(1);
  }

  int lastPageIndex = pageIndex + (numberBytes-1)/_PAGE_SIZE;
  if(lastPageIndex < numPagesSwappedOut){
	  // Reading the pages from SSD.
		if(Swap_Protect){
			if (mprotect (bufferStart, numberBytes, PROT_READ | PROT_WRITE) == -1){
				perror("error :");
				printf("Error In Removing Protecting Page = %p, Number of Bytes %d. \n", bufferStart, numberBytes);
				fflush(stdout);
			}
		}
		size_t len = SwapReader::swapInOffset(bufferStart, numberBytes, ssdStartOffset);
		if(L_SWAP && REMAP){
			printf("SwapReader, swapInDone. Read %d bytes.\n", len);
			fflush(stdout);
		}
  }

  if (lastPageIndex >= numPagesSwappedOut) {
	 printf("LastPageIndex = %d. NumberBytes = %d. NumPagesSwappedOut = %d. Something is not as expected.\n", lastPageIndex,
			 numberBytes, numPagesSwappedOut);
	 fflush(stdout);
	 exit(1);
  }

  // Marking the current page fetched
//  Universe::markPageFetched(address);
//  if (numPages == 1){
//	  return;
//  }

  char* curr = (char *)object_va_to_page_start(address) ;//+ _PAGE_SIZE;
  // Marking all the intermediate pages as fetched in.
  for (int count = 0; count < numPages; count++){
	  Universe::markPageFetched(curr);
	  curr += _PAGE_SIZE;
  }

// // If the last page is already fetched in, no need to do any mark update
 if(lastPageIsPresent)
	 return;
//
// Else update the last page
 // Checking the condition for the last page
 char* lastPage = curr;
 int lPre = Universe::getNumberOfPrefetches(lastPage);
 // if lPre == 0, no object crosses the page boundary, hence can be marked as fetched in.
 if(lPre > 0 && partialCheck){
//	 printf("Partially marking page for address %p. lPre = %d\n", address, lPre); fflush(stdout);
//	 oop obj = (oop) (address);
//	 printf("Partially marking page for address %p. Reading Object Size.\n", address); fflush(stdout);
//	 // HeapWordSize gets the size of the object in heap word size (1 HeapWordSize = 8 Bytes).
//	 int objSize = obj->size() * HeapWordSize;
//	 printf("Partially marking page for address %p. Object Size = %d.\n", address, objSize); fflush(stdout);
//	 char* objEnd = (char *)address + objSize - 1;
//	 char* objEndPageSt = (char *)object_va_to_page_start(objEnd);
//	 uint16_t offset = *(uint16_t *)getPartialPageTablePosition(lastPage);
//	 printf("Partially marking page for address %p. Offset = %ld\n", address, offset); fflush(stdout);
//	 PageMetaData* p = new PageMetaData((int)offset);
//	 pageMetaDataPair pair = pageMetaDataPair(objEndPageSt, offset);
//	 _metaDataMap.insert(pair);
	 Universe::markPartiallyFetched((void*) lastPage);
 } else {
	 printf("Marking page %p fetched.\n", lastPage); fflush(stdout);
	 Universe::markPageFetched(lastPage);
 }

/*  bool lastPagePartiallyFilled =
  if(!lastPageIsPresent && )

  uint64_t lastPage = (uint64_t)address + numPrefetches * _PAGE_SIZE;
  if (Universe::isPartiallyFilled((void *)lastPage)){
   // Getting the size of the partially filled page
   void* pageStart = object_va_to_page_start(address);
   metadataMapIter mIter = _metaDataMap.find(pageStart);
   if(mIter == _metaDataMap.end()){
	   printf("Entry for page (address = %p, pageStart = %p) not found within the metadata map. Exiting.\n", address, pageStart);
	   fflush(stdout);
	   exit(1);
   }
   PageMetaData pMetadata = mIter->second;
   int prefilledBytes = pMetadata.getPrefilledBytes();
   void *buffer = (void *)malloc(numPages * _PAGE_SIZE);




   }
  } else {
//  int numPages = ((ssdRange.getEnd() - ssdRange.getStart())) + 1;
  int total_size = numPages* _PAGE_SIZE;
  if(L_SWAP){
	  printf("numPages %d\n", numPages); fflush(stdout);
  }
  void *bottom = SwapManager::object_va_to_page_start((void *)((long)top - (numPages-1) * _PAGE_SIZE));
  if(L_SWAP){
	  printf("bottom %p\n", bottom); fflush(stdout);
  }
  if (liesWithin(address, top, bottom)){
	// Fetching the region back into memory
	SwapReader::swapIn(bottom, numPages, ssdRange.getStart());
//	_swap_map.erase (top);
  } else {
	  printf("Error, cannot swap in page %p does not exist in the range \n", address); fflush(stdout);
	  /* Two threads can read a single protected region from the address space
	   * and one of them might have restored the address space and therefore
	   * we let the thread run through as normal. This can occur often.
	   */
//  }

  // Finishing the SwapIn process
//  out: return;
}

void SwapManager::swapRange(SwapRange* swap_range, int off, int numPagesToRelease) {
	SSDRange ssdRange = PageBuffer::pageOut(swap_range->getBot(), swap_range->getNumPages(), off, numPagesToRelease);
	mapRange(swap_range->getEnd(), ssdRange);
}

void* SwapManager::object_va_to_page_start (void *object_va) {
	  return (void *)((long)object_va & (~(_PAGE_SIZE-1)));
}

void* SwapManager::object_va_to_page_end (void *object_va) {
	  return (void *)((long)object_va | ((_PAGE_SIZE-1)));
}

void* SwapManager::getRegionStart(void *address){
	return (void *)((long)address & (~(_REGION_SIZE-1)));
}

/* This method gets the index of a particular page in the region.  */
int SwapManager::getPageNumInRegion(void* address){
	void* pageStart = object_va_to_page_start(address);
	void* regionStart = getRegionStart(address);
	int index = ((char *)pageStart - (char *)regionStart)/(_PAGE_SIZE);
	if(L_SWAP && false){
		printf("Index = %d, for address = %p.\n", index, address);
		fflush(stdout);
	}
	return index;
}

int abs(int x){
	if (x < 0)
		return -x;
	return x;
}

SwapRange* SwapManager::addressRegion(void *end, void *bot, void *top){
	void *top_h = object_va_to_page_end (top); // the largest address in the range
	void *bot_l = object_va_to_page_start (bot); // the smallest address in the range
	void *top_l = object_va_to_page_start (top); // the smallest address on the largest page
	void *end_h = object_va_to_page_end(end);
	int num_pages = (((long)top_l - (long)bot_l)/(_PAGE_SIZE)) + 1;
	SwapRange* swap_range = new SwapRange (num_pages, top_h, bot_l, end_h);
	return swap_range;
}

void SwapManager::mapRange(void *va, SSDRange ssdRange){
	mapPair mPair = mapPair(va, ssdRange);
	_swap_map.insert(mPair);

	if(L_SWAP){
		printf("inserted pair %p -> (%d, %d)\n", va, ssdRange.getStart(), ssdRange.getEnd());
		fflush(stdout);
	}
}

SwapManager::SwapManager() {
	// TODO Auto-generated constructor stub
}

SwapManager::~SwapManager() {
	// TODO Auto-generated destructor stub
}

// Extra Code
// If remapping
/*void *remap_bot;	// page re-mapping done through "mremap" now
	if (posix_memalign((void **)(&remap_bot), _PAGE_SIZE, total_size) == -1){
		perror("error:"); fflush(stderr);
		printf("error in posix_memalign\n"); fflush(stdout);
	}
	SwapReader::swapIn(remap_bot, numPages, ssdRange.getStart());
	void * add = mremap(remap_bot, total_size, total_size, MREMAP_FIXED | MREMAP_MAYMOVE, bottom);
	if(L_SWAP){
		printf("remapping to address add= %p, bot = %p\n", add, bottom);
		fflush(stdout);
	}
	if (add != bottom){
		printf("error in remapping\n"); fflush(stdout);
		perror("err:");fflush(stderr);exit(-1);
	}*/
