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

void SwapMetric::incrementSwapOuts(){
		_swapOuts++;
}

long int SwapMetric::getSwapOuts(){
	return _swapOuts;
}

void SwapMetric::incrementSwapIns(){
	_swapIns++;
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
	printf("The overall.\n");
	fflush(stdout);
}





