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
#include <unistd.h>
#include <sys/mman.h>


class Utility {
public:
//	static void printRegionTable(void *addr);
	static void* getRegionStart(void *address);
	static void* getRegionEnd(void *address);
	static void* getPageStart(void *address);
	static void* getPageEnd(void *address);
	static int getNumPages(void *s, void *e);
	static void* nextPage(void *);
	static void* prevPage(void *);
	static void* nextPageInc(void *, int);
	static void* addPointers(void* a, void* b);
	static bool liesWithinHeap(void *a);
	static void *minPointer(void *, void *);
	static int numberPages(void *, void *);
	static double toMB(size_t value);
	static double toKB(size_t value);
	static size_t getPageSize();
	static int getContinuousFreePagesBetween(void *start, void *end, int maxRequired, void**, void **);
	static int getContinuousPagesOutOfCorePages(void *start, void *end, void **, void **);
	static void *getNextInMemoryPage(void *, void *);
	static void *getBoundary(void *start, void *end, int numberPartitions);
	static int countZeroedPages(void *start, int np);
	static int getLargestContinuousZeroedPages(void *, int, void **);
	static bool isPageZero(void* address);
	static int getNextContinuousZeroedPagesStreak(void *, int, void **);
	static int getOutOfCoreCount(void *, int);
	static int getOutOfCoreCountBetweenRange(void*, void*);
};

#endif /* UTILITY_H_ */
