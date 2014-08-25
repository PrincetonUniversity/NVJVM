/*
 * HeapMonitor.cpp
 *
 *  Created on: Aug 12, 2014
 *      Author: ravitandon
 */

#include "HeapMonitor.h"
#include "string.h"

// Initializing the static variables
void *HeapMonitor::_inCoreBottom = NULL;
void *HeapMonitor::_lastSwapOut = NULL;
void *HeapMonitor::_matureGenerationBase = NULL;
ConcurrentMarkSweepGeneration* HeapMonitor::_concurrentMarkSweepGeneration = NULL;
double HeapMonitor::_swapOutOccupancyThreshold = 0.80;
size_t HeapMonitor::_matureGenerationSize = 0;
int HeapMonitor::_defaultPages = 256*100;
size_t HeapMonitor::_availableRAM = 0;
bool HeapMonitor::_isInit = false;
size_t HeapMonitor::_pagesMatureSpace;
size_t HeapMonitor::_pagesOutOfCore;

void assertF(bool condition, string message){
#if HM_ASSERT
	if(!condition){
		printf("%s", message);
		exit(-1);
	}
#endif
}

HeapMonitor::HeapMonitor() {
	// TODO Auto-generated constructor stub
}

void HeapMonitor::init() {
	setPhysicalRAM(Universe::getPhysicalRAM());
	_isInit = true;
}

void HeapMonitor::CMS_swapOut_operation(){
	size_t nPages = numPagesToEvict();
	size_t pagesToEvict = nPages;
	VirtualSpace* vs = _concurrentMarkSweepGeneration->getVirtualSpace();
	void *high = Utility::getPageStart(vs->high());
	void *low = Utility::getPageStart(vs->low());
	void *end = NULL;
	void *start = NULL;

	if(_inCoreBottom == NULL)
		_inCoreBottom = low;
	if(_lastSwapOut == NULL)
		_lastSwapOut = low;
	int nCPages = 0;
	if((nPages > 0) && CMS_Swap){
		while(pagesToEvict > 0){
			printf("Number of pages to evict %d \n", pagesToEvict);
			nCPages = Utility::getContinuousFreePagesBetween(_lastSwapOut, high, pagesToEvict, &start, &end);
			printf("Number of continuous pages %d \n", nCPages);
				if(nCPages > 0){
					SSDSwap::CMS_swapOut(start, nCPages);
					pagesToEvict -= nCPages;
					_lastSwapOut = end;
				} else{
					_lastSwapOut = end;
					break;
				}
			}
	// Resetting the _lastSwapOut Page Index
		if(Universe::getPageIndex(_lastSwapOut) >= Universe::getPageIndex(high)){
			_lastSwapOut = low;
		}
		}
}

// Currently size of the permanent generation is not included
size_t HeapMonitor::getOverallSpaceUsedCurrent(){
	GenCollectedHeap* gch = ((GenCollectedHeap *)Universe::heap());
	size_t _newGenerationSize = gch->get_gen(0)->committedSize();
	size_t _oldGenerationSize = gch->get_gen(1)->committedSize();
	size_t _permGenerationSize = gch->perm_gen()->committedSize();
	return _newGenerationSize + _oldGenerationSize + _permGenerationSize;
}

double HeapMonitor::getOverloadRatio(){
	size_t spaceUsed = getOverallSpaceUsedCurrent() - _pagesOutOfCore *  Utility::getPageSize();
	double ratioUsed = (double) spaceUsed / (double)Universe::getPhysicalRAM();
    return (ratioUsed - _swapOutOccupancyThreshold);

}

size_t HeapMonitor::numPagesToEvict(){
	size_t nPages = 0;
	double ratioDiff = getOverloadRatio();
	if(ratioDiff > 0){
		nPages = ratioDiff * Universe::getPhysicalRAM() / Utility::getPageSize();
	}
	return nPages;
}

// spaceUsed should be the part of the mature space that is in physical memory.
// physicalRAM can actually be fixed.
bool HeapMonitor::CMS_OccupancyReached(){
	assertF(_concurrentMarkSweepGeneration != NULL, "concurrentMarkSweepGeneration in HeapMonitor is NULL");

	// The space used should have the overall space used from
	size_t spaceUsed = getOverallSpaceUsedCurrent() - _pagesOutOfCore *  Utility::getPageSize();
	double ratioUsed = (double) spaceUsed / (double)Universe::getPhysicalRAM();

#if HM_Occupancy_Log
	size_t capacity = _concurrentMarkSweepGeneration->capacity();
	printf("Current spaceUsed = %f MB, RAM_Available = %f MB,  ratioOfLimitUsed %f.\n",
			Utility::toMB(spaceUsed), Utility::toMB(Universe::getPhysicalRAM()), ratioUsed);
	fflush(stdout);
#endif

	return (ratioUsed > _swapOutOccupancyThreshold);
}




















