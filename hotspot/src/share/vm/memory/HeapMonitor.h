/*
 * HeapMonitor.h
 *
 *  Created on: Aug 12, 2014
 *      Author: ravitandon
 */

#ifndef HEAPMONITOR_H_
#define HEAPMONITOR_H_

#include "swap/SSDSwap.h"
#include "runtime/virtualspace.hpp"
#include "swap/Utility.h"
#include "gc_implementation/concurrentMarkSweep/concurrentMarkSweepGeneration.hpp"

#define HM_Occupancy_Log 0
#define HM_ASSERT 0

class HeapMonitor {
private:
	static void *_matureGenerationBase;
	static size_t _matureGenerationSize;
	static ConcurrentMarkSweepGeneration* _concurrentMarkSweepGeneration;
	static double _swapOutOccupancyThreshold; // Occupancy threshold
	static void *_inCoreBottom; // The lowest address that has to be swapped out
	static int _defaultPages; // Default number of pages that have to be swapped out for each swap out call
	static size_t _availableRAM; // Physical RAM available
	static bool _isInit;
	static size_t _pagesMatureSpace;
	static size_t _pagesOutOfCore;

public:
	HeapMonitor();
	static void init();
	static size_t spaceLeft(); // provides the amount of space left within the heap
	static void setMatureGenerationBase(void *base)  { _matureGenerationBase = base; }
	static void* getMatureGenerationBase()			  { return _matureGenerationBase; }
	static void setMatureGenerationSize(size_t size) { _matureGenerationSize = size; }
	static size_t getMatureGenerationSize()		  { return _matureGenerationSize; }
	static void setCMSGeneration(ConcurrentMarkSweepGeneration *cmsG)
	{ _concurrentMarkSweepGeneration = cmsG; }
	// Checks whether the occupancy of the mature generation in the CMS heap has been reached
	static bool CMS_OccupancyReached();
	// Performs swap out operation on the mature generation of the CMS heap if it is sufficiently full
	static void CMS_swapOut_operation();
	static void setPhysicalRAM(size_t size) { _availableRAM = size; }
	static size_t getPhysicalRAM()		    { return _availableRAM; }
	static void incrementAvailableRAM(size_t bytes)		{ _availableRAM += bytes; }
	static void decrementAvailableRAM(size_t bytes)		{ _availableRAM -= bytes; }
	static void incrementPagesSwappedIn(size_t nP)		{ _pagesOutOfCore -= nP;  }
	static void incrementPagesSwappedOut(size_t nP)		{ _pagesOutOfCore += nP;  }
};

#endif /* HEAPMONITOR_H_ */
