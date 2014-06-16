/*
 * SwapManager.h
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */



#include "swap_global.h"
#include "PageBuffer.h"

#ifndef SWAPMANAGER_H_
#define SWAPMANAGER_H_

typedef std::map<void *, SSDRange> swapMap;
/* This map is used to keep metadata information about each page.
 * This contains an entry in the table, only when the page has been pre-filled,
 * while being fetched in.
 */
typedef std::map<void *, PageMetaData> metaDataMap;
typedef std::map<void *, PageMetaData>::const_iterator metadataMapIter;

typedef std::pair<void *, SSDRange> mapPair;
typedef std::pair<void *, PageMetaData> pageMetaDataPair;
typedef std::map<void *, SSDRange>::const_iterator swapMapIter;

class SwapManager {
private:
	//PageBuffer* _page_buffer;
	static swapMap _swap_map;
	static metaDataMap _metaDataMap;

public:
	SwapManager();
	virtual ~SwapManager();
	static void swapRange(SwapRange* swap_range, int off);
	static void mapRange(void *va, SSDRange ssdRange);
	static SwapRange* addressRegion(void *sa, void *ea);
	static void* object_va_to_page_start(void *va);
	static void* object_va_to_page_end(void *va);
	static void remapPage (void *address, bool partialCheck);
	static void swapInRegions();
	static void* getRegionStart(void* address);
	static int getPageNumInRegion(void* address);
};



#endif /* SWAPMANAGER_H_ */
