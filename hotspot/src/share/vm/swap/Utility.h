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
	static void printRegionTable(void *addr);
	static void* getRegionStart(void *address);
	static void* getRegionEnd(void *address);
	static void* getPageStart(void *address);
	static void* getPageEnd(void *address);
	static int getNumPages(void *s, void *e);
	static void* nextPage(void *);
	static void* nextPageInc(void *, int);
};

#endif /* UTILITY_H_ */
