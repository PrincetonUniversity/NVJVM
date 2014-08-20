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
void *HeapMonitor::_matureGenerationBase = NULL;
ConcurrentMarkSweepGeneration* HeapMonitor::_concurrentMarkSweepGeneration = NULL;
double HeapMonitor::_swapOutOccupancyThreshold = 0.2;
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
	if(CMS_OccupancyReached() && false){
		VirtualSpace* vs = _concurrentMarkSweepGeneration->getVirtualSpace();
		if(_inCoreBottom == NULL)
			_inCoreBottom = Utility::getPageStart(vs->low());
		 void *high = Utility::getPageStart(vs->high());
		 void *defaultHigh = Utility::nextPageInc(_inCoreBottom, _defaultPages);
		 void *swapOutTop = Utility::minPointer(high, defaultHigh);
		 int numberPages = Utility::numberPages(_inCoreBottom, swapOutTop);
		 if(numberPages > 0){
			 SSDSwap::CMS_swapOut(_inCoreBottom, numberPages);
			 _inCoreBottom = swapOutTop;
		 }
	} else {
		return;
	}
}

// spaceUsed should be the part of the mature space that is in physical memory.
// physicalRAM can actually be fixed.
bool HeapMonitor::CMS_OccupancyReached(){
	assertF(_concurrentMarkSweepGeneration != NULL, "concurrentMarkSweepGeneration in HeapMonitor is NULL");
	size_t spaceUsed = _concurrentMarkSweepGeneration->used();
	double ratioUsed = (double) spaceUsed / (double)Universe::getPhysicalRAM();

#if HM_Occupancy_Log
	size_t capacity = _concurrentMarkSweepGeneration->capacity();
	printf("Current spaceUsed = %f MB, RAM_Available = %f MB,  ratioOfLimitUsed %f.\n",
			Utility::toMB(spaceUsed), Utility::toMB(Universe::getPhysicalRAM()), ratioUsed);
	fflush(stdout);
#endif

	return (ratioUsed > _swapOutOccupancyThreshold);
}




















