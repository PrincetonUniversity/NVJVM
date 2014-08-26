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

bool PageBuffer::check(void *va, int np){
	int zP = Utility::countZeroedPages(va, np);
	if(zP == np){
		if (madvise (va, (unsigned long)(np * _PAGE_SIZE), MADV_DONTNEED) == -1){ // After swap out the page is advised to be not needed
			perror("error :");
			printf("Error In Protecting Page %p \n", va);
			fflush(stdout);
			exit(1);
		}
	}
	return (zP == np);
}

SSDRange PageBuffer::pageOut(void *va, int np, int off, int numPagesToRelease) {
	if(check(va, np)){
		return NULL;
	}
	// Writing the page out to swap
	if (L_SWAP){
		printf("In pageOut, paging out %d pages, from %p. Number of pages released = %d.\n", np, va, numPagesToRelease);
		fflush(stdout);
	}
	// Write protecting the memory region - only a single thread must have control over the region

	if(Swap_Protect) {
	  if (mprotect (va, np*_PAGE_SIZE, PROT_READ) == -1){
		perror("error :");
		printf("Error In Write Protecting Page %p \n", va);
		fflush(stdout);
		exit(1);
		}
	}

	SSDRange ssdRange = SwapWriter::swapOut (va, np, off);
	if (L_SWAP){
		printf("In pageOut, ssdRange %d, %d\n", ssdRange.getStart(), ssdRange.getEnd());
		fflush(stdout);
	}
	// Protecting the swapped out page
	if(Swap_Protect){
		if (mprotect (va, np*_PAGE_SIZE, PROT_NONE) == -1){
			perror("error :");
			printf("Error In Protecting Page %p \n", va); fflush(stdout);
			exit(-1);
		} else if(L_SWAP) {
			printf("Protecting %d pages beginning at %p, index %ld.\n", np, va, Universe::getPageIndex(va));
			fflush(stdout);
		}
	}

	// Marking the region as not needed so that the OS can free the resources
	if (madvise (va, (unsigned long)(numPagesToRelease * _PAGE_SIZE), MADV_DONTNEED) == -1){ // After swap out the page is advised to be not needed
		perror("error :");
		printf("Error In Protecting Page %p \n", va);
		fflush(stdout);
		exit(1);
	}
	return ssdRange;
}
