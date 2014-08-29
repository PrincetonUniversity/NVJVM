/*
 * Utility.cpp
 *
 *  Created on: Jun 16, 2014
 *      Author: ravitandon
 */

#include "Utility.h"

void* Utility::getRegionStart(void *address){
	return (void *)((long)address & (~(_REGION_SIZE-1)));
}

void* Utility::getRegionEnd(void *address){
	return (void *)((long)address | ((_REGION_SIZE-1)));
}

void* Utility::getPageStart(void *address){
	return (void *)((long)address & (~(_PAGE_SIZE-1)));
}

void* Utility::getPageEnd(void *address){
	return (void *)((long)address | ((_PAGE_SIZE-1)));
}

int Utility::getNumPages(void *top, void*bot){
	void *top_l = getPageStart(top);
	void *bot_l = getPageStart(bot);
	return (((long)top_l - (long)bot_l)/(_PAGE_SIZE)) + 1;
}

void *Utility::nextPage (void *address){
	return((void *)((char *)address + _PAGE_SIZE));
}

void *Utility::nextPageInc (void *address, int count){
	return((void *)((char *)address + count * _PAGE_SIZE));
}

void *Utility::addPointers(void* a, void* b){
	return (void *)((size_t)a + (size_t)b);
}

bool Utility::liesWithinHeap(void *address){
	void *start = Universe::getHeapBase();
	void *end = addPointers((void *)Universe::getHeapBase(), (void *)Universe::getHeapSize());
	return (address >= start && address <= end);
}

void *Utility::minPointer(void *a, void *b){
	if((uintptr_t)a < (uintptr_t)b){
		return a;
	}
	return b;
}

int Utility::numberPages(void *bottom, void *top){
	return ((uintptr_t)top - (uintptr_t)bottom) / sysconf(_SC_PAGE_SIZE);
}

double Utility::toMB(size_t value){
	return (double)value / (double)(1024*1024);
}

double Utility::toKB(size_t value){
	return (double)value / (double)(1024);
}

size_t Utility::getPageSize(){
	return (size_t)(sysconf(_SC_PAGE_SIZE));
}

bool Utility::isPageInCore(void *address){
	unsigned char vec[1];
	address = getPageStart(address);
	if(mincore(address, sysconf(_SC_PAGE_SIZE), vec) == -1){
		perror("err :");
		printf("Error in mincore, arguments %p.\n", address);
		exit(-1);
	}
	return ((vec[0] & 1) == 1);
}


