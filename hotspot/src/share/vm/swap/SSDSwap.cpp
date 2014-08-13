/*
 * SSDSwap.cpp
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */


#include "SSDSwap.h"
#include "SwapMetric.h"
#include "Utility.h"

pthread_mutex_t SSDSwap::_swap_map_mutex;

// The handler to catch SIGSEGV faults on memory access
void* SSDSwap::seg_handler (void *addr){
	if(L_SWAP){
		printf("SSDSwap:segmentation handler called on %p\n", addr); fflush(stdout);
	}
	pthread_mutex_lock(&_swap_map_mutex);
	SwapManager::remapPage(addr, true); // Currently we are synchronizing access to remapping pages
    pthread_mutex_unlock(&_swap_map_mutex);
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
	pthread_mutex_lock(&_swap_map_mutex);
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
	pthread_mutex_unlock(&_swap_map_mutex);
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
	SwapMetric::incrementSwapInTime(time1, time2);
	if(L_SWAP){
		printf("SSDSwap:handle_faults called on address = %p. handle_faults Done.\n", addr);
		fflush(stdout);
	}
}

void SSDSwap::CMS_handle_faults(void *addr) {
	if(L_SWAP){
		printf("SSDSwap:CMS_handle_faults called on address = %p.\n", addr);
		fflush(stdout);
	}
	timespec time1, time2;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
	pthread_mutex_lock(&_swap_map_mutex);
	if(L_SWAP){
		printf("SSDSwap:CMS_handle_faults called on address = %p, index = %ld."
				"Entering SwapInPage.\n", addr, Universe::getPageIndex(addr));
		fflush(stdout);
	}
	SwapManager::swapInPage(addr, 1); // Currently we are synchronizing access to remapping pages
	if(L_SWAP){
		printf("SSDSwap:handle_faults called on address = %p, index = %ld. RemapPage Done.\n",
				addr, Universe::getPageIndex(addr));
		fflush(stdout);
	}
	pthread_mutex_unlock(&_swap_map_mutex);
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time2);
	SwapMetric::incrementSwapInTime(time1, time2);
	Universe::decrementAvailableRAM(1*sysconf(_SC_PAGE_SIZE));
	if(L_SWAP){
		printf("SSDSwap:CMS_handle_faults called on address = %p, index = %ld. "
				"handle_faults Done.\n", addr, Universe::getPageIndex(addr));
		fflush(stdout);
	}
}


SSDSwap::SSDSwap() {
	//_ssd_manager = new SSDManager();
	//_swap_manager = new SwapManager ();
}

SSDSwap::~SSDSwap() {
	// TODO Auto-generated destructor stub
}

void SSDSwap::CMS_swapOut(void *sa, int numberPages){
	timespec time1, time2;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &time1);
	sa = Utility::getPageStart(sa);
	size_t pageIndex = Universe::getPageIndex(sa);
	size_t offsetSSD = pageIndex * sysconf(_SC_PAGE_SIZE);
	PageBuffer::pageOut(sa, numberPages, offsetSSD, numberPages);
	SSDSwap::markRegionSwappedOut(sa, numberPages); // Marking the region as swapped out, in the region bitmap
	Universe::incrementAvailableRAM(numberPages * sysconf(_SC_PAGE_SIZE));
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
	SwapManager::swapRange(swapRange, off, numPagesToRelease);
	SSDSwap::markRegionSwappedOut(bot, numPagesToRelease); // Marking the region as swapped out, in the region bitmap
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
	//	char* position = (char *)Universe::getRegionTablePosition(addr);
	//	char* endPosition = position  + n - 1;
	//	memset(position, Universe::_notPresentMask, n);
//	if(L_SWAP){
//		printf("SSDSwap::markRegionSwappedOut::Marked Position Range = %p, %p\n",
//				(char *)Universe::getRegionTablePosition(addr), endPosition);
//		fflush(stdout);
//	}
}
