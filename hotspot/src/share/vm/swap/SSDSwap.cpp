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
		_swap_manager->remapPage(addr); // Currently we are synchronizing access to remapping pages
    pthread_mutex_unlock(&_swap_map_mutex);

}

SSDSwap::SSDSwap() {
	_ssd_manager = new SSDManager();
	_swap_manager = new SwapManager ();
}

SSDSwap::~SSDSwap() {
	// TODO Auto-generated destructor stub
}

void SSDSwap::swapOut(void *top, void *bot){
	if(L_SWAP){
		printf("In swapOut, swapping out %p, %p\n", top, bot);
		fflush(stdout);
	}
	SwapRange* swapRange = SwapManager::addressRegion(top, bot); // Should move to SSDSwap class
	int off = _ssd_manager->get(swapRange->getNumPages()); // Synchronized method
	_swap_manager->swapRange(swapRange, off);
	if(L_SWAP){
		printf("In swapOut, swapOut done successfully");
		fflush(stdout);
	}
}
