/*
 * Utility.cpp
 *
 *  Created on: Jun 16, 2014
 *      Author: ravitandon
 */

#include "Utility.h"

//void Utility::printRegionTable(void *addr){
//	char value;
//	char *startRegionTable =  (char *)Universe::getPageTablePosition(addr);
//	char *regionPos = (char *)SwapManager::getRegionStart(addr);
//	for(int count = 0; count < Universe::_regionPages; count++){
//		value = *startRegionTable;
//		printf("SSDSwap::printRegionTable()::count = %d, value = %d, regionPos = %p\n.", count, value, regionPos);
//		fflush(stdout);
//		regionPos = regionPos + _PAGE_SIZE;
//		startRegionTable++;
//	}
//}

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

bool shouldBreak(void *end, int maxRequired, void *curr, int count, int iter){
	return (
			(Universe::getPageIndex(curr) >= Universe::getPageIndex(end) || count >= maxRequired )//|| iter > 10 * maxRequired)
	);
}

int Utility::getContinuousFreePagesBetween(void *start, void *end, int maxRequired, void **startPage, void **lastPage){
	int count = 0, iter = 0;
	void *curr = start;
	while(true){
		iter++;
		if(shouldBreak(end, maxRequired, curr, count, iter))
			break;
		if(Universe::isPresent(curr)){
			if(count == 0){
				*startPage = curr;
			}
			count++;
		} else if(count > 1){
			break;
		}
		curr = Utility::nextPage(curr);
	}
	*lastPage = curr;
	return count;
}

int Utility::getContinuousPagesOutOfCorePages(void *start, void *end, void **startPage, void **lastPage){
	int count = 0;
	void *curr = start;
	while(__index(curr) <= __index(end)){
		if(Universe::isSwappedOut(curr)){
			if(count == 0){
				*startPage = curr;
			}
			count++;
		} else if(count > 0){
			curr = Utility::nextPage(curr);
			break;
		}
		curr = Utility::nextPage(curr);
	}
	*lastPage = curr;
	return count;
}

void* Utility::getNextInMemoryPage(void *start, void *end){
   void *curr = start;
   while(true){
	   if(Universe::getPageIndex(curr) >= Universe::getPageIndex(end)){
		   return NULL;
	   }
	   if(Universe::isPresent(curr)){
		   return curr;
	   }
	   curr = Utility::nextPage(curr);
   }
}

void* Utility::getBoundary(void *start, void *end, int numPartitions){
		size_t partition = Universe::getPageTablePartition(start, numPartitions);
	    size_t pageTableSize = Universe::getPageTableSize();
		size_t partitionLimit, partitionSize = pageTableSize/numPartitions;
		// add heap base, bytes for the number of partitions covered
		return ((void *)((intptr_t)Universe::getHeapBase() + (intptr_t)partitionSize * partition));
}

bool Utility::isPageZero(void *sa){
	char *curr = (char *)getPageStart(sa);
	size_t count;
	for(count = 0; count < getPageSize(); count++){
		if(*curr != '\0'){
			return false;
		}
		curr++;
	}
	return true;
}

int Utility::countZeroedPages(void *add, int np){
	int count = 0;
	while (np > 0){
		if(isPageZero(add)){
			count++;
		}
		add = nextPage(add);
		np--;
	}
	return count;
}

int Utility::getNextContinuousZeroedPagesStreak(void *add, int np, void **start){
	int count = 0;
	while (np > 0){
		if(isPageZero(add)){
			if(count == 0){
				*start = add;
			}
			count++;
		} else {
			if(count  > 0){
				return count;
			}
		}
		add = nextPage(add);
		np--;
	}
	return count;
}

int Utility::getLargestContinuousZeroedPages(void *add, int np, void **start){
	*start = add;
	void *newStart = add;
	int count = 0, largest = -1;
	while (np > 0){
		if(isPageZero(add)){
			count++;
		} else {
			if(count > largest){
				*start = newStart;
				largest = count;
			}
			count = 0;
			newStart = add;
		}
		add = nextPage(add);
		np--;
	}
	if(count > largest){
		*start = newStart;
		largest = count;
	}
	return largest;
}


int Utility::getOutOfCoreCount(void *start, int np){
	start = getPageStart(start);
	unsigned char vec[np];
	unsigned char v;
	if(mincore(start, (unsigned long int)(np * getPageSize()), vec) == -1){
		perror("error :");
		printf("Error In mincore() %p \n", start);
		fflush(stdout);
		exit(1);
	}
	int iter = 0, count = 0;
	for(; iter < np; iter++){
		v = vec[iter];
		if((v & 1) == 0){
			count++;
		}
	}
	return count;
}

