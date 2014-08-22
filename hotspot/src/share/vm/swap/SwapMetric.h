/*
 * SwapMetric.h
 *
 *  Created on: Jun 12, 2014
 *      Author: ravitandon
 */

#ifndef SWAPMETRIC_H_
#define SWAPMETRIC_H_

#include "swap_global.h"
#include "pthread.h"

class SwapMetric {
private:
	static long int _swapOuts;
	static long int _swapIns;
	static timespec _swapOutTime;
	static timespec _swapInTime;
	static long int _swapOutBytes;
	static long int _swapInBytes;
	static long int _segFaults;
	static long int _swapInPages;
	static long int _swapOutPages;
	static long int _swapInsCompiler;
	static long int _swapInsInterpreter;
	static long int _faultsDuringCollection;
	static long int _faultsJavaThread;
	static long int _faultsNamedThread;
	static long int _faults_CGC_Thread;
	static long int _faults_VM_Thread;
	static long int _faults_Wor_Thread;
	static long int _faultsDuringMarking;
	static pthread_mutex_t _fNT_mutex;
	static pthread_mutex_t _fJT_mutex;
	static pthread_mutex_t _fCGC_mutex;
	static pthread_mutex_t _fVM_mutex;
	static pthread_mutex_t _fWor_mutex;
	static pthread_mutex_t _compilerIncrement;
	static pthread_mutex_t _interpreterIncrement;
	static pthread_mutex_t _segFaultIncrement;
	static pthread_mutex_t _accessIncrement;
	static long int _accessIntercepts;
	static long int _cardTableIntercepts;
	static long int _evacuateFollowersIntercepts;
	static bool _metricPrinted;
	static long int _promotionIntercepts;
	static long int _markFromRoots;
	static long int _sweepClosure;
	static long int _chunkOfBlocks;
	static long int _klassIntercepts;
	static long int _klassPartIntercepts;
	static long int _oopIterate;
	static long int _blockSize;
	static long int _spoolHeader;

public:
	static void incrementFaults_CGC_Thread();
	static void incrementFaults_VM_Thread();
	static void incrementFaults_Worker_Thread();
	static void incrementFaultsNamedThread();
	static void incrementFaultsJavaThread();
	static long int getFaultsDuringMarking();
	static void incrementFaultsDuringMarking();
	static long int getFaultsDuringCollection();
	static void incrementFaultsDuringCollection();
	static long int getSwapOutPages();
	static long int getSwapInPages();
	static void incrementSegFaults();
	static long int getSegFaultCount();
	static void incrementSwapOuts();
	static void incrementSwapOutsPages(int pages);
	static long int getSwapOuts();
	static void incrementSwapIns();
	static void incrementSwapInsPages(int pages);
	static long int getSwapIns();
	static timespec getTotalSwapInTime();
	static void incrementSwapInTime(timespec start, timespec end);
	static timespec getTotalSwapOutTime();
	static void incrementSwapOutTime(timespec start, timespec end);
	static timespec diff(timespec start, timespec end);
	static void print_on();
	static void incrementSwapOutBytes(long bytes);
	static void incrementSwapInBytes(int bytes);
	static void incrementSwapInCompiler();
	static void incrementSwapInInterpreter();
	static long int getSwapInsCompiler();
	static long int getSwapInsInterpreter();
	static long int getAccessIntercepts();
	static void incrementAccessIntercepts();
	static void incrementCardTableIntercepts();
	static void incrementEvacuateFollowers();
	static void incrementAccessInterceptCount(int type);
};

#endif /* SWAPMETRIC_H_ */
