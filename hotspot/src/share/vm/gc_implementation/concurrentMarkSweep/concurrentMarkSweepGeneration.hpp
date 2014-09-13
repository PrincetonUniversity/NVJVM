/*
 * Copyright (c) 2001, 2011, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *
 */

#ifndef SHARE_VM_GC_IMPLEMENTATION_CONCURRENTMARKSWEEP_CONCURRENTMARKSWEEPGENERATION_HPP
#define SHARE_VM_GC_IMPLEMENTATION_CONCURRENTMARKSWEEP_CONCURRENTMARKSWEEPGENERATION_HPP

#include "gc_implementation/concurrentMarkSweep/freeBlockDictionary.hpp"
#include "gc_implementation/shared/gSpaceCounters.hpp"
#include "gc_implementation/shared/gcStats.hpp"
#include "gc_implementation/shared/generationCounters.hpp"
#include "memory/generation.hpp"
#include "runtime/mutexLocker.hpp"
#include "runtime/virtualspace.hpp"
#include "services/memoryService.hpp"
#include "utilities/bitMap.inline.hpp"
#include "utilities/stack.inline.hpp"
#include "utilities/taskqueue.hpp"
#include "utilities/yieldingWorkgroup.hpp"
#include "pthread.h"
#include <list>
#include "swap/Utility.h"
#include <unistd.h>
#include <sys/mman.h>
#include <unistd.h>

#define __u_pageBase(p) \
	Universe::getPageBaseFromIndex(p)

#define __u_inc(p) \
	Universe::incrementGreyObjectCount_Atomic(p)

#define __u_dec(p) \
	Universe::decrementGreyObjectCount_Atomic(p)

#define __u_clear(p, q) \
	Universe::clearGreyObjectCount_Atomic(p, q)

#define __u_goc(p) \
	Universe::getGreyObjectCount(p)

#define _PAGE_SIZE sysconf(_SC_PAGE_SIZE)

#define __page_start(p) \
	(void *)((long)p & (~(_PAGE_SIZE-1)))

#define __page_end(p) \
	(void *)((long)p | ((_PAGE_SIZE-1)))

#define __in_core(p) \
		isInCore(p)

#define __pageIndex(p) \
	Universe::getPageIndex(p)

#define __numPages(top, bot) \
		(((uintptr_t)__page_start(top) - (uintptr_t)__page_start(bot))/(_PAGE_SIZE)) + 1

// ConcurrentMarkSweepGeneration is in support of a concurrent
// mark-sweep old generation in the Detlefs-Printezis--Boehm-Demers-Schenker
// style. We assume, for now, that this generation is always the
// seniormost generation (modulo the PermGeneration), and for simplicity
// in the first implementation, that this generation is a single compactible
// space. Neither of these restrictions appears essential, and will be
// relaxed in the future when more time is available to implement the
// greater generality (and there's a need for it).
//
// Concurrent mode failures are currently handled by
// means of a sliding mark-compact.

class CMSAdaptiveSizePolicy;
class CMSConcMarkingTask;
class CMSGCAdaptivePolicyCounters;
class ConcurrentMarkSweepGeneration;
class ConcurrentMarkSweepPolicy;
class ConcurrentMarkSweepThread;
class CompactibleFreeListSpace;
class FreeChunk;
class PromotionInfo;
class ScanMarkedObjectsAgainCarefullyClosure;
class ChunkListPolicy;
class ChunkList;
class ScanChunk;

// A generic CMS bit map. It's the basis for both the CMS marking bit map
// as well as for the mod union table (in each case only a subset of the
// methods are used). This is essentially a wrapper around the BitMap class,
// with one bit per (1<<_shifter) HeapWords. (i.e. for the marking bit map,
// we have _shifter == 0. and for the mod union table we have
// shifter == CardTableModRefBS::card_shift - LogHeapWordSize.)
// XXX 64-bit issues in BitMap?
class CMSBitMap VALUE_OBJ_CLASS_SPEC {
  friend class VMStructs;

  HeapWord* _bmStartWord;   // base address of range covered by map
  size_t    _bmWordSize;    // map size (in #HeapWords covered)
  const int _shifter;       // shifts to convert HeapWord to bit position
  VirtualSpace _virtual_space; // underlying the bit map
  BitMap    _bm;            // the bit map itself
 public:
  Mutex* const _lock;       // mutex protecting _bm;

 public:
  // constructor
  CMSBitMap(int shifter, int mutex_rank, const char* mutex_name);

  // allocates the actual storage for the map
  bool allocate(MemRegion mr);
  // field getter
  Mutex* lock() const { return _lock; }
  // locking verifier convenience function
  void assert_locked() const PRODUCT_RETURN;

  // inquiries
  HeapWord* startWord()   const { return _bmStartWord; }
  size_t    sizeInWords() const { return _bmWordSize;  }
  size_t    sizeInBits()  const { return _bm.size();   }
  // the following is one past the last word in space
  HeapWord* endWord()     const { return _bmStartWord + _bmWordSize; }

  // reading marks
  bool isSame(CMSBitMap map) {
	  return _bm.is_same(map.getBitMap());
  }
  BitMap getBitMap() {
	  return _bm;
  }
  bool isMarked(HeapWord* addr) const;
  bool par_isMarked(HeapWord* addr) const; // do not lock checks
  bool isUnmarked(HeapWord* addr) const;
  bool isAllClear() const;

  // writing marks
  void mark(HeapWord* addr);
  // For marking by parallel GC threads;
  // returns true if we did, false if another thread did
  bool par_mark(HeapWord* addr);

  void mark_range(MemRegion mr);
  void par_mark_range(MemRegion mr);
  void mark_large_range(MemRegion mr);
  void par_mark_large_range(MemRegion mr);
  bool par_clear(HeapWord* addr); // For unmarking by parallel GC threads.
  void clear_range(MemRegion mr);
  void par_clear_range(MemRegion mr);
  void clear_large_range(MemRegion mr);
  void par_clear_large_range(MemRegion mr);
  void clear_all();
  void clear_all_incrementally();  // Not yet implemented!!

  NOT_PRODUCT(
    // checks the memory region for validity
    void region_invariant(MemRegion mr);
  )

  // iteration
  void iterate(BitMapClosure* cl) {
    _bm.iterate(cl);
  }
  void iterate(BitMapClosure* cl, HeapWord* left, HeapWord* right);
  void dirty_range_iterate_clear(MemRegionClosure* cl);
  void dirty_range_iterate_clear(MemRegion mr, MemRegionClosure* cl);

  // auxiliary support for iteration
  HeapWord* getNextMarkedWordAddress(HeapWord* addr) const;
  HeapWord* getNextMarkedWordAddress(HeapWord* start_addr,
                                            HeapWord* end_addr) const;
  HeapWord* getNextUnmarkedWordAddress(HeapWord* addr) const;
  HeapWord* getNextUnmarkedWordAddress(HeapWord* start_addr,
                                              HeapWord* end_addr) const;
  MemRegion getAndClearMarkedRegion(HeapWord* addr);
  MemRegion getAndClearMarkedRegion(HeapWord* start_addr,
                                           HeapWord* end_addr);

  // conversion utilities
  HeapWord* offsetToHeapWord(size_t offset) const;
  size_t    heapWordToOffset(HeapWord* addr) const;
  size_t    heapWordDiffToOffsetDiff(size_t diff) const;

  // debugging
  // is this address range covered by the bit-map?
  NOT_PRODUCT(
    bool covers(MemRegion mr) const;
    bool covers(HeapWord* start, size_t size = 0) const;
  )
  void verifyNoOneBitsInRange(HeapWord* left, HeapWord* right) PRODUCT_RETURN;
};

// Represents a marking stack used by the CMS collector.
// Ideally this should be GrowableArray<> just like MSC's marking stack(s).
class CMSMarkStack: public CHeapObj  {
  //
  friend class CMSCollector;   // to get at expasion stats further below
  //

  VirtualSpace _virtual_space;  // space for the stack
  oop*   _base;      // bottom of stack
  size_t _index;     // one more than last occupied index
  size_t _capacity;  // max #elements
  Mutex  _par_lock;  // an advisory lock used in case of parallel access
  NOT_PRODUCT(size_t _max_depth;)  // max depth plumbed during run

 protected:
  size_t _hit_limit;      // we hit max stack size limit
  size_t _failed_double;  // we failed expansion before hitting limit

 public:
  CMSMarkStack():
    _par_lock(Mutex::event, "CMSMarkStack._par_lock", true),
    _hit_limit(0),
    _failed_double(0) {}

  bool allocate(size_t size);

  size_t capacity() const { return _capacity; }

  oop pop() {
    if (!isEmpty()) {
      return _base[--_index] ;
    }
    return NULL;
  }

  bool push(oop ptr) {
    if (isFull()) {
      return false;
    } else {
      _base[_index++] = ptr;
      NOT_PRODUCT(_max_depth = MAX2(_max_depth, _index));
      return true;
    }
  }

  bool isEmpty() const { return _index == 0; }
  bool isFull()  const {
    assert(_index <= _capacity, "buffer overflow");
    return _index == _capacity;
  }

  size_t length() { return _index; }

  // "Parallel versions" of some of the above
  oop par_pop() {
    // lock and pop
    MutexLockerEx x(&_par_lock, Mutex::_no_safepoint_check_flag);
    return pop();
  }

  bool par_push(oop ptr) {
    // lock and push
    MutexLockerEx x(&_par_lock, Mutex::_no_safepoint_check_flag);
    return push(ptr);
  }

  // Forcibly reset the stack, losing all of its contents.
  void reset() {
    _index = 0;
  }

  // Expand the stack, typically in response to an overflow condition
  void expand();

  // Compute the least valued stack element.
  oop least_value(HeapWord* low) {
     oop least = (oop)low;
     for (size_t i = 0; i < _index; i++) {
       least = MIN2(least, _base[i]);
     }
     return least;
  }

  // Exposed here to allow stack expansion in || case
  Mutex* par_lock() { return &_par_lock; }
};

class CardTableRS;
class CMSParGCThreadState;

class ModUnionClosure: public MemRegionClosure {
 protected:
  CMSBitMap* _t;
 public:
  ModUnionClosure(CMSBitMap* t): _t(t) { }
  void do_MemRegion(MemRegion mr);
};

class ModUnionClosurePar: public ModUnionClosure {
 public:
  ModUnionClosurePar(CMSBitMap* t): ModUnionClosure(t) { }
  void do_MemRegion(MemRegion mr);
};

// Survivor Chunk Array in support of parallelization of
// Survivor Space rescan.
class ChunkArray: public CHeapObj {
  size_t _index;
  size_t _capacity;
  size_t _overflows;
  HeapWord** _array;   // storage for array

 public:
  ChunkArray() : _index(0), _capacity(0), _overflows(0), _array(NULL) {}
  ChunkArray(HeapWord** a, size_t c):
    _index(0), _capacity(c), _overflows(0), _array(a) {}

  HeapWord** array() { return _array; }
  void set_array(HeapWord** a) { _array = a; }

  size_t capacity() { return _capacity; }
  void set_capacity(size_t c) { _capacity = c; }

  size_t end() {
    assert(_index <= capacity(),
           err_msg("_index (" SIZE_FORMAT ") > _capacity (" SIZE_FORMAT "): out of bounds",
                   _index, _capacity));
    return _index;
  }  // exclusive

  HeapWord* nth(size_t n) {
    assert(n < end(), "Out of bounds access");
    return _array[n];
  }

  void reset() {
    _index = 0;
    if (_overflows > 0 && PrintCMSStatistics > 1) {
      warning("CMS: ChunkArray[" SIZE_FORMAT "] overflowed " SIZE_FORMAT " times",
              _capacity, _overflows);
    }
    _overflows = 0;
  }

  void record_sample(HeapWord* p, size_t sz) {
    // For now we do not do anything with the size
    if (_index < _capacity) {
      _array[_index++] = p;
    } else {
      ++_overflows;
      assert(_index == _capacity,
             err_msg("_index (" SIZE_FORMAT ") > _capacity (" SIZE_FORMAT
                     "): out of bounds at overflow#" SIZE_FORMAT,
                     _index, _capacity, _overflows));
    }
  }
};

//
// Timing, allocation and promotion statistics for gc scheduling and incremental
// mode pacing.  Most statistics are exponential averages.
//
class CMSStats VALUE_OBJ_CLASS_SPEC {
 private:
  ConcurrentMarkSweepGeneration* const _cms_gen;   // The cms (old) gen.

  // The following are exponential averages with factor alpha:
  //   avg = (100 - alpha) * avg + alpha * cur_sample
  //
  //   The durations measure:  end_time[n] - start_time[n]
  //   The periods measure:    start_time[n] - start_time[n-1]
  //
  // The cms period and duration include only concurrent collections; time spent
  // in foreground cms collections due to System.gc() or because of a failure to
  // keep up are not included.
  //
  // There are 3 alphas to "bootstrap" the statistics.  The _saved_alpha is the
  // real value, but is used only after the first period.  A value of 100 is
  // used for the first sample so it gets the entire weight.
  unsigned int _saved_alpha; // 0-100
  unsigned int _gc0_alpha;
  unsigned int _cms_alpha;

  double _gc0_duration;
  double _gc0_period;
  size_t _gc0_promoted;         // bytes promoted per gc0
  double _cms_duration;
  double _cms_duration_pre_sweep; // time from initiation to start of sweep
  double _cms_duration_per_mb;
  double _cms_period;
  size_t _cms_allocated;        // bytes of direct allocation per gc0 period

  // Timers.
  elapsedTimer _cms_timer;
  TimeStamp    _gc0_begin_time;
  TimeStamp    _cms_begin_time;
  TimeStamp    _cms_end_time;

  // Snapshots of the amount used in the CMS generation.
  size_t _cms_used_at_gc0_begin;
  size_t _cms_used_at_gc0_end;
  size_t _cms_used_at_cms_begin;

  // Used to prevent the duty cycle from being reduced in the middle of a cms
  // cycle.
  bool _allow_duty_cycle_reduction;

  enum {
    _GC0_VALID = 0x1,
    _CMS_VALID = 0x2,
    _ALL_VALID = _GC0_VALID | _CMS_VALID
  };

  unsigned int _valid_bits;

  unsigned int _icms_duty_cycle;        // icms duty cycle (0-100).

 protected:

  // Return a duty cycle that avoids wild oscillations, by limiting the amount
  // of change between old_duty_cycle and new_duty_cycle (the latter is treated
  // as a recommended value).
  static unsigned int icms_damped_duty_cycle(unsigned int old_duty_cycle,
                                             unsigned int new_duty_cycle);
  unsigned int icms_update_duty_cycle_impl();

  // In support of adjusting of cms trigger ratios based on history
  // of concurrent mode failure.
  double cms_free_adjustment_factor(size_t free) const;
  void   adjust_cms_free_adjustment_factor(bool fail, size_t free);

 public:
  CMSStats(ConcurrentMarkSweepGeneration* cms_gen,
           unsigned int alpha = CMSExpAvgFactor);

  // Whether or not the statistics contain valid data; higher level statistics
  // cannot be called until this returns true (they require at least one young
  // gen and one cms cycle to have completed).
  bool valid() const;

  // Record statistics.
  void record_gc0_begin();
  void record_gc0_end(size_t cms_gen_bytes_used);
  void record_cms_begin();
  void record_cms_end();

  // Allow management of the cms timer, which must be stopped/started around
  // yield points.
  elapsedTimer& cms_timer()     { return _cms_timer; }
  void start_cms_timer()        { _cms_timer.start(); }
  void stop_cms_timer()         { _cms_timer.stop(); }

  // Basic statistics; units are seconds or bytes.
  double gc0_period() const     { return _gc0_period; }
  double gc0_duration() const   { return _gc0_duration; }
  size_t gc0_promoted() const   { return _gc0_promoted; }
  double cms_period() const          { return _cms_period; }
  double cms_duration() const        { return _cms_duration; }
  double cms_duration_per_mb() const { return _cms_duration_per_mb; }
  size_t cms_allocated() const       { return _cms_allocated; }

  size_t cms_used_at_gc0_end() const { return _cms_used_at_gc0_end;}

  // Seconds since the last background cms cycle began or ended.
  double cms_time_since_begin() const;
  double cms_time_since_end() const;

  // Higher level statistics--caller must check that valid() returns true before
  // calling.

  // Returns bytes promoted per second of wall clock time.
  double promotion_rate() const;

  // Returns bytes directly allocated per second of wall clock time.
  double cms_allocation_rate() const;

  // Rate at which space in the cms generation is being consumed (sum of the
  // above two).
  double cms_consumption_rate() const;

  // Returns an estimate of the number of seconds until the cms generation will
  // fill up, assuming no collection work is done.
  double time_until_cms_gen_full() const;

  // Returns an estimate of the number of seconds remaining until
  // the cms generation collection should start.
  double time_until_cms_start() const;

  // End of higher level statistics.

  // Returns the cms incremental mode duty cycle, as a percentage (0-100).
  unsigned int icms_duty_cycle() const { return _icms_duty_cycle; }

  // Update the duty cycle and return the new value.
  unsigned int icms_update_duty_cycle();

  // Debugging.
  void print_on(outputStream* st) const PRODUCT_RETURN;
  void print() const { print_on(gclog_or_tty); }
};

// A closure related to weak references processing which
// we embed in the CMSCollector, since we need to pass
// it to the reference processor for secondary filtering
// of references based on reachability of referent;
// see role of _is_alive_non_header closure in the
// ReferenceProcessor class.
// For objects in the CMS generation, this closure checks
// if the object is "live" (reachable). Used in weak
// reference processing.
class CMSIsAliveClosure: public BoolObjectClosure {
  const MemRegion  _span;
  const CMSBitMap* _bit_map;

  friend class CMSCollector;
 public:
  CMSIsAliveClosure(MemRegion span,
                    CMSBitMap* bit_map):
    _span(span),
    _bit_map(bit_map) {
    assert(!span.is_empty(), "Empty span could spell trouble");
  }

  void do_object(oop obj) {
    assert(false, "not to be invoked");
  }

  bool do_object_b(oop obj);
};


// Implements AbstractRefProcTaskExecutor for CMS.
class CMSRefProcTaskExecutor: public AbstractRefProcTaskExecutor {
public:

  CMSRefProcTaskExecutor(CMSCollector& collector)
    : _collector(collector)
  { }

  // Executes a task using worker threads.
  virtual void execute(ProcessTask& task);
  virtual void execute(EnqueueTask& task);
private:
  CMSCollector& _collector;
};


/*
 * This is the class that
 */
class ScanChunk  : public CHeapObj {

private:
    void* _address;

public:
    ScanChunk(void *address){
    	_address = __page_start(address);
    }

	int greyObjectCount() const {
		jbyte value = *(jbyte *)Universe::getPageTablePosition(_address);
		return (int)value;
	}

	int getPageIndex(){
		return Universe::getPageIndex(_address);
	}

	void* getAddress(){
		return _address;
	}

    bool operator<(ScanChunk other) const
    {
        return greyObjectCount() > other.greyObjectCount();
    }

    void *start(){
    	return __page_start(_address);
    }

    void *end(){
    	return __page_end(_address);
    }

};

class ChunkListPolicy : public CHeapObj {

private:
	ChunkList * _chunkList;

public:

	ChunkListPolicy(ChunkList* cList){
		_chunkList = cList;
	}

	void sortList(){

	}
};

class ChunkList : public CHeapObj  {
	private:
		pthread_mutex_t _listMutex;
		std::list<ScanChunk *> _chunkList;
		int list_pushes, list_pops;
		ChunkListPolicy *policy;

		bool isInCore(void *address){
			unsigned char vec[1];
			address = __page_start(address);
			if(mincore(address, sysconf(_SC_PAGE_SIZE), vec) == -1){
				perror("err :");
				printf("Error in mincore, arguments %p.\n", address);
				exit(-1);
			}
			return ((vec[0] & 1) == 1);
		}

	public:
		ChunkList(){
			list_pops = 0;
			list_pushes = 0;
			policy = new ChunkListPolicy(this);
		}

		void lockList(bool isPar){
			if(isPar)
				pthread_mutex_lock(&_listMutex);
		}

		void unLockList(bool isPar){
			if(isPar)
				pthread_mutex_unlock(&_listMutex);
		}

		void addChunk(ScanChunk *chunk, bool isPar){
			lockList(isPar);
				_chunkList.push_back(chunk);
				list_pushes++;
			unLockList(isPar);
		}

		void sorChunkList(){
			_chunkList.sort();
		}

		void sortChunkList_par(){
			pthread_mutex_lock(&_listMutex);
				_chunkList.sort();
			pthread_mutex_unlock(&_listMutex);
		}

		ScanChunk *pop(bool isPar){
			ScanChunk* c = NULL;
			lockList(isPar);
			int attemptsLeft = _chunkList.size();
			if(_chunkList.size() == 0){
				goto out;
			} // Else, there is at least one element scan chunk within the list
			c = _chunkList.front();
			_chunkList.pop_front();
			while(attemptsLeft > 0 && !__in_core(c->getAddress())){
				attemptsLeft--;
				_chunkList.push_back(c);
				c = _chunkList.front();
				_chunkList.pop_front();
			}
			list_pops++;
			out: unLockList(isPar);
			return c;
		}

		bool isEmpty(){
			return _chunkList.empty();
		}

		size_t listSize(){
			return (size_t)_chunkList.size();
		}
};

class PartitionMetaData : public CHeapObj {
	int totalDecrements;
	int totalIncrements;
	int *_pageGOC;
// Keeps a track of the number of the grey object count per partition
	int* _partitionGOC;
// Total number of partitions
	int _numberPartitions;
// The span that contains the mature and the permanent spaces
	MemRegion _span;
// The average partition size
	int _partitionSize;
// Total number of collector threads running concurrently after the dirty card clean up phase
	int _numberCollectorThreads;
// Shared memory for communicating the number of threads that are idle - an integer is good enough
	int _idleThreadCount[1];
// Shared memory for communicating signals from the master to the collector threads
	int _message[1];
// CMSCollector - just for the sake of it
	CMSCollector* _collector;
	int _numberPages;
	// This is a bit map of the partitions. For each partition within the span, a byte is stored.
	bool* _partitionMap;

// Message States Used
	enum MessageState {
		WORK = 0,
		WAIT = 1,
		TERMINATE = 2
	};

public:
	void decreaseBy(int count){
		totalDecrements +=  count;
	}
	void increaseBy(int count){
		totalIncrements += count;
	}
	// Methods for setting the message state
	void setMessageState (MessageState state){
		_message[0] = (int)state;
	}

	bool isSetToWait(){
	  return (
		_message[0] == WAIT
	  );
	}

	bool isSetToTerminate(){
		return(
		 _message[0] == TERMINATE
		);
	}

	void setToWait(){
		setMessageState(WAIT);
	}

	void setToWork(){
		setMessageState(WORK);
	}

	void setToTerminate(){
		setMessageState(TERMINATE);
	}

	MessageState getMessageState(){
		return ((MessageState)_message[0]);
	}

	bool areThreadsSuspended(){
		return (
			_idleThreadCount[0] == _numberCollectorThreads
		);
	}

	int numberPages() {
		return _numberPages;
	}

	int getGreyPageCount(){
		int index, sum = 0;
			for (index = 0; index < _numberPages; index++){
				if( _pageGOC[index] > 0 )
					sum++;
			}
		return sum;
	}

	int nextPartitionIndex(int currPartitionIndex){
		return ((currPartitionIndex + 1) % _numberPartitions);
	}


	bool markAtomic(int partitionIndex){
		if(_partitionMap == NULL){
			printf("Partition Map is null.\n");
			exit(-1);
		}
		jbyte* position = (jbyte*)&_partitionMap[partitionIndex];
		jbyte value = *position;
		jbyte newValue = true;
		if(Atomic::cmpxchg(newValue, (volatile jbyte*)position, value) != value){
			return false;
		}
		return true;
	}

	bool clearAtomic(int partitionIndex){
		jbyte *position = (jbyte*)&_partitionMap[partitionIndex];
		jbyte value = *position;
		jbyte newValue = false;
		if(Atomic::cmpxchg(newValue, (volatile jbyte*)position, value) != value){
			return false;
		}
		return true;
	}


	// This method gets the next partition from the list of partitions, if the
	// currentPartitionIndex is the same as that of the returned value, then the
	// thread has run through all the different partitions. This is not currently used
		int getNextPartition(int currentPartitionIndex){
			int originalPartitionIndex = currentPartitionIndex;
			bool markAtomicFailed = false;
			int count;
			for(count = 0; count < _numberPartitions; count++){
				currentPartitionIndex = nextPartitionIndex(currentPartitionIndex);
				if(markAtomic(currentPartitionIndex))
					return currentPartitionIndex;
				else
					markAtomicFailed = true;
			}
		}

		int getPageIndexFromPageAddress(void *address){
			return (((uintptr_t)__page_start(address) - (uintptr_t)__page_start(_span.start())) / (_PAGE_SIZE));
		}

		// Starting Index of the partition
		int getPartitionStart(int partitionIndex){
			return (partitionIndex * _partitionSize);
		}

		int getPartitionSize(int partitionIndex){
		// If this is the last partition then the partition size is different from the other partitions
			if(partitionIndex == (_numberPartitions-1)){
				int partitionStart = getPartitionStart(partitionIndex);
				return (getPageIndexFromPageAddress((void *)_span.last()) - partitionStart + 1);
			}
			return _partitionSize;
		}

		// This function converts a given page index into the base address of the page
		// All the indexes are now relative to the base of the span start now.
		void *getPageBase(int pageIndex){
			return ((void *)
				((uintptr_t)__page_start(_span.start()) +  (uintptr_t)(pageIndex * _PAGE_SIZE))
			);
		}

		// Gets a high priority page from a given partition
		// If all the pages have a zero count then the page index returned would be -1
		// We would improve this method to get a collection of pages later on. Currently, we only
		// fetch a single page per scan of a partition.
			int getHighPriorityPage(int partitionIndex){
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

		// This method tries to get a high priority page from the set of subsequent partitions.
		// If, all the pages have zero grey object counts, then the page index returned would be -1.
		// Currently, the stopping condition for the thread is set to be the case when it has scanned
		//	all the partitions and has not found a single page with a non zero count.
			int getPageFromNextPartition(int currentPartition){
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

	PartitionMetaData(CMSCollector* cmsCollector, MemRegion span){
		_collector = cmsCollector;
		_span = span;
		_numberPartitions = NumberPartitions;
		_partitionGOC = new int[_numberPartitions];
		_partitionMap = new bool[_numberPartitions];
		int count;
		for(count = 0; count < _numberPartitions; count++){
			_partitionGOC[count] = 0;
			_partitionMap[count] = false;
		}
		_numberPages = __numPages(_span.last(), _span.start());
		_pageGOC = new int[_numberPages];
		for(count = 0; count < _numberPages; count++){
				_pageGOC[count] = 0;
		}
		_partitionSize = (int)_numberPages/_numberPartitions;
		_idleThreadCount[0] = 0;
		setToWork();
		_numberCollectorThreads = ConcGCThreads - 1; // One of the conc GC thread is used as a master thread
		totalDecrements = 0;
		totalDecrements = 0;
	}

	int getTotalGreyObjectsPageLevel(){
		int index, sum = 0;
			for (index = 0; index < _numberPages; index++){
				sum += _pageGOC[index];
			}
			printf("Total Increments %d, Decrements %d.\n", totalIncrements, totalDecrements);
			return sum;
	}

	int getTotalGreyObjectsChunkLevel(){
		int index, sum = 0;
		for (index = 0; index < _numberPartitions; index++){
			sum += _partitionGOC[index];
		}
		printf("Total Increments %d, Decrements %d.\n", totalIncrements, totalDecrements);
		return sum;
	}

	bool doWeTerminate(){
		return(
				areThreadsSuspended() && (getTotalGreyObjectsChunkLevel() == 0)
		);
	}

	int incrementWaitThreadCount(){
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

	int decrementWaitThreadCount(){
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

	bool checkAndWait(){
		   if(isSetToWait()){
			   incrementWaitThreadCount();
			   return true;
		   }
		   return false;
	}

	int getMin(int a, int b){
		 int min = a < b ? a : b;
		 return min;
	}

	int getPartitionIndexFromPage(int pageIndex){
		int partitionIndex = getMin(pageIndex / _partitionSize, _numberPartitions - 1);
		return partitionIndex;
	}

	int getPartitionIndexFromPageAddress(void *pageAddress){
		int pageIndex = getPageIndexFromPageAddress(pageAddress);
		int partitionIndex = getPartitionIndexFromPage(pageIndex);
		return partitionIndex;
	}

	unsigned int clearGreyObjectCount_Page(void *pageAddress){
		int index = getPageIndexFromPageAddress(pageAddress);
		int *position = &(_pageGOC[index]);
		unsigned int value = *position;
		unsigned int newValue = 0;
		while(Atomic::cmpxchg((unsigned int)newValue, (unsigned int*)position,
				(unsigned int)value) != (unsigned int)value){
			value = *position;
		}
		return value;
	}

	unsigned int incrementIndex_AtomicPage(int increment, void *pageAddress){
		increaseBy(increment);
		int index = getPageIndexFromPageAddress(pageAddress);
		int *position = &(_pageGOC[index]);
		int value = *position;
		int newValue = value + increment;
		while(Atomic::cmpxchg((unsigned int)newValue, (unsigned int*)position,
				(unsigned int)value) != (unsigned int)value){
			value = *position;
			newValue = value + increment;
		}
		return (unsigned int)newValue;
	}

	unsigned int decrementIndex_AtomicPage(int decrement, void *pageAddress){
		decreaseBy(decrement);
		int index = getPageIndexFromPageAddress(pageAddress);
		int *position = &(_pageGOC[index]);
		int value = *position;
		int newValue = value - decrement;
		while(Atomic::cmpxchg((unsigned int)newValue, (unsigned int*)position,
				(unsigned int)value) != (unsigned int)value){
			value = *position;
			newValue = value - decrement;
		}
		return (unsigned int)newValue;
	}

	unsigned int incrementIndex_Atomic(int increment, void *pageAddress){
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

	unsigned int decrementIndex_Atomic(int decrement, void* pageAddress){
		int index = getPartitionIndexFromPageAddress(pageAddress);
		int *position = &(_partitionGOC[index]);
		int value = *position;
		int newValue = value - decrement;
		while(Atomic::cmpxchg((unsigned int)newValue, (unsigned int*)position,
				(unsigned int)value) != (unsigned int)value){
			value = *position;
			newValue = value - decrement;
		}
#if OCMS_NO_GREY_ASSERT
		if(*position < 0){
			printf("Something is wrong since the value after decrementing is lesser than zero. \n");
		}
#endif
		return (unsigned int)newValue;
	}



};

class CMSCollector: public CHeapObj {
  friend class VMStructs;
  friend class ConcurrentMarkSweepThread;
  friend class ConcurrentMarkSweepGeneration;
  friend class CompactibleFreeListSpace;
  friend class CMSParRemarkTask;
  friend class CMSConcMarkingTask;
  friend class CMSRefProcTaskProxy;
  friend class CMSRefProcTaskExecutor;
  friend class ScanMarkedObjectsAgainCarefullyClosure;  // for sampling eden
  friend class SurvivorSpacePrecleanClosure;            // --- ditto -------
  friend class PushOrMarkClosure;             // to access _restart_addr
  friend class Par_PushOrMarkClosure;             // to access _restart_addr
  friend class Par_GreyMarkClosure;
  friend class Par_MarkFromGreyRootsClosure;
  friend class MarkFromRootsClosure;          //  -- ditto --
                                              // ... and for clearing cards
  friend class Par_MarkFromRootsClosure;      //  to access _restart_addr
                                              // ... and for clearing cards
  friend class Par_ConcMarkingClosure;        //  to access _restart_addr etc.
  friend class MarkFromRootsVerifyClosure;    // to access _restart_addr
  friend class PushAndMarkVerifyClosure;      //  -- ditto --
  friend class MarkRefsIntoAndScanClosure;    // to access _overflow_list
  friend class PushAndMarkClosure;            //  -- ditto --
  friend class Par_PushAndMarkClosure;        //  -- ditto --
  friend class CMSKeepAliveClosure;           //  -- ditto --
  friend class CMSDrainMarkingStackClosure;   //  -- ditto --
  friend class CMSInnerParMarkAndPushClosure; //  -- ditto --
  NOT_PRODUCT(friend class ScanMarkedObjectsAgainClosure;) //  assertion on _overflow_list
  friend class ReleaseForegroundGC;  // to access _foregroundGCShouldWait
  friend class VM_CMS_Operation;
  friend class VM_CMS_Initial_Mark;
  friend class VM_CMS_Final_Remark;
  friend class TraceCMSMemoryManagerStats;

 private:
  jlong _time_of_last_gc;
  void update_time_of_last_gc(jlong now) {
    _time_of_last_gc = now;
  }

  PartitionMetaData* _partitionMetaData;

  ChunkList* _collectorChunkList;

  OopTaskQueueSet* _task_queues;

  // Overflow list of grey objects, threaded through mark-word
  // Manipulated with CAS in the parallel/multi-threaded case.
  oop _overflow_list;
  // The following array-pair keeps track of mark words
  // displaced for accomodating overflow list above.
  // This code will likely be revisited under RFE#4922830.
  Stack<oop>     _preserved_oop_stack;
  Stack<markOop> _preserved_mark_stack;

  int*             _hash_seed;

  // In support of multi-threaded concurrent phases
  YieldingFlexibleWorkGang* _conc_workers;

  // Performance Counters
  CollectorCounters* _gc_counters;

  // Initialization Errors
  bool _completed_initialization;

  // In support of ExplicitGCInvokesConcurrent
  static   bool _full_gc_requested;
  unsigned int  _collection_count_start;

  // Should we unload classes this concurrent cycle?
  bool _should_unload_classes;
  unsigned int  _concurrent_cycles_since_last_unload;
  unsigned int concurrent_cycles_since_last_unload() const {
    return _concurrent_cycles_since_last_unload;
  }
  // Did we (allow) unload classes in the previous concurrent cycle?
  bool unloaded_classes_last_cycle() const {
    return concurrent_cycles_since_last_unload() == 0;
  }
  // Root scanning options for perm gen
  int _roots_scanning_options;
  int roots_scanning_options() const      { return _roots_scanning_options; }
  void add_root_scanning_option(int o)    { _roots_scanning_options |= o;   }
  void remove_root_scanning_option(int o) { _roots_scanning_options &= ~o;  }

  // Verification support
  CMSBitMap     _verification_mark_bm;
  void verify_after_remark_work_1();
  void verify_after_remark_work_2();

  // true if any verification flag is on.
  bool _verifying;
  bool verifying() const { return _verifying; }
  void set_verifying(bool v) { _verifying = v; }

  // Collector policy
  ConcurrentMarkSweepPolicy* _collector_policy;
  ConcurrentMarkSweepPolicy* collector_policy() { return _collector_policy; }

  // XXX Move these to CMSStats ??? FIX ME !!!
  elapsedTimer _inter_sweep_timer;   // time between sweeps
  elapsedTimer _intra_sweep_timer;   // time _in_ sweeps
  // padded decaying average estimates of the above
  AdaptivePaddedAverage _inter_sweep_estimate;
  AdaptivePaddedAverage _intra_sweep_estimate;

 protected:
  ConcurrentMarkSweepGeneration* _cmsGen;  // old gen (CMS)
  ConcurrentMarkSweepGeneration* _permGen; // perm gen
  MemRegion                      _span;    // span covering above two
  CardTableRS*                   _ct;      // card table

  // CMS marking support structures
  CMSBitMap     _markBitMap;
  CMSBitMap 	_greyMarkBitMap;
  CMSBitMap     _modUnionTable;
  CMSMarkStack  _markStack;
  CMSMarkStack  _revisitStack;            // used to keep track of klassKlass objects
                                          // to revisit
  CMSBitMap     _perm_gen_verify_bit_map; // Mark bit map for perm gen verification support.

  HeapWord*     _restart_addr; // in support of marking stack overflow
  void          lower_restart_addr(HeapWord* low);

  // Counters in support of marking stack / work queue overflow handling:
  // a non-zero value indicates certain types of overflow events during
  // the current CMS cycle and could lead to stack resizing efforts at
  // an opportune future time.
  size_t        _ser_pmc_preclean_ovflw;
  size_t        _ser_pmc_remark_ovflw;
  size_t        _par_pmc_remark_ovflw;
  size_t        _ser_kac_preclean_ovflw;
  size_t        _ser_kac_ovflw;
  size_t        _par_kac_ovflw;
  NOT_PRODUCT(ssize_t _num_par_pushes;)

  // ("Weak") Reference processing support
  ReferenceProcessor*            _ref_processor;
  CMSIsAliveClosure              _is_alive_closure;
      // keep this textually after _markBitMap and _span; c'tor dependency

  ConcurrentMarkSweepThread*     _cmsThread;   // the thread doing the work
  ModUnionClosure    _modUnionClosure;
  ModUnionClosurePar _modUnionClosurePar;

  // CMS abstract state machine
  // initial_state: Idling
  // next_state(Idling)            = {Marking}
  // next_state(Marking)           = {Precleaning, Sweeping}
  // next_state(Precleaning)       = {AbortablePreclean, FinalMarking}
  // next_state(AbortablePreclean) = {FinalMarking}
  // next_state(FinalMarking)      = {Sweeping}
  // next_state(Sweeping)          = {Resizing}
  // next_state(Resizing)          = {Resetting}
  // next_state(Resetting)         = {Idling}
  // The numeric values below are chosen so that:
  // . _collectorState <= Idling ==  post-sweep && pre-mark
  // . _collectorState in (Idling, Sweeping) == {initial,final}marking ||
  //                                            precleaning || abortablePrecleanb
 public:
  enum CollectorState {
    Resizing            = 0,
    Resetting           = 1,
    Idling              = 2,
    InitialMarking      = 3,
    Marking             = 4,
    Precleaning         = 5,
    AbortablePreclean   = 6,
    FinalMarking        = 7,
    Sweeping            = 8
  };

  MemRegion getSpan(){
	  return _span;
  }

  PartitionMetaData* getPartitionMetaData(){
	return _partitionMetaData;
  }

  CMSBitMap* getDirtyCardBitMap(){
	  return &(_modUnionTable);
  }

  unsigned int clearGreyObjCountPage(void *addr){
	  return _partitionMetaData->clearGreyObjectCount_Page(addr);
  }

  unsigned int incGreyObjPage(void *addr, int count){
	  return _partitionMetaData->incrementIndex_AtomicPage(count, addr);
  }

  unsigned int incGreyObj(void *addr, int count){
	  return _partitionMetaData->incrementIndex_Atomic(count, addr);
  }

  unsigned int decGreyObj(void *addr, int count){
	  return _partitionMetaData->decrementIndex_Atomic(count, addr);
  }

  ChunkList* getChunkList(){
		  return _collectorChunkList;
  }

  bool compareBitMaps(){
	  return  _markBitMap.isSame(_greyMarkBitMap);
  }


 protected:
  static CollectorState _collectorState;

  // State related to prologue/epilogue invocation for my generations
  bool _between_prologue_and_epilogue;

  // Signalling/State related to coordination between fore- and backgroud GC
  // Note: When the baton has been passed from background GC to foreground GC,
  // _foregroundGCIsActive is true and _foregroundGCShouldWait is false.
  static bool _foregroundGCIsActive;    // true iff foreground collector is active or
                                 // wants to go active
  static bool _foregroundGCShouldWait;  // true iff background GC is active and has not
                                 // yet passed the baton to the foreground GC

  // Support for CMSScheduleRemark (abortable preclean)
  bool _abort_preclean;
  bool _start_sampling;

  int    _numYields;
  size_t _numDirtyCards;
  size_t _sweep_count;
  // number of full gc's since the last concurrent gc.
  uint   _full_gcs_since_conc_gc;

  // occupancy used for bootstrapping stats
  double _bootstrap_occupancy;

  // timer
  elapsedTimer _timer;

  // Timing, allocation and promotion statistics, used for scheduling.
  CMSStats      _stats;

  // Allocation limits installed in the young gen, used only in
  // CMSIncrementalMode.  When an allocation in the young gen would cross one of
  // these limits, the cms generation is notified and the cms thread is started
  // or stopped, respectively.
  HeapWord*     _icms_start_limit;
  HeapWord*     _icms_stop_limit;

  enum CMS_op_type {
    CMS_op_checkpointRootsInitial,
    CMS_op_checkpointRootsFinal
  };

  void do_CMS_operation(CMS_op_type op);
  bool stop_world_and_do(CMS_op_type op);

  OopTaskQueueSet* task_queues() { return _task_queues; }
  int*             hash_seed(int i) { return &_hash_seed[i]; }
  YieldingFlexibleWorkGang* conc_workers() { return _conc_workers; }

  // Support for parallelizing Eden rescan in CMS remark phase
  void sample_eden(); // ... sample Eden space top

 private:
  // Support for parallelizing young gen rescan in CMS remark phase
  Generation* _young_gen;  // the younger gen
  HeapWord** _top_addr;    // ... Top of Eden
  HeapWord** _end_addr;    // ... End of Eden
  HeapWord** _eden_chunk_array; // ... Eden partitioning array
  size_t     _eden_chunk_index; // ... top (exclusive) of array
  size_t     _eden_chunk_capacity;  // ... max entries in array

  // Support for parallelizing survivor space rescan
  HeapWord** _survivor_chunk_array;
  size_t     _survivor_chunk_index;
  size_t     _survivor_chunk_capacity;
  size_t*    _cursor;
  ChunkArray* _survivor_plab_array;

  // Support for marking stack overflow handling
  bool take_from_overflow_list(size_t num, CMSMarkStack* to_stack);
  bool par_take_from_overflow_list(size_t num,
                                   OopTaskQueue* to_work_q,
                                   int no_of_gc_threads);
  void push_on_overflow_list(oop p);
  void par_push_on_overflow_list(oop p);
  // the following is, obviously, not, in general, "MT-stable"
  bool overflow_list_is_empty() const;

  void preserve_mark_if_necessary(oop p);
  void par_preserve_mark_if_necessary(oop p);
  void preserve_mark_work(oop p, markOop m);
  void restore_preserved_marks_if_any();
  NOT_PRODUCT(bool no_preserved_marks() const;)
  // in support of testing overflow code
  NOT_PRODUCT(int _overflow_counter;)
  NOT_PRODUCT(bool simulate_overflow();)       // sequential
  NOT_PRODUCT(bool par_simulate_overflow();)   // MT version

  // CMS work methods
  void checkpointRootsInitialWork(bool asynch); // initial checkpoint work

  // a return value of false indicates failure due to stack overflow
  bool markFromRootsWork(bool asynch);  // concurrent marking work

 public:   // FIX ME!!! only for testing
  bool do_marking_st(bool asynch);      // single-threaded marking
  bool do_marking_mt(bool asynch);      // multi-threaded  marking

 private:

  // concurrent precleaning work
  size_t preclean_mod_union_table(ConcurrentMarkSweepGeneration* gen,
                                  ScanMarkedObjectsAgainCarefullyClosure* cl);
  size_t preclean_card_table(ConcurrentMarkSweepGeneration* gen,
                             ScanMarkedObjectsAgainCarefullyClosure* cl);
  // Does precleaning work, returning a quantity indicative of
  // the amount of "useful work" done.
  size_t preclean_work(bool clean_refs, bool clean_survivors);
  void abortable_preclean(); // Preclean while looking for possible abort
  void initialize_sequential_subtasks_for_young_gen_rescan(int i);
  // Helper function for above; merge-sorts the per-thread plab samples
  void merge_survivor_plab_arrays(ContiguousSpace* surv, int no_of_gc_threads);
  // Resets (i.e. clears) the per-thread plab sample vectors
  void reset_survivor_plab_arrays();

  // final (second) checkpoint work
  void checkpointRootsFinalWork(bool asynch, bool clear_all_soft_refs,
                                bool init_mark_was_synchronous);
  // work routine for parallel version of remark
  void do_remark_parallel();
  // work routine for non-parallel version of remark
  void do_remark_non_parallel();
  // reference processing work routine (during second checkpoint)
  void refProcessingWork(bool asynch, bool clear_all_soft_refs);

  // concurrent sweeping work
  void sweepWork(ConcurrentMarkSweepGeneration* gen, bool asynch);

  // (concurrent) resetting of support data structures
  void reset(bool asynch);

  // Clear _expansion_cause fields of constituent generations
  void clear_expansion_cause();

  // An auxilliary method used to record the ends of
  // used regions of each generation to limit the extent of sweep
  void save_sweep_limits();

  // Resize the generations included in the collector.
  void compute_new_size();

  // A work method used by foreground collection to determine
  // what type of collection (compacting or not, continuing or fresh)
  // it should do.
  void decide_foreground_collection_type(bool clear_all_soft_refs,
    bool* should_compact, bool* should_start_over);

  // A work method used by the foreground collector to do
  // a mark-sweep-compact.
  void do_compaction_work(bool clear_all_soft_refs);

  // A work method used by the foreground collector to do
  // a mark-sweep, after taking over from a possibly on-going
  // concurrent mark-sweep collection.
  void do_mark_sweep_work(bool clear_all_soft_refs,
    CollectorState first_state, bool should_start_over);

  // If the backgrould GC is active, acquire control from the background
  // GC and do the collection.
  void acquire_control_and_collect(bool   full, bool clear_all_soft_refs);

  // For synchronizing passing of control from background to foreground
  // GC.  waitForForegroundGC() is called by the background
  // collector.  It if had to wait for a foreground collection,
  // it returns true and the background collection should assume
  // that the collection was finished by the foreground
  // collector.
  bool waitForForegroundGC();

  // Incremental mode triggering:  recompute the icms duty cycle and set the
  // allocation limits in the young gen.
  void icms_update_allocation_limits();

  size_t block_size_using_printezis_bits(HeapWord* addr) const;
  size_t block_size_if_printezis_bits(HeapWord* addr) const;
  HeapWord* next_card_start_after_block(HeapWord* addr) const;

  void setup_cms_unloading_and_verification_state();
 public:
  CMSCollector(ConcurrentMarkSweepGeneration* cmsGen,
               ConcurrentMarkSweepGeneration* permGen,
               CardTableRS*                   ct,
               ConcurrentMarkSweepPolicy*     cp);
  ConcurrentMarkSweepThread* cmsThread() { return _cmsThread; }

  ReferenceProcessor* ref_processor() { return _ref_processor; }
  void ref_processor_init();

  Mutex* bitMapLock()        const { return _markBitMap.lock();    }
  static CollectorState abstract_state() { return _collectorState;  }

  bool should_abort_preclean() const; // Whether preclean should be aborted.
  size_t get_eden_used() const;
  size_t get_eden_capacity() const;

  ConcurrentMarkSweepGeneration* cmsGen() { return _cmsGen; }

  // locking checks
  NOT_PRODUCT(static bool have_cms_token();)

  // XXXPERM bool should_collect(bool full, size_t size, bool tlab);
  bool shouldConcurrentCollect();

  void collect(bool   full,
               bool   clear_all_soft_refs,
               size_t size,
               bool   tlab);
  void collect_in_background(bool clear_all_soft_refs);
  void collect_in_foreground(bool clear_all_soft_refs);

  // In support of ExplicitGCInvokesConcurrent
  static void request_full_gc(unsigned int full_gc_count);
  // Should we unload classes in a particular concurrent cycle?
  bool should_unload_classes() const {
    return _should_unload_classes;
  }
  bool update_should_unload_classes();

  void direct_allocated(HeapWord* start, size_t size);

  // Object is dead if not marked and current phase is sweeping.
  bool is_dead_obj(oop obj) const;

  // After a promotion (of "start"), do any necessary marking.
  // If "par", then it's being done by a parallel GC thread.
  // The last two args indicate if we need precise marking
  // and if so the size of the object so it can be dirtied
  // in its entirety.
  void promoted(bool par, HeapWord* start,
                bool is_obj_array, size_t obj_size);

  HeapWord* allocation_limit_reached(Space* space, HeapWord* top,
                                     size_t word_size);

  void getFreelistLocks() const;
  void releaseFreelistLocks() const;
  bool haveFreelistLocks() const;

  // GC prologue and epilogue
  void gc_prologue(bool full);
  void gc_epilogue(bool full);

  jlong time_of_last_gc(jlong now) {
    if (_collectorState <= Idling) {
      // gc not in progress
      return _time_of_last_gc;
    } else {
      // collection in progress
      return now;
    }
  }

  // Support for parallel remark of survivor space
  void* get_data_recorder(int thr_num);

  CMSBitMap* markBitMap()  { return &_markBitMap; }
  void directAllocated(HeapWord* start, size_t size);

  // main CMS steps and related support
  void checkpointRootsInitial(bool asynch);
  bool markFromRoots(bool asynch);  // a return value of false indicates failure
                                    // due to stack overflow
  void preclean();
  void checkpointRootsFinal(bool asynch, bool clear_all_soft_refs,
                            bool init_mark_was_synchronous);
  void sweep(bool asynch);

  // Check that the currently executing thread is the expected
  // one (foreground collector or background collector).
  static void check_correct_thread_executing() PRODUCT_RETURN;
  // XXXPERM void print_statistics()           PRODUCT_RETURN;

  bool is_cms_reachable(HeapWord* addr);

  // Performance Counter Support
  CollectorCounters* counters()    { return _gc_counters; }

  // timer stuff
  void    startTimer() { assert(!_timer.is_active(), "Error"); _timer.start();   }
  void    stopTimer()  { assert( _timer.is_active(), "Error"); _timer.stop();    }
  void    resetTimer() { assert(!_timer.is_active(), "Error"); _timer.reset();   }
  double  timerValue() { assert(!_timer.is_active(), "Error"); return _timer.seconds(); }

  int  yields()          { return _numYields; }
  void resetYields()     { _numYields = 0;    }
  void incrementYields() { _numYields++;      }
  void resetNumDirtyCards()               { _numDirtyCards = 0; }
  void incrementNumDirtyCards(size_t num) { _numDirtyCards += num; }
  size_t  numDirtyCards()                 { return _numDirtyCards; }

  static bool foregroundGCShouldWait() { return _foregroundGCShouldWait; }
  static void set_foregroundGCShouldWait(bool v) { _foregroundGCShouldWait = v; }
  static bool foregroundGCIsActive() { return _foregroundGCIsActive; }
  static void set_foregroundGCIsActive(bool v) { _foregroundGCIsActive = v; }
  size_t sweep_count() const             { return _sweep_count; }
  void   increment_sweep_count()         { _sweep_count++; }

  // Timers/stats for gc scheduling and incremental mode pacing.
  CMSStats& stats() { return _stats; }

  // Convenience methods that check whether CMSIncrementalMode is enabled and
  // forward to the corresponding methods in ConcurrentMarkSweepThread.
  static void start_icms();
  static void stop_icms();    // Called at the end of the cms cycle.
  static void disable_icms(); // Called before a foreground collection.
  static void enable_icms();  // Called after a foreground collection.
  void icms_wait();          // Called at yield points.

  // Adaptive size policy
  CMSAdaptiveSizePolicy* size_policy();
  CMSGCAdaptivePolicyCounters* gc_adaptive_policy_counters();

  // debugging
  void verify(bool);
  bool verify_after_remark();
  void verify_ok_to_terminate() const PRODUCT_RETURN;
  void verify_work_stacks_empty() const PRODUCT_RETURN;
  void verify_overflow_empty() const PRODUCT_RETURN;

  // convenience methods in support of debugging
  static const size_t skip_header_HeapWords() PRODUCT_RETURN0;
  HeapWord* block_start(const void* p) const PRODUCT_RETURN0;

  // accessors
  CMSMarkStack* verification_mark_stack() { return &_markStack; }
  CMSBitMap*    verification_mark_bm()    { return &_verification_mark_bm; }

  // Get the bit map with a perm gen "deadness" information.
  CMSBitMap* perm_gen_verify_bit_map()       { return &_perm_gen_verify_bit_map; }

  // Initialization errors
  bool completed_initialization() { return _completed_initialization; }
};

class CMSExpansionCause : public AllStatic  {
 public:
  enum Cause {
    _no_expansion,
    _satisfy_free_ratio,
    _satisfy_promotion,
    _satisfy_allocation,
    _allocate_par_lab,
    _allocate_par_spooling_space,
    _adaptive_size_policy
  };
  // Return a string describing the cause of the expansion.
  static const char* to_string(CMSExpansionCause::Cause cause);
};

class ConcurrentMarkSweepGeneration: public CardGeneration {
  friend class VMStructs;
  friend class ConcurrentMarkSweepThread;
  friend class ConcurrentMarkSweep;
  friend class CMSCollector;
 protected:
  static CMSCollector*       _collector; // the collector that collects us
  CompactibleFreeListSpace*  _cmsSpace;  // underlying space (only one for now)

  // Performance Counters
  GenerationCounters*      _gen_counters;
  GSpaceCounters*          _space_counters;

  // Words directly allocated, used by CMSStats.
  size_t _direct_allocated_words;

  // Non-product stat counters
  NOT_PRODUCT(
    size_t _numObjectsPromoted;
    size_t _numWordsPromoted;
    size_t _numObjectsAllocated;
    size_t _numWordsAllocated;
  )

  // Used for sizing decisions
  bool _incremental_collection_failed;
  bool incremental_collection_failed() {
    return _incremental_collection_failed;
  }
  void set_incremental_collection_failed() {
    _incremental_collection_failed = true;
  }
  void clear_incremental_collection_failed() {
    _incremental_collection_failed = false;
  }

  // accessors
  void set_expansion_cause(CMSExpansionCause::Cause v) { _expansion_cause = v;}
  CMSExpansionCause::Cause expansion_cause() const { return _expansion_cause; }

 private:
  // For parallel young-gen GC support.
  CMSParGCThreadState** _par_gc_thread_states;

  // Reason generation was expanded
  CMSExpansionCause::Cause _expansion_cause;

  // In support of MinChunkSize being larger than min object size
  const double _dilatation_factor;

  enum CollectionTypes {
    Concurrent_collection_type          = 0,
    MS_foreground_collection_type       = 1,
    MSC_foreground_collection_type      = 2,
    Unknown_collection_type             = 3
  };

  CollectionTypes _debug_collection_type;

  // Fraction of current occupancy at which to start a CMS collection which
  // will collect this generation (at least).
  double _initiating_occupancy;

 protected:
  // Shrink generation by specified size (returns false if unable to shrink)
  virtual void shrink_by(size_t bytes);

  // Update statistics for GC
  virtual void update_gc_stats(int level, bool full);

  // Maximum available space in the generation (including uncommitted)
  // space.
  size_t max_available() const;

  // getter and initializer for _initiating_occupancy field.
  double initiating_occupancy() const { return _initiating_occupancy; }
  void   init_initiating_occupancy(intx io, intx tr);

 public:
  ConcurrentMarkSweepGeneration(ReservedSpace rs, size_t initial_byte_size,
                                int level, CardTableRS* ct,
                                bool use_adaptive_freelists,
                                FreeBlockDictionary::DictionaryChoice);

  // Accessors
  CMSCollector* collector() const { return _collector; }
  static void set_collector(CMSCollector* collector) {
    assert(_collector == NULL, "already set");
    _collector = collector;
  }
  CompactibleFreeListSpace*  cmsSpace() const { return _cmsSpace;  }

  Mutex* freelistLock() const;

  virtual Generation::Name kind() { return Generation::ConcurrentMarkSweep; }

  // Adaptive size policy
  CMSAdaptiveSizePolicy* size_policy();

  bool refs_discovery_is_atomic() const { return false; }
  bool refs_discovery_is_mt()     const {
    // Note: CMS does MT-discovery during the parallel-remark
    // phases. Use ReferenceProcessorMTMutator to make refs
    // discovery MT-safe during such phases or other parallel
    // discovery phases in the future. This may all go away
    // if/when we decide that refs discovery is sufficiently
    // rare that the cost of the CAS's involved is in the
    // noise. That's a measurement that should be done, and
    // the code simplified if that turns out to be the case.
    return ConcGCThreads > 1;
  }

  // Override
  virtual void ref_processor_init();

  // Grow generation by specified size (returns false if unable to grow)
  bool grow_by(size_t bytes);
  // Grow generation to reserved size.
  bool grow_to_reserved();

  void clear_expansion_cause() { _expansion_cause = CMSExpansionCause::_no_expansion; }

  // Space enquiries
  size_t capacity() const;
  size_t used() const;
  size_t free() const;
  double occupancy() const { return ((double)used())/((double)capacity()); }
  size_t contiguous_available() const;
  size_t unsafe_max_alloc_nogc() const;

  // over-rides
  MemRegion used_region() const;
  MemRegion used_region_at_save_marks() const;

  // Does a "full" (forced) collection invoked on this generation collect
  // all younger generations as well? Note that the second conjunct is a
  // hack to allow the collection of the younger gen first if the flag is
  // set. This is better than using th policy's should_collect_gen0_first()
  // since that causes us to do an extra unnecessary pair of restart-&-stop-world.
  virtual bool full_collects_younger_generations() const {
    return UseCMSCompactAtFullCollection && !CollectGen0First;
  }

  void space_iterate(SpaceClosure* blk, bool usedOnly = false);

  // Support for compaction
  CompactibleSpace* first_compaction_space() const;
  // Adjust quantites in the generation affected by
  // the compaction.
  void reset_after_compaction();

  // Allocation support
  HeapWord* allocate(size_t size, bool tlab);
  HeapWord* have_lock_and_allocate(size_t size, bool tlab);
  oop       promote(oop obj, size_t obj_size);
  HeapWord* par_allocate(size_t size, bool tlab) {
    return allocate(size, tlab);
  }

  // Incremental mode triggering.
  HeapWord* allocation_limit_reached(Space* space, HeapWord* top,
                                     size_t word_size);

  // Used by CMSStats to track direct allocation.  The value is sampled and
  // reset after each young gen collection.
  size_t direct_allocated_words() const { return _direct_allocated_words; }
  void reset_direct_allocated_words()   { _direct_allocated_words = 0; }

  // Overrides for parallel promotion.
  virtual oop par_promote(int thread_num,
                          oop obj, markOop m, size_t word_sz);
  // This one should not be called for CMS.
  virtual void par_promote_alloc_undo(int thread_num,
                                      HeapWord* obj, size_t word_sz);
  virtual void par_promote_alloc_done(int thread_num);
  virtual void par_oop_since_save_marks_iterate_done(int thread_num);

  virtual bool promotion_attempt_is_safe(size_t promotion_in_bytes) const;

  // Inform this (non-young) generation that a promotion failure was
  // encountered during a collection of a younger generation that
  // promotes into this generation.
  virtual void promotion_failure_occurred();

  bool should_collect(bool full, size_t size, bool tlab);
  virtual bool should_concurrent_collect() const;
  virtual bool is_too_full() const;
  void collect(bool   full,
               bool   clear_all_soft_refs,
               size_t size,
               bool   tlab);

  HeapWord* expand_and_allocate(size_t word_size,
                                bool tlab,
                                bool parallel = false);

  // GC prologue and epilogue
  void gc_prologue(bool full);
  void gc_prologue_work(bool full, bool registerClosure,
                        ModUnionClosure* modUnionClosure);
  void gc_epilogue(bool full);
  void gc_epilogue_work(bool full);

  // Time since last GC of this generation
  jlong time_of_last_gc(jlong now) {
    return collector()->time_of_last_gc(now);
  }
  void update_time_of_last_gc(jlong now) {
    collector()-> update_time_of_last_gc(now);
  }

  // Allocation failure
  void expand(size_t bytes, size_t expand_bytes,
    CMSExpansionCause::Cause cause);
  virtual bool expand(size_t bytes, size_t expand_bytes);
  void shrink(size_t bytes);
  HeapWord* expand_and_par_lab_allocate(CMSParGCThreadState* ps, size_t word_sz);
  bool expand_and_ensure_spooling_space(PromotionInfo* promo);

  // Iteration support and related enquiries
  void save_marks();
  bool no_allocs_since_save_marks();
  void object_iterate_since_last_GC(ObjectClosure* cl);
  void younger_refs_iterate(OopsInGenClosure* cl);

  // Iteration support specific to CMS generations
  void save_sweep_limit();

  // More iteration support
  virtual void oop_iterate(MemRegion mr, OopClosure* cl);
  virtual void oop_iterate(OopClosure* cl);
  virtual void safe_object_iterate(ObjectClosure* cl);
  virtual void object_iterate(ObjectClosure* cl);

  // Need to declare the full complement of closures, whether we'll
  // override them or not, or get message from the compiler:
  //   oop_since_save_marks_iterate_nv hides virtual function...
  #define CMS_SINCE_SAVE_MARKS_DECL(OopClosureType, nv_suffix) \
    void oop_since_save_marks_iterate##nv_suffix(OopClosureType* cl);
  ALL_SINCE_SAVE_MARKS_CLOSURES(CMS_SINCE_SAVE_MARKS_DECL)

  // Smart allocation  XXX -- move to CFLSpace?
  void setNearLargestChunk();
  bool isNearLargestChunk(HeapWord* addr);

  // Get the chunk at the end of the space.  Delagates to
  // the space.
  FreeChunk* find_chunk_at_end();

  // Overriding of unused functionality (sharing not yet supported with CMS)
  void pre_adjust_pointers();
  void post_compact();

  // Debugging
  void prepare_for_verify();
  void verify(bool allow_dirty);
  void print_statistics()               PRODUCT_RETURN;

  // Performance Counters support
  virtual void update_counters();
  virtual void update_counters(size_t used);
  void initialize_performance_counters();
  CollectorCounters* counters()  { return collector()->counters(); }

  // Support for parallel remark of survivor space
  void* get_data_recorder(int thr_num) {
    //Delegate to collector
    return collector()->get_data_recorder(thr_num);
  }

  // Printing
  const char* name() const;
  virtual const char* short_name() const { return "CMS"; }
  void        print() const;
  void printOccupancy(const char* s);
  bool must_be_youngest() const { return false; }
  bool must_be_oldest()   const { return true; }

  void compute_new_size();

  CollectionTypes debug_collection_type() { return _debug_collection_type; }
  void rotate_debug_collection_type();
};

class ASConcurrentMarkSweepGeneration : public ConcurrentMarkSweepGeneration {

  // Return the size policy from the heap's collector
  // policy casted to CMSAdaptiveSizePolicy*.
  CMSAdaptiveSizePolicy* cms_size_policy() const;

  // Resize the generation based on the adaptive size
  // policy.
  void resize(size_t cur_promo, size_t desired_promo);

  // Return the GC counters from the collector policy
  CMSGCAdaptivePolicyCounters* gc_adaptive_policy_counters();

  virtual void shrink_by(size_t bytes);

 public:
  virtual void compute_new_size();
  ASConcurrentMarkSweepGeneration(ReservedSpace rs, size_t initial_byte_size,
                                  int level, CardTableRS* ct,
                                  bool use_adaptive_freelists,
                                  FreeBlockDictionary::DictionaryChoice
                                    dictionaryChoice) :
    ConcurrentMarkSweepGeneration(rs, initial_byte_size, level, ct,
      use_adaptive_freelists, dictionaryChoice) {}

  virtual const char* short_name() const { return "ASCMS"; }
  virtual Generation::Name kind() { return Generation::ASConcurrentMarkSweep; }

  virtual void update_counters();
  virtual void update_counters(size_t used);
};

//
// Closures of various sorts used by CMS to accomplish its work
//

// This closure is used to check that a certain set of oops is empty.
class FalseClosure: public OopClosure {
 public:
  void do_oop(oop* p)       { guarantee(false, "Should be an empty set"); }
  void do_oop(narrowOop* p) { guarantee(false, "Should be an empty set"); }
};

// This closure is used to do concurrent marking from the roots
// following the first checkpoint.
class MarkFromRootsClosure: public BitMapClosure {
  CMSCollector*  _collector;
  MemRegion      _span;
  CMSBitMap*     _bitMap;
  CMSBitMap*     _mut;
  CMSMarkStack*  _markStack;
  CMSMarkStack*  _revisitStack;
  bool           _yield;
  int            _skipBits;
  HeapWord*      _finger;
  HeapWord*      _threshold;
  DEBUG_ONLY(bool _verifying;)

 public:
  MarkFromRootsClosure(CMSCollector* collector, MemRegion span,
                       CMSBitMap* bitMap,
                       CMSMarkStack*  markStack,
                       CMSMarkStack*  revisitStack,
                       bool should_yield, bool verifying = false);
  bool do_bit(size_t offset);
  void reset(HeapWord* addr);
  inline void do_yield_check();

 private:
  void scanOopsInOop(HeapWord* ptr);
  void do_yield_work();
};

class Par_MarkFromGreyRootsClosure: public BitMapClosure {
	CMSCollector* _collector;
	CMSBitMap* 	  _bit_map;
	CMSBitMap* 	  _grey_bit_map;
    int 		  _skip_bits;
    ChunkList* _chunkList;
    MemRegion _whole_span;
    CMSMarkStack* _revisit_stack;

public:
    Par_MarkFromGreyRootsClosure(CMSCollector* collector, CMSBitMap* bit_map,
    		CMSBitMap* grey_bit_map, ChunkList *chunkList,
    		MemRegion span, CMSMarkStack* revisit_stack);
    bool do_bit(size_t offset);
    CMSBitMap* getGreyBitMap(){
    	return _grey_bit_map;
    }
    CMSBitMap* getBitMap(){
    	return _bit_map;
    }
    void scan_oops_in_oop(HeapWord* ptr);
};

class ClearDirtyCardClosure: public BitMapClosure {
	CMSCollector* _collector;
	CMSBitMap* _modUnionTableBitMap;

public:
	ClearDirtyCardClosure(CMSCollector* cmsCollector);
	bool do_bit(size_t offset);
};

// This closure is used to do concurrent multi-threaded
// marking from the roots following the first checkpoint.
// XXX This should really be a subclass of The serial version
// above, but i have not had the time to refactor things cleanly.
// That willbe done for Dolphin.
class Par_MarkFromRootsClosure: public BitMapClosure {
  CMSCollector*  _collector;
  MemRegion      _whole_span;
  MemRegion      _span;
  CMSBitMap*     _bit_map;
  CMSBitMap*     _mut;
  OopTaskQueue*  _work_queue;
  CMSMarkStack*  _overflow_stack;
  CMSMarkStack*  _revisit_stack;
  bool           _yield;
  int            _skip_bits;
  HeapWord*      _finger;
  HeapWord*      _threshold;
  CMSConcMarkingTask* _task;
 public:
  Par_MarkFromRootsClosure(CMSConcMarkingTask* task, CMSCollector* collector,
                       MemRegion span,
                       CMSBitMap* bit_map,
                       OopTaskQueue* work_queue,
                       CMSMarkStack*  overflow_stack,
                       CMSMarkStack*  revisit_stack,
                       bool should_yield);
  bool do_bit(size_t offset);
  inline void do_yield_check();

 private:
  void scan_oops_in_oop(HeapWord* ptr);
  void do_yield_work();
  bool get_work_from_overflow_stack();
};



// The following closures are used to do certain kinds of verification of
// CMS marking.
class PushAndMarkVerifyClosure: public OopClosure {
  CMSCollector*    _collector;
  MemRegion        _span;
  CMSBitMap*       _verification_bm;
  CMSBitMap*       _cms_bm;
  CMSMarkStack*    _mark_stack;
 protected:
  void do_oop(oop p);
  template <class T> inline void do_oop_work(T *p) {
    oop obj = oopDesc::load_decode_heap_oop_not_null(p);
    do_oop(obj);
  }
 public:
  PushAndMarkVerifyClosure(CMSCollector* cms_collector,
                           MemRegion span,
                           CMSBitMap* verification_bm,
                           CMSBitMap* cms_bm,
                           CMSMarkStack*  mark_stack);
  void do_oop(oop* p);
  void do_oop(narrowOop* p);
  // Deal with a stack overflow condition
  void handle_stack_overflow(HeapWord* lost);
};

class MarkFromRootsVerifyClosure: public BitMapClosure {
  CMSCollector*  _collector;
  MemRegion      _span;
  CMSBitMap*     _verification_bm;
  CMSBitMap*     _cms_bm;
  CMSMarkStack*  _mark_stack;
  HeapWord*      _finger;
  PushAndMarkVerifyClosure _pam_verify_closure;
 public:
  MarkFromRootsVerifyClosure(CMSCollector* collector, MemRegion span,
                             CMSBitMap* verification_bm,
                             CMSBitMap* cms_bm,
                             CMSMarkStack*  mark_stack);
  bool do_bit(size_t offset);
  void reset(HeapWord* addr);
};


// This closure is used to check that a certain set of bits is
// "empty" (i.e. the bit vector doesn't have any 1-bits).
class FalseBitMapClosure: public BitMapClosure {
 public:
  bool do_bit(size_t offset) {
    guarantee(false, "Should not have a 1 bit");
    return true;
  }
};

// This closure is used during the second checkpointing phase
// to rescan the marked objects on the dirty cards in the mod
// union table and the card table proper. It's invoked via
// MarkFromDirtyCardsClosure below. It uses either
// [Par_]MarkRefsIntoAndScanClosure (Par_ in the parallel case)
// declared in genOopClosures.hpp to accomplish some of its work.
// In the parallel case the bitMap is shared, so access to
// it needs to be suitably synchronized for updates by embedded
// closures that update it; however, this closure itself only
// reads the bit_map and because it is idempotent, is immune to
// reading stale values.
class ScanMarkedObjectsAgainClosure: public UpwardsObjectClosure {
  #ifdef ASSERT
    CMSCollector*          _collector;
    MemRegion              _span;
    union {
      CMSMarkStack*        _mark_stack;
      OopTaskQueue*        _work_queue;
    };
  #endif // ASSERT
  bool                       _parallel;
  CMSBitMap*                 _bit_map;
  union {
    MarkRefsIntoAndScanClosure*     _scan_closure;
    Par_MarkRefsIntoAndScanClosure* _par_scan_closure;
  };

 public:
  ScanMarkedObjectsAgainClosure(CMSCollector* collector,
                                MemRegion span,
                                ReferenceProcessor* rp,
                                CMSBitMap* bit_map,
                                CMSMarkStack*  mark_stack,
                                CMSMarkStack*  revisit_stack,
                                MarkRefsIntoAndScanClosure* cl):
    #ifdef ASSERT
      _collector(collector),
      _span(span),
      _mark_stack(mark_stack),
    #endif // ASSERT
    _parallel(false),
    _bit_map(bit_map),
    _scan_closure(cl) { }

  ScanMarkedObjectsAgainClosure(CMSCollector* collector,
                                MemRegion span,
                                ReferenceProcessor* rp,
                                CMSBitMap* bit_map,
                                OopTaskQueue* work_queue,
                                CMSMarkStack* revisit_stack,
                                Par_MarkRefsIntoAndScanClosure* cl):
    #ifdef ASSERT
      _collector(collector),
      _span(span),
      _work_queue(work_queue),
    #endif // ASSERT
    _parallel(true),
    _bit_map(bit_map),
    _par_scan_closure(cl) { }

  void do_object(oop obj) {
    guarantee(false, "Call do_object_b(oop, MemRegion) instead");
  }
  bool do_object_b(oop obj) {
    guarantee(false, "Call do_object_b(oop, MemRegion) form instead");
    return false;
  }
  bool do_object_bm(oop p, MemRegion mr);
};

// This closure is used during the second checkpointing phase
// to rescan the marked objects on the dirty cards in the mod
// union table and the card table proper. It invokes
// ScanMarkedObjectsAgainClosure above to accomplish much of its work.
// In the parallel case, the bit map is shared and requires
// synchronized access.
class MarkFromDirtyCardsClosure: public MemRegionClosure {
  CompactibleFreeListSpace*      _space;
  ScanMarkedObjectsAgainClosure  _scan_cl;
  size_t                         _num_dirty_cards;

 public:
  MarkFromDirtyCardsClosure(CMSCollector* collector,
                            MemRegion span,
                            CompactibleFreeListSpace* space,
                            CMSBitMap* bit_map,
                            CMSMarkStack* mark_stack,
                            CMSMarkStack* revisit_stack,
                            MarkRefsIntoAndScanClosure* cl):
    _space(space),
    _num_dirty_cards(0),
    _scan_cl(collector, span, collector->ref_processor(), bit_map,
                 mark_stack, revisit_stack, cl) { }

  MarkFromDirtyCardsClosure(CMSCollector* collector,
                            MemRegion span,
                            CompactibleFreeListSpace* space,
                            CMSBitMap* bit_map,
                            OopTaskQueue* work_queue,
                            CMSMarkStack* revisit_stack,
                            Par_MarkRefsIntoAndScanClosure* cl):
    _space(space),
    _num_dirty_cards(0),
    _scan_cl(collector, span, collector->ref_processor(), bit_map,
             work_queue, revisit_stack, cl) { }

  void do_MemRegion(MemRegion mr);
  void set_space(CompactibleFreeListSpace* space) { _space = space; }
  size_t num_dirty_cards() { return _num_dirty_cards; }
};

// This closure is used in the non-product build to check
// that there are no MemRegions with a certain property.
class FalseMemRegionClosure: public MemRegionClosure {
  void do_MemRegion(MemRegion mr) {
    guarantee(!mr.is_empty(), "Shouldn't be empty");
    guarantee(false, "Should never be here");
  }
};

// This closure is used during the precleaning phase
// to "carefully" rescan marked objects on dirty cards.
// It uses MarkRefsIntoAndScanClosure declared in genOopClosures.hpp
// to accomplish some of its work.
class ScanMarkedObjectsAgainCarefullyClosure: public ObjectClosureCareful {
  CMSCollector*                  _collector;
  MemRegion                      _span;
  bool                           _yield;
  Mutex*                         _freelistLock;
  CMSBitMap*                     _bitMap;
  CMSMarkStack*                  _markStack;
  MarkRefsIntoAndScanClosure*    _scanningClosure;

 public:
  ScanMarkedObjectsAgainCarefullyClosure(CMSCollector* collector,
                                         MemRegion     span,
                                         CMSBitMap* bitMap,
                                         CMSMarkStack*  markStack,
                                         CMSMarkStack*  revisitStack,
                                         MarkRefsIntoAndScanClosure* cl,
                                         bool should_yield):
    _collector(collector),
    _span(span),
    _yield(should_yield),
    _bitMap(bitMap),
    _markStack(markStack),
    _scanningClosure(cl) {
  }

  void do_object(oop p) {
    guarantee(false, "call do_object_careful instead");
  }

  size_t      do_object_careful(oop p) {
    guarantee(false, "Unexpected caller");
    return 0;
  }

  size_t      do_object_careful_m(oop p, MemRegion mr);

  void setFreelistLock(Mutex* m) {
    _freelistLock = m;
    _scanningClosure->set_freelistLock(m);
  }

 private:
  inline bool do_yield_check();

  void do_yield_work();
};

class SurvivorSpacePrecleanClosure: public ObjectClosureCareful {
  CMSCollector*                  _collector;
  MemRegion                      _span;
  bool                           _yield;
  CMSBitMap*                     _bit_map;
  CMSMarkStack*                  _mark_stack;
  PushAndMarkClosure*            _scanning_closure;
  unsigned int                   _before_count;

 public:
  SurvivorSpacePrecleanClosure(CMSCollector* collector,
                               MemRegion     span,
                               CMSBitMap*    bit_map,
                               CMSMarkStack* mark_stack,
                               PushAndMarkClosure* cl,
                               unsigned int  before_count,
                               bool          should_yield):
    _collector(collector),
    _span(span),
    _yield(should_yield),
    _bit_map(bit_map),
    _mark_stack(mark_stack),
    _scanning_closure(cl),
    _before_count(before_count)
  { }

  void do_object(oop p) {
    guarantee(false, "call do_object_careful instead");
  }

  size_t      do_object_careful(oop p);

  size_t      do_object_careful_m(oop p, MemRegion mr) {
    guarantee(false, "Unexpected caller");
    return 0;
  }

 private:
  inline void do_yield_check();
  void do_yield_work();
};

// This closure is used to accomplish the sweeping work
// after the second checkpoint but before the concurrent reset
// phase.
//
// Terminology
//   left hand chunk (LHC) - block of one or more chunks currently being
//     coalesced.  The LHC is available for coalescing with a new chunk.
//   right hand chunk (RHC) - block that is currently being swept that is
//     free or garbage that can be coalesced with the LHC.
// _inFreeRange is true if there is currently a LHC
// _lastFreeRangeCoalesced is true if the LHC consists of more than one chunk.
// _freeRangeInFreeLists is true if the LHC is in the free lists.
// _freeFinger is the address of the current LHC
class SweepClosure: public BlkClosureCareful {
  CMSCollector*                  _collector;  // collector doing the work
  ConcurrentMarkSweepGeneration* _g;    // Generation being swept
  CompactibleFreeListSpace*      _sp;   // Space being swept
  HeapWord*                      _limit;// the address at or above which the sweep should stop
                                        // because we do not expect newly garbage blocks
                                        // eligible for sweeping past that address.
  Mutex*                         _freelistLock; // Free list lock (in space)
  CMSBitMap*                     _bitMap;       // Marking bit map (in
                                                // generation)
  bool                           _inFreeRange;  // Indicates if we are in the
                                                // midst of a free run
  bool                           _freeRangeInFreeLists;
                                        // Often, we have just found
                                        // a free chunk and started
                                        // a new free range; we do not
                                        // eagerly remove this chunk from
                                        // the free lists unless there is
                                        // a possibility of coalescing.
                                        // When true, this flag indicates
                                        // that the _freeFinger below
                                        // points to a potentially free chunk
                                        // that may still be in the free lists
  bool                           _lastFreeRangeCoalesced;
                                        // free range contains chunks
                                        // coalesced
  bool                           _yield;
                                        // Whether sweeping should be
                                        // done with yields. For instance
                                        // when done by the foreground
                                        // collector we shouldn't yield.
  HeapWord*                      _freeFinger;   // When _inFreeRange is set, the
                                                // pointer to the "left hand
                                                // chunk"
  size_t                         _freeRangeSize;
                                        // When _inFreeRange is set, this
                                        // indicates the accumulated size
                                        // of the "left hand chunk"
  NOT_PRODUCT(
    size_t                       _numObjectsFreed;
    size_t                       _numWordsFreed;
    size_t                       _numObjectsLive;
    size_t                       _numWordsLive;
    size_t                       _numObjectsAlreadyFree;
    size_t                       _numWordsAlreadyFree;
    FreeChunk*                   _last_fc;
  )
 private:
  // Code that is common to a free chunk or garbage when
  // encountered during sweeping.
  void do_post_free_or_garbage_chunk(FreeChunk *fc, size_t chunkSize);
  // Process a free chunk during sweeping.
  void do_already_free_chunk(FreeChunk *fc);
  // Work method called when processing an already free or a
  // freshly garbage chunk to do a lookahead and possibly a
  // premptive flush if crossing over _limit.
  void lookahead_and_flush(FreeChunk* fc, size_t chunkSize);
  // Process a garbage chunk during sweeping.
  size_t do_garbage_chunk(FreeChunk *fc);
  // Process a live chunk during sweeping.
  size_t do_live_chunk(FreeChunk* fc);

  // Accessors.
  HeapWord* freeFinger() const          { return _freeFinger; }
  void set_freeFinger(HeapWord* v)      { _freeFinger = v; }
  bool inFreeRange()    const           { return _inFreeRange; }
  void set_inFreeRange(bool v)          { _inFreeRange = v; }
  bool lastFreeRangeCoalesced() const    { return _lastFreeRangeCoalesced; }
  void set_lastFreeRangeCoalesced(bool v) { _lastFreeRangeCoalesced = v; }
  bool freeRangeInFreeLists() const     { return _freeRangeInFreeLists; }
  void set_freeRangeInFreeLists(bool v) { _freeRangeInFreeLists = v; }

  // Initialize a free range.
  void initialize_free_range(HeapWord* freeFinger, bool freeRangeInFreeLists);
  // Return this chunk to the free lists.
  void flush_cur_free_chunk(HeapWord* chunk, size_t size);

  // Check if we should yield and do so when necessary.
  inline void do_yield_check(HeapWord* addr);

  // Yield
  void do_yield_work(HeapWord* addr);

  // Debugging/Printing
  void print_free_block_coalesced(FreeChunk* fc) const;

 public:
  SweepClosure(CMSCollector* collector, ConcurrentMarkSweepGeneration* g,
               CMSBitMap* bitMap, bool should_yield);
  ~SweepClosure() PRODUCT_RETURN;

  size_t       do_blk_careful(HeapWord* addr);
  void         print() const { print_on(tty); }
  void         print_on(outputStream *st) const;
};

// Closures related to weak references processing

// During CMS' weak reference processing, this is a
// work-routine/closure used to complete transitive
// marking of objects as live after a certain point
// in which an initial set has been completely accumulated.
// This closure is currently used both during the final
// remark stop-world phase, as well as during the concurrent
// precleaning of the discovered reference lists.
class CMSDrainMarkingStackClosure: public VoidClosure {
  CMSCollector*        _collector;
  MemRegion            _span;
  CMSMarkStack*        _mark_stack;
  CMSBitMap*           _bit_map;
  CMSKeepAliveClosure* _keep_alive;
  bool                 _concurrent_precleaning;
 public:
  CMSDrainMarkingStackClosure(CMSCollector* collector, MemRegion span,
                      CMSBitMap* bit_map, CMSMarkStack* mark_stack,
                      CMSKeepAliveClosure* keep_alive,
                      bool cpc):
    _collector(collector),
    _span(span),
    _bit_map(bit_map),
    _mark_stack(mark_stack),
    _keep_alive(keep_alive),
    _concurrent_precleaning(cpc) {
    assert(_concurrent_precleaning == _keep_alive->concurrent_precleaning(),
           "Mismatch");
  }

  void do_void();
};

// A parallel version of CMSDrainMarkingStackClosure above.
class CMSParDrainMarkingStackClosure: public VoidClosure {
  CMSCollector*           _collector;
  MemRegion               _span;
  OopTaskQueue*           _work_queue;
  CMSBitMap*              _bit_map;
  CMSInnerParMarkAndPushClosure _mark_and_push;

 public:
  CMSParDrainMarkingStackClosure(CMSCollector* collector,
                                 MemRegion span, CMSBitMap* bit_map,
                                 CMSMarkStack* revisit_stack,
                                 OopTaskQueue* work_queue):
    _collector(collector),
    _span(span),
    _bit_map(bit_map),
    _work_queue(work_queue),
    _mark_and_push(collector, span, bit_map, revisit_stack, work_queue) { }

 public:
  void trim_queue(uint max);
  void do_void();
};

// Allow yielding or short-circuiting of reference list
// prelceaning work.
class CMSPrecleanRefsYieldClosure: public YieldClosure {
  CMSCollector* _collector;
  void do_yield_work();
 public:
  CMSPrecleanRefsYieldClosure(CMSCollector* collector):
    _collector(collector) {}
  virtual bool should_return();
};


// Convenience class that locks free list locks for given CMS collector
class FreelistLocker: public StackObj {
 private:
  CMSCollector* _collector;
 public:
  FreelistLocker(CMSCollector* collector):
    _collector(collector) {
    _collector->getFreelistLocks();
  }

  ~FreelistLocker() {
    _collector->releaseFreelistLocks();
  }
};

// Mark all dead objects in a given space.
class MarkDeadObjectsClosure: public BlkClosure {
  const CMSCollector*             _collector;
  const CompactibleFreeListSpace* _sp;
  CMSBitMap*                      _live_bit_map;
  CMSBitMap*                      _dead_bit_map;
public:
  MarkDeadObjectsClosure(const CMSCollector* collector,
                         const CompactibleFreeListSpace* sp,
                         CMSBitMap *live_bit_map,
                         CMSBitMap *dead_bit_map) :
    _collector(collector),
    _sp(sp),
    _live_bit_map(live_bit_map),
    _dead_bit_map(dead_bit_map) {}
  size_t do_blk(HeapWord* addr);
};

class TraceCMSMemoryManagerStats : public TraceMemoryManagerStats {

 public:
  TraceCMSMemoryManagerStats(CMSCollector::CollectorState phase, GCCause::Cause cause);
  TraceCMSMemoryManagerStats(GCCause::Cause cause);
};


#endif // SHARE_VM_GC_IMPLEMENTATION_CONCURRENTMARKSWEEP_CONCURRENTMARKSWEEPGENERATION_HPP
