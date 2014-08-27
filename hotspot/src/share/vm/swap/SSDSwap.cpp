/*
 * SSDSwap.cpp
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */


#include "SSDSwap.h"
#include "SwapMetric.h"
#include "Utility.h"

pthread_mutex_t SSDSwap::_swap_map_mutex[Mutex_Count];

// The handler to catch SIGSEGV faults on memory access
void* SSDSwap::seg_handler (void *addr){
	if(L_SWAP){
		printf("SSDSwap:segmentation handler called on %p\n", addr); fflush(stdout);
	}
	int partitionIndex = Universe::getPageTablePartition(addr, PageTablePartitions) - 1;
	pthread_mutex_lock(&_swap_map_mutex[partitionIndex]);
	SwapManager::remapPage(addr, true); // Currently we are synchronizing access to remapping pages
    pthread_mutex_unlock(&_swap_map_mutex[partitionIndex]);
}

// This method swaps in a complete region
void SSDSwap::swapInRegion(void *addr) {
	addr = SwapManager::getRegionStart(addr);
	char *regionPos = (char *)SwapManager::getRegionStart(addr);
//	char *prefetchPosition = (char *)Universe::getPrefetchTablePosition(addr);
	char *startRegionTable = (char *)Universe::getPageTablePosition(addr);
	char value;
	for(int count = 0; count < Universe::_regionPages; count++){
		value = *startRegionTable;
		if(value == Universe::_notPresentMask){ // || value == Universe::_partiallyFilledMask ){
			SwapManager::remapPage((void *)regionPos, false);
		} else if(value != Universe::_presentMask){
			printf("Error, value in the region table different from 0,1,2. Exiting.\n");
			fflush(stdout);
			exit(1);
		}
		startRegionTable++;
//		prefetchPosition++;
		regionPos = regionPos + _PAGE_SIZE;
	}
}

void SSDSwap::handle_faults(void *addr) {
	if(L_SWAP){
		printf("SSDSwap:handle_faults called on address = %p.\n", addr);
		fflush(stdout);
	}
	timespec time1, time2;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
	int partitionIndex = Universe::getPageTablePartition(addr, PageTablePartitions) - 1;
	pthread_mutex_lock(&_swap_map_mutex[partitionIndex]);
	if(L_SWAP){
		printf("SSDSwap:handle_faults called on address = %p. Entering RemapPage.\n", addr);
		fflush(stdout);
	}
	SwapManager::remapPage(addr, true); // Currently we are synchronizing access to remapping pages
	if(L_SWAP){
		printf("SSDSwap:handle_faults called on address = %p. RemapPage Done.\n", addr);
		fflush(stdout);
	}
//	SSDSwap::markRegion(addr, 0); // Marking the region as swapped in, region bitmap
//	SwapMetric::incrementSwapIns();
	pthread_mutex_unlock(&_swap_map_mutex[partitionIndex]);
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
	SwapMetric::incrementSwapInTime(time1, time2);
	if(L_SWAP){
		printf("SSDSwap:handle_faults called on address = %p. handle_faults Done.\n", addr);
		fflush(stdout);
	}
}

void SSDSwap::CMS_handle_faults_prefetch(void *addr, bool isJavaThread) {
	if(L_SWAP){
		printf("SSDSwap:CMS_handle_faults called on address = %p.\n", addr);
		fflush(stdout);
	}

	if(isJavaThread){
		swapInChunk(addr, Utility::nextPageInc(addr, 10));
		return;
	}

	int partitionIndex = Universe::getPageTablePartition(addr, PageTablePartitions) - 1;
	pthread_mutex_lock(&_swap_map_mutex[partitionIndex]);
	timespec time1, time2;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
	if(L_SWAP){
		printf("SSDSwap:CMS_handle_faults called on address = %p, index = %ld."
				"Entering SwapInPage.\n", addr, Universe::getPageIndex(addr));
		fflush(stdout);
	}
//	SwapManager::swapInPage(addr, 1); // Currently we are synchronizing access to remapping pages
	if(L_SWAP){
		printf("SSDSwap:handle_faults called on address = %p, index = %ld. RemapPage Done.\n",
				addr, Universe::getPageIndex(addr));
		fflush(stdout);
	}
	pthread_mutex_unlock(&_swap_map_mutex[partitionIndex]);
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
	SwapMetric::incrementSwapInTime(time1, time2);
	HeapMonitor::incrementPagesSwappedIn(1);
	if(L_SWAP){
		printf("SSDSwap:CMS_handle_faults called on address = %p, index = %ld. "
				"handle_faults Done.\n", addr, Universe::getPageIndex(addr));
		fflush(stdout);
	}
	HeapMonitor::CMS_swapout_synchronized();
#if Print_HeapMetrics
//	HeapMonitor::PrintHeapUsage();
#endif
}

void SSDSwap::CMS_handle_faults(void *addr) {
	if(L_SWAP){
		printf("SSDSwap:CMS_handle_faults called on address = %p.\n", addr);
		fflush(stdout);
	}
	int partitionIndex = Universe::getPageTablePartition(addr, PageTablePartitions) - 1;
	pthread_mutex_lock(&_swap_map_mutex[partitionIndex]);
	timespec time1, time2;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
	if(L_SWAP){
		printf("SSDSwap:CMS_handle_faults called on address = %p, index = %ld."
				"Entering SwapInPage.\n", addr, Universe::getPageIndex(addr));
		fflush(stdout);
	}
//	SwapManager::swapInPage(addr, 1); // Currently we are synchronizing access to remapping pages
	swapInChunk(addr, Utility::nextPageInc(addr, 10));
	if(L_SWAP){
		printf("SSDSwap:handle_faults called on address = %p, index = %ld. RemapPage Done.\n",
				addr, Universe::getPageIndex(addr));
		fflush(stdout);
	}
	pthread_mutex_unlock(&_swap_map_mutex[partitionIndex]);
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
	SwapMetric::incrementSwapInTime(time1, time2);
	HeapMonitor::incrementPagesSwappedIn(1);
	if(L_SWAP){
		printf("SSDSwap:CMS_handle_faults called on address = %p, index = %ld. "
				"handle_faults Done.\n", addr, Universe::getPageIndex(addr));
		fflush(stdout);
	}
	HeapMonitor::CMS_swapout_synchronized();
#if Print_HeapMetrics
//	HeapMonitor::PrintHeapUsage();
#endif
}


SSDSwap::SSDSwap() {
	//_ssd_manager = new SSDManager();
	//_swap_manager = new SwapManager ();
}

SSDSwap::~SSDSwap() {
	// TODO Auto-generated destructor stub
}

// Currently the number of pages swapped out is restricted to 1
void SSDSwap::CMS_swapOut_synchronized(void *sa, int numberPages){
	timespec time1, time2;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
	sa = Utility::getPageStart(sa);
	int partitionIndex = Universe::getPageTablePartition(sa, PageTablePartitions) - 1;
	pthread_mutex_lock(&_swap_map_mutex[partitionIndex]);
	PageBuffer::swapOutRange(sa, numberPages);
	pthread_mutex_lock(&_swap_map_mutex[partitionIndex]);
	HeapMonitor::incrementPagesSwappedOut(numberPages);
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
	SwapMetric::incrementSwapOutTime(time1, time2);
}

void SSDSwap::CMS_swapOut(void *sa, int numberPages){
	timespec time1, time2;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
	sa = Utility::getPageStart(sa);
	PageBuffer::swapOutRange(sa, numberPages);
	HeapMonitor::incrementPagesSwappedOut(numberPages);
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
	SwapMetric::incrementSwapOutTime(time1, time2);
}

void SSDSwap::swapOut(void *end, void *bot, void *top){
	timespec time1, time2;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
	if(L_SWAP){
		printf("SSDSwap::swapOut::In swapOut, swapping out top = %p, bottom = %p, end = %p\n", top, bot, end); fflush(stdout);
	}
	SwapRange* swapRange = SwapManager::addressRegion(end, bot, top); // Should move to SSDSwap class
	int off = SSDManager::get(swapRange->getNumPages()); // Synchronized method
	int numPagesToRelease = Utility::getNumPages(top, bot);
	if(L_SWAP){
		printf("Releasing Number Of Pages = %d.\n", numPagesToRelease);
		fflush(stdout);
	}
//	SwapManager::swapRange(swapRange, off, numPagesToRelease);
//	SSDSwap::markRegionSwappedOut(bot, numPagesToRelease); // Marking the region as swapped out, in the region bitmap
	if(L_SWAP){
		printf("SSDSwap::swapOut::In swapOut, swapOut done successfully\n");
		fflush(stdout);
	}
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
	SwapMetric::incrementSwapOutTime(time1, time2);
}

// Here, we mark only those pages as paged out that have objects within the page.
// Here, n denotes the number of pages that have been swapped out.

void SSDSwap::markRegionSwappedOut(void *addr, int n){
	int count;
	for(count = 0; count < n; count++){
		Universe::markSwappedOut(addr);
		addr = Utility::nextPage(addr);
	}
}

void SSDSwap::checkAccessSwapIn(void *pageAddress, int purpose){
	if(Universe::isSwappedOut(pageAddress)){
		SwapMetric::incrementAccessInterceptCount(purpose);
		CMS_handle_faults(pageAddress);
	}
	void* objectEnd = (void *)((intptr_t)pageAddress + 16);
    if (true){
	if(Universe::getPageIndex(objectEnd) > Universe::getPageIndex(pageAddress)){
		if(Universe::isSwappedOut(objectEnd)){
			SwapMetric::incrementAccessInterceptCount(purpose);
			CMS_handle_faults(objectEnd);
		}
	}
    }
}

void SSDSwap::checkAccessSwapInRegion(void *bottom, void *top, int purpose){
	void *curr = bottom;
	while(true){
		if(Universe::isSwappedOut(curr)){
			SwapMetric::incrementAccessInterceptCount(purpose);
			CMS_handle_faults(curr);
		}
		curr = Utility::nextPage(curr);
		if((intptr_t)curr > (intptr_t)top)
			break;
	}
}

void SSDSwap::checkAccessWithSize(void *header, size_t size, int purpose){
	void *end = (void *)((intptr_t)header + (intptr_t)size);
	void *curr = header;
	while (Universe::getPageIndex(curr) <= Universe::getPageIndex(end)){
		if(Universe::isSwappedOut(curr)){
			SwapMetric::incrementAccessInterceptCount(purpose);
			CMS_handle_faults(curr);
		}
		curr = Utility::nextPage(curr);
	}
}

/*
 * This is the method that swaps in a chunk of continuous pages.
 */
void SSDSwap::swapInChunk(void *start, void *end){
	int partitionIndexS = Universe::getPageTablePartition(start, PageTablePartitions) - 1;
	int partitionIndexE = Universe::getPageTablePartition(end, PageTablePartitions) - 1;
	int pagesToBeSwappedIn = Utility::numberPages(start, end), numPages;
	int nPagesSwappedIn = 0;
	void *curr = start;
	void *first = NULL;
	void *last = NULL;
	if(partitionIndexS == partitionIndexE){
		timespec time1, time2;
		clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
		while(Universe::getPageIndex(curr) < Universe::getPageIndex(end)){
			pthread_mutex_lock(&_swap_map_mutex[partitionIndexS]);
				numPages = Utility::getContinuousPagesOutOfCorePages(curr, end, &first, &last);
				if(numPages > 0){
					SwapManager::swapInPage(first, numPages); // Currently we are synchronizing access to remapping pages
					nPagesSwappedIn += numPages;
				}
				curr = last;
			pthread_mutex_unlock(&_swap_map_mutex[partitionIndexS]);
			}
			clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
			SwapMetric::incrementSwapInTime(time1, time2);
			HeapMonitor::incrementPagesSwappedIn(nPagesSwappedIn);
	} else {
		// find the boundary
		void *boundary = Utility::getBoundary(start, end, PageTablePartitions);
		swapInChunk(start, boundary);
		swapInChunk(Utility::nextPage(boundary), end);
	}
}















