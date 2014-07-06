/*
 * Utility.cpp
 *
 *  Created on: Jun 16, 2014
 *      Author: ravitandon
 */

#include "Utility.h"

void Utility::printRegionTable(void *addr){
	char value;
	char *startRegionTable =  (char *)Universe::getRegionTablePosition(addr);
	char *regionPos = (char *)SwapManager::getRegionStart(addr);
	for(int count = 0; count < Universe::_regionPages; count++){
		value = *startRegionTable;
		printf("SSDSwap::printRegionTable()::count = %d, value = %d, regionPos = %p\n.", count, value, regionPos);
		fflush(stdout);
		regionPos = regionPos + _PAGE_SIZE;
		startRegionTable++;
	}
}

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
