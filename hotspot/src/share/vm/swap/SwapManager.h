/*
 * SwapManager.h
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#ifndef SWAPMANAGER_H_
#define SWAPMANAGER_H_

#include "swap_global.h"
#include "PageBuffer.h"

typedef std::unordered_map<void *, SSDRange> swapMap;
typedef std::pair<void *, SSDRange> mapPair;
typedef std::unordered_map<void *, SSDRange>::const_iterator swapMapIter;

class SwapManager {
private:
	PageBuffer* _page_buffer;
	swapMap _swap_map;

public:
	SwapManager();
	virtual ~SwapManager();
	SwapRange* swapRange(void *va);
	static mapPair makePair(void *va, SSDRange ssdRange);
	void mapRange(void *va, int offset_s, int offset_e);
	static SwapRange* addressRegion(void *va);
	static void* object_va_to_page_header(void *va);
	void remapPage (void *address);

};

#endif /* SWAPMANAGER_H_ */
