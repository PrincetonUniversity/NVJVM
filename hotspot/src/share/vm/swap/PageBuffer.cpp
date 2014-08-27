/*
 * PageBuffer.cpp
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#include "PageBuffer.h"
#include "SwapWriter.h"

PageBuffer::PageBuffer() {
	// TODO Auto-generated constructor stub
}

PageBuffer::~PageBuffer() {
	// TODO Auto-generated destructor stub
}

// Method that checks whether the whole set of pages are zeroed or not
bool PageBuffer::check(void *va, int np){
	int zP = Utility::countZeroedPages(va, np);
	if(zP == np){
		if (madvise (va, (unsigned long)(np * Utility::getPageSize()), MADV_DONTNEED) == -1){ // After swap out the page is advised to be not needed
			perror("error :");
			printf("Error In Protecting Page %p \n", va);
			fflush(stdout);
			exit(1);
		}
	}
	return (zP == np);
}

void PageBuffer::zeroSwap(void *start, int np){
	if (madvise (start, (unsigned long)(np * Utility::getPageSize()), MADV_DONTNEED) == -1){ // After swap out the page is advised to be not needed
		perror("error :");
		printf("Error In Protecting Page %p \n", start);
		fflush(stdout);
		exit(1);
	}

#if SWAP_METRICS
	SwapMetric::incrementZeroedPages(np);
#endif
}

void PageBuffer::swapOutRange(void *va, int np){
	void *start = NULL;
	int pagesToSwap = np, pageStreak = 0, diff = 0;
	void *swapOutStart = va;
	void *currStart = va;
	void *end = Utility::nextPageInc(va, np);
	while(pagesToSwap > 0 && __index(currStart) < __index(end)){
		pageStreak = Utility::getNextContinuousZeroedPagesStreak(currStart, pagesToSwap, &start);
		if(pageStreak > 0.1 * np){
			if(__index(start) > __index(swapOutStart)){
				diff = Utility::numberPages(swapOutStart, start);
				pageOut(va, diff);
				pagesToSwap -= diff;
			}
			pagesToSwap -= pageStreak;
			zeroSwap(start, pageStreak);
			currStart = swapOutStart = Utility::nextPage(Utility::nextPageInc(start, pageStreak));
		} else {
			if(pageStreak == 0)
				break;
			currStart = Utility::nextPage(Utility::nextPageInc(start, pageStreak));
			continue;
		}
	}
	if(__index(swapOutStart) < __index(currStart)){
		pageOut(swapOutStart, pagesToSwap);
	}
}

void PageBuffer::pageOut(void *va, int np) {
	int pageIndex = __index(va);
	int off = pageIndex * sysconf(_SC_PAGE_SIZE);

	// Writing the page out to swap
	if (L_SWAP){
		printf("In pageOut, paging out %d pages, from %p. Number of pages released = %d.\n", np, va, np);
		fflush(stdout);
	}
	// Write protecting the memory region - only a single thread must have control over the region

	if(Swap_Protect) {
	  if (mprotect (va, np* Utility::getPageSize(), PROT_READ) == -1){
		perror("error :");
		printf("Error In Write Protecting Page %p \n", va);
		fflush(stdout);
		exit(1);
		}
	}

	SwapWriter::swapOut (va, np, off);

	// Protecting the swapped out page
	if(Swap_Protect){
		if (mprotect (va, np*  Utility::getPageSize(), PROT_NONE) == -1){
			perror("error :");
			printf("Error In Protecting Page %p \n", va); fflush(stdout);
			exit(-1);
		} else if(L_SWAP) {
			printf("Protecting %d pages beginning at %p, index %ld.\n", np, va, Universe::getPageIndex(va));
			fflush(stdout);
		}
	}

	// Marking the region as not needed so that the OS can free the resources
	if (madvise (va, (unsigned long)(np * Utility::getPageSize()), MADV_DONTNEED) == -1){ // After swap out the page is advised to be not needed
		perror("error :");
		printf("Error In Protecting Page %p \n", va);
		fflush(stdout);
		exit(1);
	}

	SSDSwap::markRegionSwappedOut(va, np); // Marking the region as swapped out, in the region bitmap
}
