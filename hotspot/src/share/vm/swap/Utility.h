/*
 * Utility.h
 *
 *  Created on: Jun 16, 2014
 *      Author: ravitandon
 */

#ifndef UTILITY_H_
#define UTILITY_H_

#include "swap_global.h"
#include "SwapManager.h"

class Utility {
public:
//	static void printRegionTable(void *addr);
	static void* getRegionStart(void *address);
	static void* getRegionEnd(void *address);
	static void* getPageStart(void *address);
	static void* getPageEnd(void *address);
	static int getNumPages(void *s, void *e);
	static void* nextPage(void *);
	static void* nextPageInc(void *, int);
	static void* addPointers(void* a, void* b);
	static bool liesWithinHeap(void *a);
	static void *minPointer(void *, void *);
	static int numberPages(void *, void *);
	static double toMB(size_t value);
	static double toKB(size_t value);
	static size_t getPageSize();
	static int getContinuousFreePagesBetween(void *start, void *end, int maxRequired);
};

#endif /* UTILITY_H_ */
