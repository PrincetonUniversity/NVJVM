/*
 * SSDSwap.h
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#include "swap_global.h"
#include "PageBuffer.h"
#include "SwapManager.h"
#include "SwapWriter.h"
#include "SwapReader.h"

using namespace std;

#ifndef SSDSWAP_H_
#define SSDSWAP_H_

// Stores the mapping from virtual address to file offset


class SSDSwap {
private:
	SwapManager* _swap_manager;

public:
	SSDSwap();
	virtual ~SSDSwap();
	void* seg_handler (void *address);
	// Function which converts an object's location to the location where its page header resides
	static void *object_va_to_page_header(void *object_va);
	void swapOut(void *va);
};

#endif /* SSDSWAP_H_ */
