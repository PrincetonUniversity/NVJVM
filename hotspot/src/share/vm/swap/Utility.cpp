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
