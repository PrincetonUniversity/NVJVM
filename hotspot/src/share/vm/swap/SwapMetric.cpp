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
long int SwapMetric::_accessIntercepts = 0;
long int SwapMetric::_segFaults = 0;
long int SwapMetric::_swapInPages = 0;
long int SwapMetric::_swapOutPages = 0;
long int SwapMetric::_swapInsCompiler = 0;
long int SwapMetric::_swapInsInterpreter = 0;
long int SwapMetric::_faultsDuringCollection = 0;
pthread_mutex_t SwapMetric::_compilerIncrement;
pthread_mutex_t SwapMetric::_interpreterIncrement;
pthread_mutex_t SwapMetric::_segFaultIncrement;
pthread_mutex_t SwapMetric::_accessIncrement;

#define K 1024

void SwapMetric::incrementAccessIntercepts(){
	pthread_mutex_lock(&_accessIncrement);
	_accessIntercepts++;
	pthread_mutex_unlock(&_accessIncrement);
}

long int SwapMetric::getAccessIntercepts(){
	return _accessIntercepts;
}

void SwapMetric::incrementFaultsDuringCollection(){
	_faultsDuringCollection++;
}

long int SwapMetric::getFaultsDuringCollection(){
	return _faultsDuringCollection;
}

void SwapMetric::incrementSwapInCompiler(){
	pthread_mutex_lock(&_compilerIncrement);
	_swapInsCompiler++;
	pthread_mutex_unlock(&_compilerIncrement);
}

long int SwapMetric::getSwapInsCompiler(){
	return _swapInsCompiler;
}

void SwapMetric::incrementSwapInInterpreter(){
	pthread_mutex_lock(&_interpreterIncrement);
	_swapInsInterpreter++;
	pthread_mutex_unlock(&_interpreterIncrement);
}

long int SwapMetric::getSwapInsInterpreter(){
	return _swapInsInterpreter;
}

long int SwapMetric::getSwapOutPages(){
	return _swapOutPages;
}

long int SwapMetric::getSwapInPages(){
	return _swapInPages;
}

void SwapMetric::incrementSegFaults(){
	pthread_mutex_lock(&_segFaultIncrement);
	if(Universe::isCollecting()){
		incrementFaultsDuringCollection();
	}
		_segFaults++;
	pthread_mutex_unlock(&_segFaultIncrement);
}

long int SwapMetric::getSegFaultCount(){
	return _segFaults;
}

void SwapMetric::incrementSwapOuts(){
		_swapOuts++;
}

void SwapMetric::incrementSwapOutsPages(int v){
	_swapOutPages += v;
}

long int SwapMetric::getSwapOuts(){
	return _swapOuts;
}

void SwapMetric::incrementSwapIns(){
	_swapIns++;
}

void SwapMetric::incrementSwapInsPages(int v){
	_swapInPages +=v;
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
	printf("The overall SwapMetrics. \n"
			"The number of swapIns calls = %ld, %ld pages, %ld MB.\n"
			"The number of swapOuts calls = %ld, %ld pages, %ld MB.\n"
			"Total time taken for swapIn = %lld seconds %.3ld milliseconds.\n"
			"Total segmentation faults = %ld, faults during collection %ld, Access Intercepts = %ld,"
			"Interpreter faults = %ld, Compiler Faults %ld.\n",
			_swapIns, _swapInPages,  _swapInBytes/(K*K),
			_swapOuts, _swapOutPages, _swapOutBytes/(K*K),
			(long long)_swapInTime.tv_sec,
			_swapInTime.tv_nsec/(1000*1000),
			_segFaults, _faultsDuringCollection,_accessIntercepts,
			_swapInsInterpreter, _swapInsCompiler);
	fflush(stdout);
}

void SwapMetric::incrementSwapOutBytes(long bytes){
	_swapOutBytes += (long int)bytes;
}

void SwapMetric::incrementSwapInBytes(int bytes){
	_swapInBytes += (long int)bytes;
}





