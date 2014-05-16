/*
 * SSDSwap.cpp
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#include "SSDSwap.h"

// The handler to catch SIGSEGV faults on memory access
void* SSDSwap::seg_handler (void *addr){
	_swap_manager->remapPage(addr);

}

SSDSwap::SSDSwap() {
	_swap_manager = new SwapManager ();
}

SSDSwap::~SSDSwap() {
	// TODO Auto-generated destructor stub
}

void SSDSwap::swapOut(void *va){
	_swap_manager->swapRange(va);
}
