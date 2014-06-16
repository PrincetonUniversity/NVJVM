/*
 * SSDSwap.cpp
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */


#include "SSDSwap.h"
#include "SwapMetric.h"

pthread_mutex_t SSDSwap::_swap_map_mutex;

// The handler to catch SIGSEGV faults on memory access
void* SSDSwap::seg_handler (void *addr){
	if(L_SWAP){
		printf("SSDSwap:segmentation handler called on %p\n", addr); fflush(stdout);
	}
	pthread_mutex_lock(&_swap_map_mutex);
	SwapManager::remapPage(addr); // Currently we are synchronizing access to remapping pages
    pthread_mutex_unlock(&_swap_map_mutex);
}
//char Universe::_presentMask = 0;
//char Universe::_partiallyFilledMask = 2;
//char Universe::_notPresentMask = 1;

void SSDSwap::swapInRegion(void *addr) {
	addr = SwapManager::getRegionStart(addr);
	char *regionPos = (char *)SwapManager::getRegionStart(addr);
	char *prefetchPosition = (char *)Universe::getPrefetchTablePosition(addr);
	char *startRegionTable = (char *)Universe::getRegionTablePosition(addr);
	char value;
	for(int count = 0; count < Universe::_regionPages; count++){
		value = *startRegionTable;
		if(value == Universe::_notPresentMask || value == Universe::_partiallyFilledMask ){
			SwapManager::remapPage((void *)regionPos);
		} else if(value != Universe::_presentMask){
			printf("Error, value in the region table different from 0,1,2. Exiting.\n");
			fflush(stdout);
			exit(1);
		}
		startRegionTable++;
		prefetchPosition++;
		regionPos = regionPos + _PAGE_SIZE;
	}
}

void SSDSwap::handle_faults(void *addr) {
	timespec time1, time2;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
	pthread_mutex_lock(&_swap_map_mutex);
	SwapManager::remapPage(addr); // Currently we are synchronizing access to remapping pages
//	SSDSwap::markRegion(addr, 0); // Marking the region as swapped in, region bitmap
	SwapMetric::incrementSwapIns();
	pthread_mutex_unlock(&_swap_map_mutex);
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
	SwapMetric::incrementSwapInTime(time1, time2);
}

SSDSwap::SSDSwap() {
	//_ssd_manager = new SSDManager();
	//_swap_manager = new SwapManager ();
}

SSDSwap::~SSDSwap() {
	// TODO Auto-generated destructor stub
}

void SSDSwap::swapOut(void *top, void *bot){
	timespec time1, time2;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
	if(L_SWAP){
		printf("SSDSwap::swapOut::In swapOut, swapping out bottom = %p, end = %p\n", bot, top); fflush(stdout);
	}
	SwapRange* swapRange = SwapManager::addressRegion(top, bot); // Should move to SSDSwap class
	int off = SSDManager::get(swapRange->getNumPages()); // Synchronized method
	SwapManager::swapRange(swapRange, off);
	SSDSwap::markRegionSwappedOut(bot); // Marking the region as swapped out, in the region bitmap
	if(L_SWAP){
		printf("SSDSwap::swapOut::In swapOut, swapOut done successfully\n");
		fflush(stdout);
	}
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
	SwapMetric::incrementSwapOutTime(time1, time2);
	SwapMetric::incrementSwapOuts();
}

void SSDSwap::markRegionSwappedOut(void *addr){
	char* position = (char *)Universe::getRegionTablePosition(addr);
	memset(position, Universe::_notPresentMask, Universe::_regionPages);
	if(L_SWAP){
		printf("SSDSwap::markRegionSwappedOut::Marked Position Range = %p, %p\n", (char *)Universe::getRegionTablePosition(addr), position);
		fflush(stdout);
	}
}

void SSDSwap::markRegion(void *addr, int mark){
	  uint64_t position = Universe::getRegionTablePosition(addr);
	  *((char *)position) = (char)mark;
	  if(L_SWAP){
		  printf("SSDSwap::markRegion() - Marking position (%p), in the region table. Mark = %d.\n", position, mark);
		  fflush(stdout);
	  }
}
