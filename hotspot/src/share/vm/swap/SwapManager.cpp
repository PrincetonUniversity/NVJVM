/*
 * SwapManager.cpp
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#include "SwapManager.h"
#include "SwapReader.h"

SwapManager::SwapManager() {
	// TODO Auto-generated constructor stub
	_page_buffer = new PageBuffer();
}

SwapManager::~SwapManager() {
	// TODO Auto-generated destructor stub
}

bool liesWithin(void *address, void *top, void *bottom){
	return (((long)address >= (long)bottom) && ((long)address <= (long)top));
}

void SwapManager::remapPage (void *address){
  if(L_SWAP){
	  printf("In remapPage, segmentation called on address %p\n", address); fflush (stdout);
  }
  swapMapIter iter =_swap_map.lower_bound(address); // gets the page address
  if  (iter == _swap_map.end() ){
	  printf("Error, cannot swap in page %p does not exist in the page buffer \n", address); fflush(stdout);
	  /* Two threads can read a single protected region from the address space
	   * and one of them might have restored the address space and therefore
	   * we let the thread run through as normal. This case will be rare.
	   */
	  return;
  }
  void *top = iter->first;
  SSDRange ssdRange = iter->second;
  if(L_SWAP){
	  printf("getting pair %p -> (%d, %d)\n", top, ssdRange.getStart(), ssdRange.getEnd()); fflush(stdout);
  }
  int numPages = ((ssdRange.getEnd() - ssdRange.getStart()) / PAGE_SIZE) + 1;
  if(L_SWAP){
	  printf("numPages %d\n", numPages); fflush(stdout);
  }
  void *bottom = SwapManager::object_va_to_page_start((void *)((long)top - (numPages-1) * PAGE_SIZE));
  if(L_SWAP){
	  printf("bottom %p\n", bottom); fflush(stdout);
  }
  if (liesWithin(address, top, bottom)){
	  if (mprotect (bottom, numPages * PAGE_SIZE, PROT_READ | PROT_WRITE) == -1){
	  	printf ("error in protecting page %p\n", bottom);  fflush (stdout);
	  } else {
	  	SwapReader::swapIn(bottom, numPages, ssdRange.getStart());
	  	_swap_map.erase (top);
	  }
  } else {
	  printf("Error, cannot swap in page %p does not exist in the range \n", address); fflush(stdout);
	  /* Two threads can read a single protected region from the address space
	   * and one of them might have restored the address space and therefore
	   * we let the thread run through as normal. This can occur often.
	   */
  }
}

SwapRange* SwapManager::swapRange(void *top, void *bot) {
	if(L_SWAP){
		printf("In swapRange, swapping out range top = %p, bottom = %p\n", top, bot); fflush(stdout);
	}
	SwapRange* swap_range = addressRegion (top, bot);
	SSDRange ssdRange = PageBuffer::pageOut(swap_range->getBot(), swap_range->getNumPages());
	mapRange(swap_range->getTop(), ssdRange);
	return swap_range;
}

void* SwapManager::object_va_to_page_start (void *object_va) {
	  return (void *)((long)object_va & (~(PAGE_SIZE-1)));
}

void* SwapManager::object_va_to_page_end (void *object_va) {
	  return (void *)((long)object_va | ((PAGE_SIZE-1)));
}

int abs(int x){
	if (x < 0)
		return -x;
	return x;
}

SwapRange* SwapManager::addressRegion(void *top, void *bot){
	void *top_h = object_va_to_page_end (top); // the largest address in the range
	void *bot_l = object_va_to_page_start (bot); // the smallest address in the range
	void *top_l = object_va_to_page_start (top); // the smallest address on the largest page
	int num_pages = (((long)top_l - (long)bot_l)/(PAGE_SIZE)) + 1;
	SwapRange* swap_range = new SwapRange (num_pages, top_h, bot_l);
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



