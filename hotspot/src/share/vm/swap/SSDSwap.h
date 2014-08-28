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
#include <pthread.h>
#include "SSDManager.h"
#include "memory/HeapMonitor.h"

using namespace std;

#ifndef SSDSWAP_H_
#define SSDSWAP_H_
#define PageTablePartitions 1000
#define Mutex_Count PageTablePartitions

// Stores the mapping from virtual address to file offset

class SSDSwap {
public:
	//SwapManager* _swap_manager;
	//SSDManager* _ssd_manager;
	static pthread_mutex_t _swap_map_mutex[Mutex_Count];
	static int _prefetchCount;

	SSDSwap();
	virtual ~SSDSwap();
	void* seg_handler (void *address);
	static void handle_faults(void *address);
	static void CMS_handle_faults(void *address);
	static void CMS_handle_faults_prefetch(void *address, bool IsJavaThread);
	static void swapInRegion(void *addr);
	// Function which converts an object's location to the location where its page header resides
	static void *object_va_to_page_header(void *object_va);
	static void swapOut(void *sa, void *ea, void *top);
	static void markRegionSwappedOut(void *addr, int n);
	static void checkAccessSwapIn(void *, int purpose);
	static void checkAccessSwapInRegion(void *, void *, int);
	static void CMS_swapOut(void *sa, int numberPages);
	static void CMS_swapOut_synchronized(void *sa, int numberPages);
	static void checkAccessWithSize(void *header, size_t size, int purpose);
	static void swapInChunk(void *, void *);
};



#endif /* SSDSWAP_H_ */
