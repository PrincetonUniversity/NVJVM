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

SSDRange PageBuffer::pageOut(void *va, int np, int off) {
	// Writing the page out to swap
	if (L_SWAP){
		printf("In pageOut, paging out %d, top %p\n", np, va); fflush(stdout);
	}
	// Write protecting the memory region - only a single thread must have control over the region
	if (mprotect (va, np*PAGE_SIZE, PROT_READ) == -1){
		perror("error :");
		printf("Error In Write Protecting Page %p \n", va);
		fflush(stdout);
		exit(1);
	}
	SSDRange ssdRange = SwapWriter::swapOut (va, np, off);
	if (L_SWAP){
		printf("In pageOut, ssdRange %d, %d\n", ssdRange.getStart(), ssdRange.getEnd()); fflush(stdout);
	}
	// Protecting the swapped out page
	/*if (mprotect (va, np*PAGE_SIZE, PROT_NONE) == -1){
		perror("error :");
		printf("Error In Protecting Page %p \n", va); fflush(stdout);
	}*/
	// Marking the region as not needed so that the OS can free the resources
	if (madvise (va, (unsigned long)(np * _PAGE_SIZE), MADV_DONTNEED) == -1){ // After swap out the page is advised to be not needed
		perror("error :");
		printf("Error In Protecting Page %p \n", va);
		fflush(stdout);
		exit(1);
	}
	return ssdRange;
}
