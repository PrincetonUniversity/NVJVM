/*
 * SwapMetric.cpp
 *
 *  Created on: Jun 12, 2014
 *      Author: ravitandon
 */

#include "SwapMetric.h"

long int SwapMetric::_swapOuts = 0;
long int SwapMetric::_swapIns = 0;
timespec SwapMetric::_swapInTime;
timespec SwapMetric::_swapOutTime;
long int SwapMetric::_swapOutBytes = 0;
long int SwapMetric::_swapInBytes = 0;


void SwapMetric::incrementSwapOuts(){
		_swapOuts++;
}

void SwapMetric::incrementSwapOutsV(int v){
	_swapOuts += v;
}

long int SwapMetric::getSwapOuts(){
	return _swapOuts;
}

void SwapMetric::incrementSwapIns(){
	_swapIns++;
}

void SwapMetric::incrementSwapInsV(int v){
	_swapIns +=v;
}

long int SwapMetric::getSwapIns(){
	return _swapIns;
}

timespec SwapMetric::getTotalSwapInTime(){
	return _swapInTime;
}

timespec SwapMetric::getTotalSwapOutTime(){
	return _swapOutTime;
}

void SwapMetric::incrementSwapInTime(timespec start, timespec end){
	timespec diffT = diff(start, end);
	_swapInTime.tv_sec += diffT.tv_sec;
	_swapInTime.tv_nsec += diffT.tv_nsec;
}

void SwapMetric::incrementSwapOutTime(timespec start, timespec end){
	timespec diffT = diff(start, end);
	_swapOutTime.tv_sec += diffT.tv_sec;
	_swapOutTime.tv_nsec += diffT.tv_nsec;
}

timespec SwapMetric::diff(timespec start, timespec end){
	timespec temp;
		if ((end.tv_nsec-start.tv_nsec)<0) {
			temp.tv_sec = end.tv_sec-start.tv_sec-1;
			temp.tv_nsec = 1000000000+end.tv_nsec-start.tv_nsec;
		} else {
			temp.tv_sec = end.tv_sec-start.tv_sec;
			temp.tv_nsec = end.tv_nsec-start.tv_nsec;
		}
		return temp;
}

void SwapMetric::print_on(){
	printf("The overall SwapMetrics. The number of swapIns = %ld.\n"
			"The number of swapOuts =%ld.\n"
			"Total time taken for swapIn = %lld.%.9ld.\n"
			"Total swap-out bytes = %ld\n"
			"Total swap-in bytes = %ld.\n",
			_swapIns, _swapOuts, (long long)_swapInTime.tv_sec, _swapInTime.tv_nsec, _swapOutBytes, _swapInBytes);
	fflush(stdout);
}

void SwapMetric::incrementSwapOutBytes(long bytes){
	_swapOutBytes += (long int)bytes;
}

void SwapMetric::incrementSwapInBytes(int bytes){
	_swapInBytes += (long int)bytes;
}





