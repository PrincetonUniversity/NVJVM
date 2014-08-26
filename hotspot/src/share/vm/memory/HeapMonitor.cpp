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
double HeapMonitor::_swapOutOccupancyThreshold = 0.90;
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
	double before_ratio = (double)getOverallSpaceUsedCurrent()/(double)Universe::getPhysicalRAM();
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
			_lastSwapOut = end;
			printf("Number of continuous pages %d \n", nCPages);
				if(nCPages > 0){
					SSDSwap::CMS_swapOut(start, nCPages);
					pagesToEvict -= nCPages;
				} else {
					break;
				}
			}
	// Resetting the _lastSwapOut Page Index
			if(Universe::getPageIndex(_lastSwapOut) >= Universe::getPageIndex(high)){
				_lastSwapOut = low;
			}
		}
	double after_ratio = (double)getOverallSpaceUsedCurrent()/(double)Universe::getPhysicalRAM();
#if Print_HeapMetrics
	printf("CMS_SWAPOUT_OPERATION Done. OverloadRatioChange = %lf -> %lf \n", before_ratio, after_ratio);
#endif
}

// Currently size of the permanent generation is not included
size_t HeapMonitor::getOverallSpaceUsedCurrent(){
	GenCollectedHeap* gch = ((GenCollectedHeap *)Universe::heap());
	size_t _newGenerationSize = gch->get_gen(0)->used();
	size_t _oldGenerationSize = gch->get_gen(1)->used();
	size_t _permGenerationSize = gch->perm_gen()->used();
	size_t totalUsedSize = _newGenerationSize + _oldGenerationSize + _permGenerationSize;
	size_t totalUsage = totalUsedSize - _pagesOutOfCore *  Utility::getPageSize();
#if Print_HeapMetrics
	printf("Total Heap Usage %lf MB\n", Utility::toMB(totalUsage));
#endif
	return totalUsage;
}

double HeapMonitor::getUsageRatio(){
	size_t spaceUsed = getOverallSpaceUsedCurrent();
	double ratioUsed = (double) spaceUsed / (double)Universe::getPhysicalRAM();
	return ratioUsed;
}

double HeapMonitor::getOverloadRatio(){
	double ratioUsed = getUsageRatio();
    double overLoadRatio = (ratioUsed - _swapOutOccupancyThreshold);
#if Print_HeapMetrics
    printf("Overload Ratio %lf.\n", overLoadRatio);
#endif
    return overLoadRatio;

}

size_t HeapMonitor::numPagesToEvict(){
	size_t nPages = 0;
	double ratioDiff = getOverloadRatio();
	if(ratioDiff > 0){
		nPages = ratioDiff * Universe::getPhysicalRAM() / Utility::getPageSize();
	}
	return nPages;
}

void HeapMonitor::PrintHeapUsage(){
   double r = getUsageRatio();
   printf("HeapUsage = %lf \n", r);
}

// spaceUsed should be the part of the mature space that is in physical memory.
// physicalRAM can actually be fixed.
bool HeapMonitor::CMS_OccupancyReached(){
	assertF(_concurrentMarkSweepGeneration != NULL, "concurrentMarkSweepGeneration in HeapMonitor is NULL");

	// The space used should have the overall space used from
	size_t spaceUsed = getOverallSpaceUsedCurrent();
	double ratioUsed = (double) spaceUsed / (double)Universe::getPhysicalRAM();

#if HM_Occupancy_Log
	size_t capacity = _concurrentMarkSweepGeneration->capacity();
	printf("Current spaceUsed = %f MB, RAM_Available = %f MB,  ratioOfLimitUsed %f.\n",
			Utility::toMB(spaceUsed), Utility::toMB(Universe::getPhysicalRAM()), ratioUsed);
	fflush(stdout);
#endif

	return (ratioUsed > _swapOutOccupancyThreshold);
}




















