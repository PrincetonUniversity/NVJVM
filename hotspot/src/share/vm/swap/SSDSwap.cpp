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
	_swap_manager->remapPage(addr);
}

SSDSwap::SSDSwap() {
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
	_swap_manager->swapRange(top, bot);
	if(L_SWAP){
		printf("In swapOut, swapOut done successfully");
		fflush(stdout);
	}
}
