/*
 * PSPartitionMetaData.hpp
 *
 *  Created on: Dec 15, 2014
 *      Author: ravitandon
 */

#ifndef PSPARTITIONMETADATA_HPP_
#define PSPARTITIONMETADATA_HPP_

#include <unistd.h>
#include <sys/mman.h>
#include <unistd.h>
#include "memory/universe.hpp"
#include "swap/Utility.h"

#define NO_OBJECT_START_SHIFT 14 // the bit position (it is actually NO_OBJECT_START_SHIFT + 1)
// that represents that no object start is present on the current page
#define NO_OBJECT_MASK 1 << 14   // the mask that represents that no object start is present on a given page

#define _PAGE_SIZE sysconf(_SC_PAGE_SIZE)

#define __page_start(p) \
	(void *)((long)p & (~(_PAGE_SIZE-1)))

#define __page_start_long(p) \
	((long)p & (~(_PAGE_SIZE-1)))

#define __page_end(p) \
	(void *)((long)p | ((_PAGE_SIZE-1)))

#define __in_core(p) \
		isInCore(p)

#define __pageIndex(p) \
	Universe::getPageIndex(p)

#define __numPages(top, bot) \
		(((uintptr_t)__page_start(top) - (uintptr_t)__page_start(bot))/(_PAGE_SIZE)) + 1

#define __t_id() \
	Thread::current()->osthread()->thread_id()

#define _pm_ \
	getPartitionMetaData()

class PSPartitionMetaData {

private:
	int _pagesScanned;
	int _pagesMarkScanned;
	int _partitionsScanned; // the number of partitions scanned by the mark sweep threads
	bool _doPrint;
	int totalDecrements;
	int totalIncrements;
//  Keeps the offset of the highest allocated object for each page in order to make sure that the sweep phase can
//  easily iterate through each page independent of the other pages
	jshort* _pageStart;
// Keeps a track of the number of the grey objects per page
	int* _pageGOC;
	jubyte* _pageScanned;
// Keeps a track of the number of the grey object count per partition
	int* _partitionGOC;
// Total number of partitions
	int _numberPartitions;
// The span that contains the mature and the permanent spaces
	MemRegion _span;
// The average partition size
	int _partitionSize;
// Total number of collector threads running concurrently after the dirty card clean up phase
	int _numberCollectorThreads;
// Shared memory for communicating the number of threads that are idle - an integer is good enough
	int _idleThreadCount[1];
// Shared memory for communicating signals from the master to the collector threads
	int _message[1];
	int _numberPages;
	// This is a bit map of the partitions. For each partition within the span, a byte is stored.
	jbyte* _partitionMap;
	int _garbageChunks;
    bool _yield;

public:
    // Message States Used
	enum MessageState {
		WORK = 0,
		WAIT = 1,
		TERMINATE = 2,
		YIELD = 3,
		WORK_FINAL = 4
	};

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
	void *getPageEnd(int pageIndex);
	void *getPageBase(int pageIndex);
	int getHighPriorityPageNoMinCore(int partitionIndex);
	int getHighPriorityPage(int partitionIndex);
	bool releasePartition(int partitionIndex);
	int getGreyCount(int p);
	std::vector<int> toSweepPageList(int currentPartition, int *inCoreCount);
	std::vector<int> toScanPageList(int currentPartition);
	int getPageFromNextPartition(int currentPartition);
	void initialize(MemRegion span);
	void resetGOCPartition();
	void releaseResources();
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
	bool isZero(int pageIndex);
	void getZeroPages();
	int getTotalGreyObjectsChunkLevel();
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
	unsigned int incrementIndex_Atomic(int increment, void *pageAddress);
	void markObject(void *address);
	unsigned int decrementIndex_Atomic(int decrement, void* pageAddress);
    bool checkToYield();
    int getPartition(int currentIndex);
};


#endif /* PSPARTITIONMETADATA_HPP_ */
