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
#include <sys/mman.h>

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

void SwapManager::swapInPage(void *address, int numberPages){
	address = Utility::getPageStart(address);
	if(L_SWAP){
		  printf("SwapManager::swapInPage() In swapInPage, swapping in page address %p.\n", address); fflush (stdout);
	}
	size_t pageIndex = Universe::getPageIndex(address);
	size_t fileOffset = pageIndex * sysconf(_SC_PAGE_SIZE);
	if(Universe::isPresent(address)){
		  if(L_SWAP){
			  printf("Address %p, index = %d is already present. "
				  "Therefore, page not fetched in.\n", address, Universe::getPageIndex(address));
			  fflush(stdout);
		  }
		return;
	}
	void *buffer;
	size_t numberBytes = numberPages * sysconf(_SC_PAGE_SIZE);
	if(posix_memalign(&buffer, sysconf(_SC_PAGE_SIZE), numberBytes) == -1){
		perror("error :");
		printf("Error in posix_memalign.\n");
		exit(-1);
	}
	size_t len = SwapReader::swapInOffset(buffer, numberBytes, fileOffset);
	if(len != numberBytes){
		printf("Error in swapInPage, while fetching address %p."
				"Length read = %ld, Actual length to read %ld.\n",
				address, len, numberBytes);
		exit(-1);
	}

	// Remapping the virtual address space
	if(mremap(buffer, numberBytes, numberBytes, MREMAP_FIXED | MREMAP_MAYMOVE, address) == (void *)-1){
		printf("Error in mremap. Address = %p, NumberBytes = %ld, buffer %p.\n", address, numberBytes, buffer);
		perror("error:");
		exit(-1);
	}

	// Marking the swapped in pages in the page table
	void *curr = address;
	for (int count = 0; count < numberPages; count++){
		  Universe::markSwappedIn(curr);
		  curr = Utility::nextPage(curr);
	}
}

/*
 * This function fetches in an object, whenever there is a object level fault.
 * The address is the address of the header of the object here. The accesses could
 * come from zero filled pages also. For those pages there is no
 */
void SwapManager::remapPage(void *address, bool partialCheck = true){
  if(L_SWAP){
	  printf("SwapManager::remapPage:: In remapPage, swapping in page address %p.\n", address); fflush (stdout);
  }

  // Getting the SSD range, where the region lies.
  swapMapIter iter = _swap_map.lower_bound(address);
  if  (iter == _swap_map.end()){ /* Error condition. */
	  printf("Cannot swap in page %p does not exist in the page buffer. Exiting.\n", address);
	  fflush(stdout);
	  return;
  }
  if(Universe::isPresent(address)){
	  if(L_SWAP){
		  printf("Address %p, index = %d is already present. "
			  "Therefore, page not fetched in.\n", address, Universe::getPageIndex(address));
		  fflush(stdout);
	  }
	  return;
  }

  SSDRange ssdRange = iter->second;
  // Getting the starting address of the Page on the SSD.
  int ssdRangeStart = ssdRange.getStart();
  int numPagesSwappedOut = ssdRange.getNumPages();
  int pageIndex = getPageNumInRegion(address);
  int ssdStartIndex = ssdRangeStart + pageIndex;
  long int ssdStartOffset = ssdStartIndex * _PAGE_SIZE;

  if(L_SWAP){
	  void *top = iter->first;
	  printf("SwapManager::remapPage::Getting pair %p -> (%d, %d)\n", top, ssdRange.getStart(), ssdRange.getEnd()); fflush(stdout);
	  printf("SwapManager::remapPage::The start offset on the SSD = %ld.\n", ssdStartOffset); fflush(stdout);
  }

  // Find the number of pages to be pre-fetched
  int numPages = 1; //Universe::getContiguousPageFetches(address);
  int prefetchCount = numPages;

  if(L_SWAP){
	  printf("SwapManager::remapPage()::NumPages = %d, Address = %p, Index = %ld.\n", numPages,
			  address, Universe::getPageIndex(address));
	  fflush(stdout);
  }
  int numberBytes = numPages * _PAGE_SIZE;
  char* bufferStart = (char *)object_va_to_page_start(address);
  char* bufferEnd = (char *)object_va_to_page_start(bufferStart + numberBytes -1);
  void* lastPage = bufferEnd;

  // Checking if the first page is partially filled.
/*  if (Universe::isPartiallyFilled((void *)bufferStart)){
   int prefilledBytes = (int)(*(uint16_t *)Universe::getPartialPageTablePosition(address));
   bufferStart += prefilledBytes;
   numberBytes -= prefilledBytes;
   ssdStartOffset += prefilledBytes;
  }*/

  // If the last page is present, we do not fetch the last page.
  bool lastPageIsPresent = Universe::isPresent((void *)bufferEnd);
  if (lastPageIsPresent){
	  numberBytes -= _PAGE_SIZE;
	  numPages--;
  }

  if(numberBytes == 0){
	  //int pB = (int)(*(uint16_t *)Universe::getPartialPageTablePosition(address));
	  printf("The number of bytes to be fetched is 0. "
			  "There is some problem. Exiting."
			  "Last Page is Present = %d."
			  "\n", lastPageIsPresent);
	  fflush(stdout);
	  exit(-1);
  }

  int lastPageIndex = pageIndex + (numberBytes-1)/_PAGE_SIZE;
  if(lastPageIndex < numPagesSwappedOut){
	  // Reading the pages from SSD.
		if(Swap_Protect){
			void* sa = Utility::getPageStart((void *)bufferStart);
			if (mprotect (sa, numPages * _PAGE_SIZE, PROT_READ | PROT_WRITE | PROT_EXEC) == -1){
				perror("error :");
				printf("Error In Removing Protecting Page = %p, Number of Bytes %d. \n", bufferStart, numberBytes);
				fflush(stdout);
				exit(-1);
			}
			if(L_SWAP){
				printf("Unprotecting Page %p, index = %ld, Number of pages = %d.\n",
					sa, Universe::getPageIndex(sa),numPages);
				fflush(stdout);
			}
		}
		size_t len = SwapReader::swapInOffset(bufferStart, numberBytes, ssdStartOffset);
		if(L_SWAP){
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

  void* curr = object_va_to_page_start(address);

  // Marking all the intermediate pages as fetched in.
  for (int count = 0; count < prefetchCount; count++){
	  Universe::markSwappedIn(curr);
	  curr = Utility::nextPage(curr);
 }

 /* If the last page has more than a single prefetchCount and the next page
  * is not fetched in, then it is a partial page. */
// int lPre = Universe::getNumberOfPrefetches(lastPage);
// bool isFetched = Universe::isPresent(Utility::nextPage(lastPage));
//
// if(lPre > 0 && !isFetched && partialCheck){
//	 Universe::markPartiallyFetched(lastPage);
// }
}

void SwapManager::clearRegion(void *address){
	swapMapIter iter = _swap_map.lower_bound(address);
	if  (iter == _swap_map.end()){
		return;
	}
	void *end = iter->first;
	_swap_map.erase(end);
}

void SwapManager::swapRange(SwapRange* swap_range, int off, int numPagesToRelease) {
//	SSDRange ssdRange = PageBuffer::pageOut(swap_range->getBot(), swap_range->getNumPages(), off, numPagesToRelease);
//	mapRange(swap_range->getEnd(), ssdRange);
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
