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

typedef std::map<void *, SSDRange> swapMap;
typedef std::pair<void *, SSDRange> mapPair;
typedef std::map<void *, SSDRange>::const_iterator swapMapIter;

class SwapManager {
private:
	PageBuffer* _page_buffer;
	swapMap _swap_map;

public:
	SwapManager();
	virtual ~SwapManager();
	SwapRange* swapRange(void *sa, void *ea);
	void mapRange(void *va, SSDRange ssdRange);
	static SwapRange* addressRegion(void *sa, void *ea);
	static void* object_va_to_page_start(void *va);
	static void* object_va_to_page_end(void *va);
	void remapPage (void *address);

};

#endif /* SWAPMANAGER_H_ */
