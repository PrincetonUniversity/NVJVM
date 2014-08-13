/*
 * HeapMonitor.cpp
 *
 *  Created on: Aug 12, 2014
 *      Author: ravitandon
 */

#include "HeapMonitor.h"

// Initializing the static variables
void *HeapMonitor::_inCoreBottom = NULL;
void *HeapMonitor::_matureGenerationBase = NULL;
ConcurrentMarkSweepGeneration* HeapMonitor::_concurrentMarkSweepGeneration = NULL;
double HeapMonitor::_swapOutOccupancyThreshold = 0.5;
size_t HeapMonitor::_matureGenerationSize = 0;
int HeapMonitor::_defaultPages = 256;
size_t HeapMonitor::_availableRAM = 0;

void assertF(bool condition, char *message){
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

void HeapMonitor::CMS_swapOut_operation(){
	if(CMS_OccupancyReached()){
		VirtualSpace* vs = _concurrentMarkSweepGeneration->getVirtualSpace();
		if(_inCoreBottom == NULL)
			_inCoreBottom = Utility::getPageStart(vs->low());
		 void *high = Utility::getPageStart(vs->high());
		 void *defaultHigh = Utility::nextPageInc(_inCoreBottom, _defaultPages);
		 void *swapOutTop = Utility::minPointer(high, defaultHigh);
		 int numberPages = Utility::numberPages(_inCoreBottom, swapOutTop);
		 SSDSwap::CMS_swapOut(_inCoreBottom, numberPages);
		 _inCoreBottom = swapOutTop;
	} else {
		return;
	}
}

bool HeapMonitor::CMS_OccupancyReached(){
	assertF(_concurrentMarkSweepGeneration != NULL, "concurrentMarkSweepGeneration in HeapMonitor is NULL");
	size_t spaceUsed = _concurrentMarkSweepGeneration->used();
	double ratioUsed = (double) spaceUsed / (double)getPhysicalRAM();

#if HM_Occupancy_Log
	size_t capacity = _concurrentMarkSweepGeneration->capacity();
	printf("Current spaceUsed = %ld, capacity = %ld,  ratioOfLimitUsed %f.\n", spaceUsed, capacity, ratioUsed); fflush(stdout);
#endif

	return (ratioUsed > _swapOutOccupancyThreshold);
}
