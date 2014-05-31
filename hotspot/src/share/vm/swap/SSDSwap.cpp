/*
 * SSDSwap.cpp
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */


#include "SSDSwap.h"

// The handler to catch SIGSEGV faults on memory access
void* SSDSwap::seg_handler (void *addr){
	if(L_SWAP){
		printf("segmentation handler called on %p\n", addr); fflush(stdout);
	}
	pthread_mutex_lock(&_swap_map_mutex);
	SwapManager::remapPage(addr); // Currently we are synchronizing access to remapping pages
    pthread_mutex_unlock(&_swap_map_mutex);
}

void SSDSwap::handle_faults(void *addr) {
	pthread_mutex_lock(&_swap_map_mutex);
	SwapManager::remapPage(addr); // Currently we are synchronizing access to remapping pages
    pthread_mutex_unlock(&_swap_map_mutex);
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
		printf("In swapOut, swapping out %p, %p\n", bot, top); fflush(stdout);
	}
	SwapRange* swapRange = SwapManager::addressRegion(top, bot); // Should move to SSDSwap class
	int off = SSDManager::get(swapRange->getNumPages()); // Synchronized method
	SwapManager::swapRange(swapRange, off);
	if(L_SWAP){
		printf("In swapOut, swapOut done successfully\n");
		fflush(stdout);
	}
}
