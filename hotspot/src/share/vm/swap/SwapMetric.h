/*
 * SwapMetric.h
 *
 *  Created on: Jun 12, 2014
 *      Author: ravitandon
 */

#ifndef SWAPMETRIC_H_
#define SWAPMETRIC_H_

#include "swap_global.h"


class SwapMetric {
private:
	static long int _swapOuts;
	static long int _swapIns;
	static timespec _swapOutTime;
	static timespec _swapInTime;

public:
	static void incrementSwapOuts();
	static long int getSwapOuts();
	static void incrementSwapIns();
	static long int getSwapIns();
	static timespec getTotalSwapInTime();
	static void incrementSwapInTime(timespec start, timespec end);
	static timespec getTotalSwapOutTime();
	static void incrementSwapOutTime(timespec start, timespec end);
	static timespec diff(timespec start, timespec end);

};

#endif /* SWAPMETRIC_H_ */