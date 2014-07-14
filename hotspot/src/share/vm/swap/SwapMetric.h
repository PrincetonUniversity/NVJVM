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
	static pthread_mutex_t _compilerIncrement;
	static pthread_mutex_t _interpreterIncrement;
	static pthread_mutex_t _segFaultIncrement;
	static long int _accessIntercepts;

public:
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
};

#endif /* SWAPMETRIC_H_ */
