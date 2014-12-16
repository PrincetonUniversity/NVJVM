/*
 * PSPartitionMetaData.cpp
 *
 *  Created on: Dec 15, 2014
 *      Author: ravitandon
 */
#include "PSPartitionMetaData.hpp"

void PSPartitionMetaData::resetPagesScanned(){
		_pagesScanned = 0;
}

void PSPartitionMetaData::resetPagesMarkScanned(){
		_pagesMarkScanned = 0;
}

void PSPartitionMetaData::incrementPagesScanned(){
		_pagesScanned++;
	}

	void PSPartitionMetaData::incrementPagesMarkScanned(){
		_pagesMarkScanned++;
	}

	int PSPartitionMetaData::getPagesScanned(){
		return _pagesScanned;
	}

	int PSPartitionMetaData::getPagesMarkScanned(){
		return _pagesMarkScanned;
	}

	void PSPartitionMetaData::resetPartitionsScanned(){
		_partitionsScanned = 0;
		_garbageChunks =0;
	}

	void PSPartitionMetaData::incrementGarbageChunks(){
		_garbageChunks++;
	}

	int PSPartitionMetaData::getGarbageChunks(){
		return _garbageChunks;
	}

	void PSPartitionMetaData::resetPartitionMap(){
		int count;
		for(count = 0; count < _numberPartitions; count++){
			_partitionMap[count] = 0;
		}
	}

	bool PSPartitionMetaData::shouldScanningStop(){
		return (
				_partitionsScanned >= _numberPartitions
		);
	}

	int PSPartitionMetaData::getFlag(){
		return _message[0];
	}

	int PSPartitionMetaData::getIdleThreadCount(){
			return _idleThreadCount[0];
		}

		void PSPartitionMetaData::resetThreadCount(){
			_idleThreadCount[0] = 0;
		}

		void PSPartitionMetaData::decreaseBy(int count){
			totalDecrements +=  count;
		}
		void PSPartitionMetaData::increaseBy(int count){
			totalIncrements += count;
		}
		// Methods for setting the message state
		void PSPartitionMetaData::setMessageState (MessageState state){
			_message[0] = (int)state;
		}

		bool PSPartitionMetaData::isSetToWorkFinal(){
			return (
				_message[0]	== WORK_FINAL
			);
		}

		bool PSPartitionMetaData::isSetToYield(){
			return(
				_message[0] == YIELD
			);
		}

		bool PSPartitionMetaData::isSetToWait(){
		  return (
			_message[0] == WAIT
		  );
		}

		bool PSPartitionMetaData::isSetToTerminate(){
			return(
			 _message[0] == TERMINATE
			);
		}

		void PSPartitionMetaData::setToYield(){
			setMessageState(YIELD);
		}

		void PSPartitionMetaData::setToWait(){
			setMessageState(WAIT);
		}

		void PSPartitionMetaData::setToWork(){
			setMessageState(WORK);
		}

		void PSPartitionMetaData::setToWorkFinal(){
			setMessageState(WORK_FINAL);
		}

		void PSPartitionMetaData::setToTerminate(){
			setMessageState(TERMINATE);
		}

		bool PSPartitionMetaData::areThreadsSuspended(){
			return (
				_idleThreadCount[0] == _numberCollectorThreads
			);
		}

		int PSPartitionMetaData::numberPages() {
			return _numberPages;
		}

		int PSPartitionMetaData::getGreyPageCount(){
			int index, sum = 0;
				for (index = 0; index < _numberPages; index++){
					if( _pageGOC[index] > 0 )
						sum++;
				}
			return sum;
		}

		int PSPartitionMetaData::nextPartitionIndex(int currPartitionIndex){
			return ((currPartitionIndex + 1) % _numberPartitions);
		}

		bool PSPartitionMetaData::markAtomic(int partitionIndex){
			jbyte* position = (jbyte*)&_partitionMap[partitionIndex];
			jbyte value = *position;
			// Somebody else is already looking at this partition therefore I cannot scan the pages of this partition
			jbyte newValue = (jbyte)1;
			if(Atomic::cmpxchg((volatile jbyte)newValue, (volatile jbyte*)position, (volatile jbyte)0) ==
					(jbyte)1){
				return false;
			}
			return true;
		}

		bool PSPartitionMetaData::clearAtomic(int partitionIndex){
			jbyte *position = (jbyte*)&_partitionMap[partitionIndex];
			jbyte value = *position;
			jbyte newValue = (jbyte)0;
			if(Atomic::cmpxchg((volatile jbyte)newValue, (volatile jbyte*)position, (volatile jbyte)1) == 0){
				printf("Somebody else cleared it. Something is not correct here.\n");
				exit(-1);
			}
			return true;
		}

	// This method atomically increments the total number of partitions scanned
		int PSPartitionMetaData::incrementPartitionsScanned(bool isParallel){
			int pScanned = -1;
			if(isParallel){
				int *position = (int *)&_partitionsScanned;
				int value = *position;
				int newValue = value + 1;
				while(Atomic::cmpxchg((unsigned int)newValue, (volatile unsigned int*)position,
						(unsigned int)value) != (unsigned int)value){
					value = *position;
					newValue = value + 1;
				}
				pScanned = (int)newValue;
			} else {
				_partitionsScanned++;
				pScanned = _partitionsScanned;
			}
			return pScanned;
		}

		// This method gets the next partition from the list of partitions, if the
		// currentPartitionIndex is the same as that of the returned value, then the
		// thread has run through all the different partitions. This is not currently used
			int PSPartitionMetaData::getNextPartition(int currentPartitionIndex){
				int originalPartitionIndex = currentPartitionIndex;
				bool markAtomicFailed = false;
				int count;
				for(count = 0; count < _numberPartitions; count++){
					// We do not take the circular route of scanning the partitions currently and check if the
					// partitionIndex returned is -1, that means all the partitions have already been scanned.
					currentPartitionIndex = nextPartitionIndex(currentPartitionIndex);
					//currentPartitionIndex = currentPartitionIndex + 1;
					if(currentPartitionIndex >= _numberPartitions){
						return -1;
					}
					if(markAtomic(currentPartitionIndex))
						return currentPartitionIndex;
					else
						markAtomicFailed = true;
				}
			}

			bool PSPartitionMetaData::liesInMatureSpace(void *address){
				return (((uintptr_t)address >= (uintptr_t)_span.start()) &&
						((uintptr_t)address <= (uintptr_t)_span.end()));
			}

			int PSPartitionMetaData::getPageIndexFromPageAddress(void *address){
				return (((uintptr_t)__page_start(address) - (uintptr_t)__page_start(_span.start())) / (_PAGE_SIZE));
			}

			int PSPartitionMetaData::getPartition(int currentPartition){
				int partitionIndex = currentPartition;
				while(true){
					partitionIndex = nextPartitionIndex(partitionIndex);
					if(getGreyObjectsChunkLevel(partitionIndex) > 0){
						if(markAtomic(partitionIndex) == true)
							return partitionIndex;
					}
					if(checkToYield()){
						return -1;
					}
				}
			}

			// Starting Index of the partition
			int PSPartitionMetaData::getPartitionStart(int partitionIndex){
				return (partitionIndex * _partitionSize);
			}

			int PSPartitionMetaData::getPartitionSize(int partitionIndex){
			// If this is the last partition then the partition size is different from the other partitions
				if(partitionIndex == (_numberPartitions-1)){
					int partitionStart = getPartitionStart(partitionIndex);
					return (getPageIndexFromPageAddress((void *)_span.last()) - partitionStart + 1);
				}
				return _partitionSize;
			}

			int PSPartitionMetaData::getPartitionSizeBytes(int partitionIndex){
				int partitionSizePages = getPartitionSize(partitionIndex);
				int partitionSizeBytes = partitionSizePages * _PAGE_SIZE;
				return partitionSizeBytes;
			}


			void* PSPartitionMetaData::getPageEnd(int pageIndex){
				return ((void *)
								((uintptr_t)__page_start(_span.start()) +  (uintptr_t)((pageIndex +1) * _PAGE_SIZE) - 1)
				);
			}
			// This function converts a given page index into the base address of the page
			// All the indexes are now relative to the base of the span start now.
			void* PSPartitionMetaData::getPageBase(int pageIndex){
				return ((void *)
					((uintptr_t)__page_start(_span.start()) +  (uintptr_t)(pageIndex * _PAGE_SIZE))
				);
			}

			int PSPartitionMetaData::getHighPriorityPageNoMinCore(int partitionIndex){
				int partitionSize = getPartitionSize(partitionIndex);
				void *address = getPageBase(getPartitionStart(partitionIndex));
				int index = getPartitionStart(partitionIndex), count, greyCount;
				int largestGreyCount = 0, lPIndex = -1;
				char buf[20];
				for(count = 0;
					count < getPartitionSize(partitionIndex);
					count++, index++){
					greyCount = _pageGOC[index];  		// Get the grey count of the page
					if((largestGreyCount < greyCount)){
					   largestGreyCount = greyCount;
					   lPIndex = index;
					}
				}
				return lPIndex;
			}

			// Gets a high priority page from a given partition
			// If all the pages have a zero count then the page index returned would be -1
			// We would improve this method to get a collection of pages later on. Currently, we only
			// fetch a single page per scan of a partition.
				int PSPartitionMetaData::getHighPriorityPage(int partitionIndex){
					int partitionSize = getPartitionSize(partitionIndex);
					void *address = getPageBase(getPartitionStart(partitionIndex));
					unsigned char vec[partitionSize];
					if(mincore(address, partitionSize * sysconf(_SC_PAGE_SIZE), vec) == -1){
						perror("err :");
						printf("Error in mincore, arguments %p."
								"Partition Size = %d.\n", address, partitionSize);
						exit(-1);
					}
					int index = getPartitionStart(partitionIndex), count, greyCount;
					int largestGreyCount = 0, lPIndex = -1;
					for(count = 0; count < getPartitionSize(partitionIndex); count++, index++){
						greyCount = _pageGOC[index];  // Get the grey count of the page
						if((largestGreyCount < greyCount) && (vec[count] & 1 == 1)){
						   largestGreyCount = greyCount;
						   lPIndex = index;
						}
					}
					if(lPIndex == -1){
						index = getPartitionStart(partitionIndex);
						for(count = 0;
							count < getPartitionSize(partitionIndex);
							count++, index++){
							greyCount = _pageGOC[index];  		// Get the grey count of the page
							if((largestGreyCount < greyCount)){
							   largestGreyCount = greyCount;
							   lPIndex = index;
							}
						}
					}
					return lPIndex;
				}

			bool PSPartitionMetaData::releasePartition(int partitionIndex){
				return (
						clearAtomic(partitionIndex)
				);
			}

			int PSPartitionMetaData::getGreyCount(int p){
				return (
					_pageGOC[p]
				);
			}

			std::vector<int> PSPartitionMetaData::toSweepPageList(int currentPartition, int *inCoreCount){
				std::vector<int> pageIndices;
				std::vector<int> pageIndicesOutOfCore;
				std::vector<int>::iterator it;
				char buf[20];
				if(currentPartition != - 1){
					int partitionSize = getPartitionSize(currentPartition);
					void *address = getPageBase(getPartitionStart(currentPartition));
					unsigned char vec[partitionSize];
					memset(vec, 0, partitionSize);
					if(mincore(address, partitionSize * sysconf(_SC_PAGE_SIZE), vec) == -1){
						perror("err :");
						printf("Error in mincore, arguments %p."
								"Partition Size = %d.\n", address, partitionSize);
						exit(-1);
					}
					int index = getPartitionStart(currentPartition), count, greyCount;
					for(count = 0; count < getPartitionSize(currentPartition); count++, index++){
						if(shouldSweepScanPage(index) && !isPageScanned(index)){
							if((vec[count] & 1) == 1)
								pageIndices.push_back(index);
							else
								pageIndicesOutOfCore.push_back(index);
						}
					}
				}
	#if OC_SWEEP_ASSERT
				else {
					printf("Invalid Partition Index. Index = -1");
					exit(-1);
				}
	#endif
				*inCoreCount = pageIndices.size();
				for (it=pageIndicesOutOfCore.begin(); it<pageIndicesOutOfCore.end(); it++){
					pageIndices.push_back(*it);
				}
				return pageIndices;
			}

			std::vector<int> PSPartitionMetaData::toScanPageList(int currentPartition){
				int tGreyObjectCount=0;
				std::vector<int> pageIndices;
				std::vector<int> pageIndicesOutOfCore;
				std::vector<int>::iterator it;
				int nonZeroCount = 0;
				int pageCount = 0, maxPageCount;
				double threshold = 0.20;
				char buf[20];
				if(currentPartition != - 1){
					int partitionSize = getPartitionSize(currentPartition);
					maxPageCount = (int)(threshold * partitionSize);
					void *address = getPageBase(getPartitionStart(currentPartition));
					unsigned char vec[partitionSize];
					memset(vec, 0, partitionSize);
					if(mincore(address, partitionSize * sysconf(_SC_PAGE_SIZE), vec) == -1){
						perror("err :");
						printf("Error in mincore, arguments %p."
								"Partition Size = %d.\n", address, partitionSize);
						exit(-1);
					}
					int index = getPartitionStart(currentPartition), count, greyCount;
					int iCore=0, oCore=0;
					for(count = 0; count < getPartitionSize(currentPartition); count++, index++){
						greyCount = _pageGOC[index];
						tGreyObjectCount+=greyCount;
						if(greyCount > 0){
							nonZeroCount++;
							if((vec[count] & 1) == 1){
								pageIndices.push_back(index);
							}else{
								pageIndicesOutOfCore.push_back(index);
							}
						}
					}
				if(tGreyObjectCount==0)
					cout << "total grey object = 0., For partition index = " << currentPartition << endl;
				pageCount = pageIndices.size();
				// A better logic is required here to get the
				if((pageIndices.size() < (unsigned int)maxPageCount)){
					for(it = pageIndicesOutOfCore.begin(); it < pageIndicesOutOfCore.end(); it++){
						pageIndices.push_back(*it);
						pageCount++;
						if(pageCount >= maxPageCount)
							break;
					}
				}
				return pageIndices;
			}
			}

			// This method tries to get a high priority page from the set of subsequent partitions.
			// If, all the pages have zero grey object counts, then the page index returned would be -1.
			// Currently, the stopping condition for the thread is set to be the case when it has scanned
			//	all the partitions and has not found a single page with a non zero count.
				int PSPartitionMetaData::getPageFromNextPartition(int currentPartition){
					int partitionIndex = currentPartition, pageIndex = -1;
					int partitionsScanned = 0;
					while(pageIndex ==  -1 && partitionsScanned < _numberPartitions){
						partitionIndex = nextPartitionIndex(partitionIndex);
			// If I become the owner of the current partition --> then I can scan for pages within the
			// current partition else I move on to the next partition.
						if(markAtomic(partitionIndex)){
				// We first try and get a high priority page(essentially a page with a non zero grey object count).
						  pageIndex = getHighPriorityPage(partitionIndex);
				// If there is no page with a non zero count, then we skip the partition
						  if(pageIndex == -1){
				// Before skipping the partition, we clear the boolean flag for it.
							clearAtomic(partitionIndex);
						  }
						}
						partitionsScanned++;
					}
					return pageIndex;
				}

		void PSPartitionMetaData::initialize(MemRegion span){
			_span = span;
			_numberPartitions = NumberPartitions;
			_partitionGOC = new int[_numberPartitions];
			_partitionMap = new jbyte[_numberPartitions];
			for(int count = 0; count < _numberPartitions; count++){
				_partitionGOC[count] = 0;
				_partitionMap[count] = 0;
			}
			_numberPages = __numPages(_span.last(), _span.start());
			_pageGOC = new jubyte[_numberPages];
			_pageScanned = new jubyte[_numberPages];
			_pageStart = new jshort[_numberPages];
			for(int count = 0; count < _numberPages; count++){
							_pageGOC[count] = 0;
							_pageScanned[count] = 0;
							_pageStart[count] = (jshort)NO_OBJECT_MASK; // each page is initialized with t
			}
			_partitionSize = (int)_numberPages/_numberPartitions;
			_idleThreadCount[0] = 0;
			setToWork();
			_numberCollectorThreads = ParallelCompactThreads - 1; // One of the conc GC thread is used as a master thread
			totalDecrements = 0;
		}

		void PSPartitionMetaData::releaseResources(){
			free(_pageGOC);
			free(_partitionGOC);
			free(_partitionMap);
		}

		void PSPartitionMetaData::resetGOCPartition(){
		for(int count = 0; count < _numberPartitions; count++)
			_partitionGOC[count] = 0;
		}

		void PSPartitionMetaData::resetGOCPage(){
			for(int count = 0; count < _numberPages; count++){
				_pageGOC[count] = 0;
			}
		}

		void PSPartitionMetaData::resetPageScanned(){
			for(int count = 0; count < _numberPages; count++){
				_pageScanned[count] = 0;
			}
		}

		void PSPartitionMetaData::reset(){
			resetPartitionMap();
			resetGOCPartition();
			resetThreadCount();
			resetGOCPage();
			setToWork();
		}

		int PSPartitionMetaData::getTotalGreyObjectsPageLevel(){
			int index, sum = 0;
				for (index = 0; index < _numberPages; index++){
					sum += (int)_pageGOC[index];
				}
				return sum;
		}

		jshort PSPartitionMetaData::heapWordToShort(HeapWord* address){
			return ((jshort)(((long)address) - __page_start_long(address)));
		}

		void* PSPartitionMetaData::offsetToWordAddress(jshort off, int pageIndex){
			uintptr_t obj = (uintptr_t)getPageBase(pageIndex) + (uintptr_t)(off);
			return (void*)obj;
		}

		jshort PSPartitionMetaData::store_Atomic(HeapWord* address, int index){
			jshort *position = &(_pageStart[index]);
			jshort value = *position;
			jshort newValue = heapWordToShort(address);
			while(Atomic::cmpxchg((jshort)newValue, (volatile jshort*)position,
					(jshort)value) !=  (jshort)value){
				value = *position;
				if(newValue > value){
					break;
				}
			}
			return (jshort)newValue;
		}

		jshort PSPartitionMetaData::store_AtomicShort(jshort newValue, int index){
			jshort *position = &(_pageStart[index]);
			jshort value = *position;
			while(Atomic::cmpxchg((jshort)newValue, (volatile jshort*)position,
					(jshort)value) !=  (jshort)newValue){
				value = *position;
				if(newValue > value){
					break;
				}
			}
			return (jshort)newValue;
		}

	// An object gets deallocated from the page on which address lies, the next address is newAddress here
	// The function returns true if the current object was the top level object on the page and if
	// the newAddress lies on the starting address of the page then it gets exchanged
		bool PSPartitionMetaData::objectDeallocatedCMSSpace(HeapWord* address, HeapWord* newAddress){
			int pageIndex = getPageIndexFromPageAddress(address);
					jshort curr_val = (jshort)_pageStart[pageIndex];
					if((jshort)curr_val == heapWordToShort(address)){ // checking if this object is at the start of the page
			  int newPageIndex = getPageIndexFromPageAddress(newAddress);
			  if(pageIndex == newPageIndex) // checking if the next object lies on the same page index
				  store_Atomic(newAddress, pageIndex); // we put in the next address denoting the page start if the page indices are the same
			  else
				  store_AtomicShort((jshort)NO_OBJECT_MASK, pageIndex); // we reset the value on the page otherwise
			  return true;
			}
			return false;
		}

		void PSPartitionMetaData::objectAllocatedCMSSpace(HeapWord* address){
			int pageIndex = getPageIndexFromPageAddress(address);
			jshort curr_val = (jshort)_pageStart[pageIndex];
			if((jshort)curr_val == (jshort)NO_OBJECT_MASK){
				store_Atomic(address, pageIndex);
			} else {
				if((jshort)curr_val > heapWordToShort(address)){
					store_Atomic(address, pageIndex);
				}
			}
		}

		bool PSPartitionMetaData::isPageStart(HeapWord* address){
			int pageIndex = getPageIndexFromPageAddress(address);
			jshort curr_val = (jshort)_pageStart[pageIndex];
			if((jshort)curr_val == heapWordToShort(address)){
				return true;
			}
			return false;
		}


		void* PSPartitionMetaData::objectStartAddress(int pageIndex){
			return (
					offsetToWordAddress(_pageStart[pageIndex], pageIndex)
			);
		}

		bool PSPartitionMetaData::shouldSweepScanPage(int pageIndex){
			return (
					_pageStart[pageIndex] != (jshort)NO_OBJECT_MASK
			);
		}
		bool PSPartitionMetaData::shouldSweepScanPageAddr(void *addr){
			int pageIndex = getPageIndexFromPageAddress(addr);
			return shouldSweepScanPage(pageIndex);
		}

		int PSPartitionMetaData::numPagesWithNoStartMark(){
			int index, count = 0;
			for (index = 0; index < _numberPages; index++){
				if(_pageStart[index] != (jshort)NO_OBJECT_MASK)
					count++;
			}
			printf("Total Number of pages = %d, Total Number of pages with an object start mark = %d.\n", _numberPages, count);
		}

		int PSPartitionMetaData::getGreyObjectsChunkLevel(int p){
			return _partitionGOC[p];
		}

		bool PSPartitionMetaData::isZero(int pageIndex){
			char* pageStart = (char *)getPageBase(pageIndex);
			for(int count = 0; count < _PAGE_SIZE; count++){
				if((int)pageStart[count] != 0){
					return false;
				}
			}
			return true;
		}

		void PSPartitionMetaData::getZeroPages(){
			int partitionSize, numberZeroedPages = 0, pageIndex, count, partitionIndex, totalPages = 0;
			void *address;
			for(partitionIndex = 0; partitionIndex <_numberPartitions; partitionIndex++){
				address = getPageBase(getPartitionStart(partitionIndex));
				pageIndex = getPartitionStart(partitionIndex);
				partitionSize = getPartitionSize(partitionIndex);
				totalPages += partitionSize;
				unsigned char vec[partitionSize];
							if(mincore(address, partitionSize * sysconf(_SC_PAGE_SIZE), vec) == -1){
								perror("error:");
								printf("error in mincore.");
							}
				for(count = 0; count < partitionSize; count++, pageIndex++){
					if(((vec[count] & 1) == 1) && (isZero(pageIndex) == true))
						numberZeroedPages++;
				}
			}
			printf("Zero Pages In Core = %d, %d.\n", numberZeroedPages, totalPages);
		}

		int PSPartitionMetaData::getTotalGreyObjectsChunkLevel(){
			int index, sum = 0;
			for (index = 0; index < _numberPartitions; index++)
				sum += _partitionGOC[index];
			return sum;
		}

		bool PSPartitionMetaData::doWeTerminate(){
			return(
					areThreadsSuspended() && (getTotalGreyObjectsChunkLevel() == 0)
			);
		}

		int PSPartitionMetaData::incrementWaitThreadCount(){
			int *position = (int *)&_idleThreadCount[0];
			int value = *position;
			int newValue = value + 1;
			while(Atomic::cmpxchg((unsigned int)newValue, (volatile unsigned int*)position,
					(unsigned int)value) != (unsigned int)value){
				value = *position;
				newValue = value + 1;
			}

	#ifdef OCMS_ASSERT
			if(value > _numberCollectorThreads){
				printf("Something is wrong. The number of idle threads waiting is "
						"greater than the maximum number of threads. We have a problem here !!");
				exit(-1);
			}
	#endif
			return (int)newValue;
		}

		int PSPartitionMetaData::decrementWaitThreadCount(){
			int *position = (int *)&_idleThreadCount[0];
			int value = *position;
			int newValue = value - 1;
			while(Atomic::cmpxchg((unsigned int)newValue, (volatile unsigned int*)position,
					(unsigned int)value) != (unsigned int)value){
				value = *position;
				newValue = value - 1;
			}

	#ifdef OCMS_ASSERT
			if(value < 0){
				printf("Something is wrong. The number of idle threads waiting is negative. We have a problem here !!");
				exit(-1);
			}
	#endif
			return (int)newValue;
		}

		bool PSPartitionMetaData::checkAndWait(){
			   if(isSetToWait()){
				   incrementWaitThreadCount();
				   return true;
			   }
			   return false;
		}

		int PSPartitionMetaData::getMin(int a, int b){
			 int min = a < b ? a : b;
			 return min;
		}

		int PSPartitionMetaData::getPartitionIndexFromPage(int pageIndex){
			int partitionIndex = getMin(pageIndex / _partitionSize, _numberPartitions - 1);
			return partitionIndex;
		}

		int PSPartitionMetaData::getPartitionIndexFromPageAddress(void *pageAddress){
			int pageIndex = getPageIndexFromPageAddress(pageAddress);
			int partitionIndex = getPartitionIndexFromPage(pageIndex);
			return partitionIndex;
		}

		unsigned int PSPartitionMetaData::clearGreyObjectCount_Page(void *pageAddress){
			int index = getPageIndexFromPageAddress(pageAddress);
			jubyte *position = &(_pageGOC[index]);
			jubyte value = *position;
			jubyte newValue = 0;
			while(Atomic::cmpxchg((signed char)newValue, (signed char*)position,
					(signed char)value) != (signed char)value){
				value = *position;
			}
			return (unsigned int)value;
		}

		void PSPartitionMetaData::pageScanned(int pageIndex){
			jubyte *position = &(_pageScanned[pageIndex]);
			*position = (jubyte)1;
		}

		bool PSPartitionMetaData::isPageScanned(int pageIndex){
			jubyte *position = &(_pageScanned[pageIndex]);
			return (*position ==(jubyte)1);
		}

		unsigned int PSPartitionMetaData::incrementIndex_AtomicPage(int increment, void *pageAddress){
			increaseBy(increment);
			int index = getPageIndexFromPageAddress(pageAddress);
			jubyte *position = &(_pageGOC[index]);
			jubyte value = *position;
			jubyte newValue = value + increment;
			while(Atomic::cmpxchg((signed char)newValue, (signed char*)position,
					(signed char)value) != (signed char)value){
				value = *position;
				newValue = value + increment;
			}
			return (unsigned int)newValue;
		}

		unsigned int PSPartitionMetaData::decrementIndex_AtomicPage(int decrement, void *pageAddress){
			decreaseBy(decrement);
			int index = getPageIndexFromPageAddress(pageAddress);
			jubyte *position = &(_pageGOC[index]);
			jubyte value = *position;
			jubyte newValue = value - decrement;
			while(Atomic::cmpxchg((signed char)newValue, (signed char*)position,
					(signed char)value) != (signed char)value){
				value = *position;
				newValue = value - decrement;
			}
			return (unsigned int)newValue;
		}

		unsigned int PSPartitionMetaData::incrementIndex_Atomic(int increment, void *pageAddress){
			int index = getPartitionIndexFromPageAddress(pageAddress);
			int *position = &(_partitionGOC[index]);
			int value = *position;
			int newValue = value + increment;
			while(Atomic::cmpxchg((unsigned int)newValue, (unsigned int*)position,
					(unsigned int)value) != (unsigned int)value){
				value = *position;
				newValue = value + increment;
			}
			return (unsigned int)newValue;
		}

		void PSPartitionMetaData::markObject(void *address){
			incrementIndex_Atomic(1, address);
			incrementIndex_AtomicPage(1, address);
		}

		unsigned int PSPartitionMetaData::decrementIndex_Atomic(int decrement, void* pageAddress){
			int index = getPartitionIndexFromPageAddress(pageAddress);
			int *position = &(_partitionGOC[index]);
			int value = *position;
			int newValue = value - decrement;
			while(Atomic::cmpxchg((unsigned int)newValue, (unsigned int*)position,
					(unsigned int)value) != (unsigned int)value){
				value = *position;
				newValue = value - decrement;
			}
			return (unsigned int)newValue;
		}

	bool PSPartitionMetaData::checkToYield(){
		if(isSetToYield())
			return true;
		// After every loop we check whether have been signaled by the master thread to change our current state
		if(isSetToWait()){ // Checking if the we have to wait,
			incrementWaitThreadCount(); // we are waiting for the next signal from the master
		// if yes then the count of the number of waiting threads is automatically incremented
		while(isSetToWait()){
			usleep(WORKER_THREAD_SLEEP_TIME);
		}
		// If we find that the master thread has asked us to terminate then we can simply break
		if(isSetToTerminate()){
		// Before leaving, however, we make sure that the thread count is restored (because of my count the thread
		// count was decremented earlier).
			decrementWaitThreadCount();
			return true;
		}
			// If we should be working, then lets first decrement the count of the waiting threads
			decrementWaitThreadCount();
		}
		return false;
	}
