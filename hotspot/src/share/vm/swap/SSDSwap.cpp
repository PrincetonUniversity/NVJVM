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

void SSDSwap::handle_faults(void *addr) {
	timespec time1, time2;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
	pthread_mutex_lock(&_swap_map_mutex);
	SwapManager::remapPage(addr); // Currently we are synchronizing access to remapping pages
	SSDSwap::markRegion(addr, 0); // Marking the region as swapped in, region bitmap
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
	if(L_SWAP){
		printf("SSDSwap::In swapOut, swapping out bottom = %p, end = %p\n", bot, top); fflush(stdout);
	}
	SwapRange* swapRange = SwapManager::addressRegion(top, bot); // Should move to SSDSwap class
	int off = SSDManager::get(swapRange->getNumPages()); // Synchronized method
	SwapManager::swapRange(swapRange, off);
	SSDSwap::markRegion(bot, 1); // Marking the region as swapped out, in the region bitmap
	if(L_SWAP){
		printf("In swapOut, swapOut done successfully\n");
		fflush(stdout);
	}
	SwapMetric::incrementSwapOuts();
}

void SSDSwap::markRegion(void *addr, int mark){
	  uint64_t objOffset = (uint64_t)addr - (uint64_t)Universe::getHeapStart();
	  uint64_t regionI = objOffset /(_R_SIZE);
	  uint64_t position = regionI + (uint64_t)Universe::getRegionTable();
	  *((char *)position) = (char)mark;
	  if(L_SWAP){
		  printf("SSDSwap::markRegion() - Marking position (%p), in the region table. Mark = %d.\n", position, mark);
		  fflush(stdout);
	  }
}
