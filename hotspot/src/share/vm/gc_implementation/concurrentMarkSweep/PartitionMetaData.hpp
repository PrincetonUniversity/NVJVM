#ifndef PARTITIONMETADATA_HPP_
#define PARTITIONMETADATA_HPP_

#include <unistd.h>
#include <sys/mman.h>
#include <unistd.h>
#include "memory/universe.hpp"
#include "swap/Utility.h"

class CMSConcMarkingTask;

class PartitionMetaData {
	int _pagesScanned;
	int _pagesMarkScanned;
	int _partitionsScanned;
	bool _doPrint;
	int totalDecrements;
	int totalIncrements;
	jshort* _pageStart;
	int* _pageGOC;
	jubyte* _pageScanned;
	int* _partitionGOC;
	int* _bytesOccupiedPage;
	int* _partitionAliveObjectCount;
	int _numberPartitions;
	MemRegion _span;
	int _partitionSize;
	int _numberCollectorThreads;
	int _idleThreadCount[1];
	int _message[1];
	CMSCollector* _collector;
	int _numberPages;
	jbyte* _partitionMap;
	int _garbageChunks;
	CMSConcMarkingTask* _task;
    bool _yield;
    double _pageOccupancyRatio;

	enum MessageState {
		WORK = 0,
		WAIT = 1,
		TERMINATE = 2,
		YIELD = 3,
		WORK_FINAL = 4
	};

public:
	void setDoPrint(bool flag);
	bool getDoPrint();
	void resetPagesScanned();
	void resetPagesMarkScanned();
	void incrementPagesScanned();
	void incrementPagesMarkScanned();
	int getPagesScanned();
	int getPagesMarkScanned();
	void resetPartitionsScanned();
	void incrementGarbageChunks();
	int getGarbageChunks();
	void resetPartitionMap();
	bool shouldScanningStop();
	int getFlag();
	int getIdleThreadCount();
	void resetThreadCount();
	void decreaseBy(int count);
	void increaseBy(int count);
	void setMessageState (MessageState state);
	bool isSetToWorkFinal();
	bool isSetToYield();
	bool isSetToWait();
	bool isSetToTerminate();
	void setToYield();
	void setToWait();
	void setToWork();
	void setToWorkFinal();
	void setToTerminate();
	MessageState getMessageState();
	bool areThreadsSuspended();
	int numberPages();
	int getGreyPageCount();
	int nextPartitionIndex(int currPartitionIndex);
	bool markAtomic(int partitionIndex);
	bool clearAtomic(int partitionIndex);
	int incrementPartitionsScanned(bool isParallel);
	int getNextPartition(int currentPartitionIndex);
	bool liesInMatureSpace(void *address);
	int getPageIndexFromPageAddress(void *address);
	int getPartitionStart(int partitionIndex);
	int getPartitionSize(int partitionIndex);
	int getPartitionSizeBytes(int partitionIndex);
	bool shouldCompact(int partitionIndex);
	void *getPageEnd(int pageIndex);
	void *getPageBase(int pageIndex);
	int getHighPriorityPageNoMinCore(int partitionIndex);
	int getHighPriorityPage(int partitionIndex);
	bool releasePartition(int partitionIndex);
	std::vector<int> toSweepPageList(int currentPartition, int *inCoreCount);
	std::vector<int> toScanPageList(int currentPartition, bool finalWork);
	int getPageFromNextPartition(int currentPartition);
	int getPageFromNextPartitionNoMinCore(int currentPartition);
	PartitionMetaData(CMSCollector* cmsCollector, MemRegion span);
	void printPartitionAliveObjectCount();
	double averageOccupancyRatio();
	bool shouldScanPage(int pageIndex);
	void incrementBytesPage(int size, int pageIndex);
	void clearBytesOccupiedPerPage();
	void printRatioOfBytesPerPage();
	void clearBytesPerPage(int pageIndex);
	~PartitionMetaData();
	void resetGOCPartition();
	void resetAOCPartition();
	void resetGOCPage();
	void resetPageScanned();
	void reset();
	int getTotalGreyObjectsPageLevel();
	jshort heapWordToShort(HeapWord* address);
	void* offsetToWordAddress(jshort off, int pageIndex);
	jshort store_Atomic(HeapWord* address, int index);
	jshort store_AtomicShort(jshort newValue, int index);
	bool objectDeallocatedCMSSpace(HeapWord* address, HeapWord* newAddress);
	void objectAllocatedCMSSpace(HeapWord* address);
	bool isPageStart(HeapWord* address);
	void* objectStartAddress(int pageIndex);
	bool shouldSweepScanPage(int pageIndex);
	bool shouldSweepScanPageAddr(void *addr);
	int numPagesWithNoStartMark();
	int getGreyObjectsChunkLevel(int p);
	int getAliveObjectsChunkLevel(int p);
	bool isZero(int pageIndex);
	void getZeroPages();
	int getTotalGreyObjectsChunkLevel();
	int getTotalAliveObjectsChunkLevel();
	bool doWeTerminate();
	int incrementWaitThreadCount();
	int decrementWaitThreadCount();
	bool checkAndWait();
	int getMin(int a, int b);
	int getPartitionIndexFromPage(int pageIndex);
	int getPartitionIndexFromPageAddress(void *pageAddress);
	unsigned int clearGreyObjectCount_Page(void *pageAddress);
	void pageScanned(int pageIndex);
	bool isPageScanned(int pageIndex);
	unsigned int incrementIndex_AtomicPage(int increment, void *pageAddress);
	unsigned int decrementIndex_AtomicPage(int decrement, void *pageAddress);
	unsigned int incrementAliveObjectCount(int increment, void *pageAddress);
	unsigned int decrementAliveObjectCount(int decrement, void* pageAddress);
	unsigned int incrementIndex_Atomic(int increment, void *pageAddress);
	unsigned int decrementIndex_Atomic(int decrement, void* pageAddress);
	bool checkToYield();
	void do_yield_check();
	void do_yield_work();
	int getPartition(int currentPartition);
	void setDoyield(bool v) { _yield = v; }
	void setCMSTask(CMSConcMarkingTask* tsk){ _task = tsk; }
};

#endif
