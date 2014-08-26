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
long int SwapMetric::_faultsDuringMarking = 0;
long int SwapMetric::_faultsJavaThread = 0;
long int SwapMetric::_faultsNamedThread = 0;
pthread_mutex_t SwapMetric::_compilerIncrement;
pthread_mutex_t SwapMetric::_interpreterIncrement;
pthread_mutex_t SwapMetric::_segFaultIncrement;
pthread_mutex_t SwapMetric::_accessIncrement;
pthread_mutex_t SwapMetric::_fNT_mutex;
pthread_mutex_t SwapMetric::_fJT_mutex;
pthread_mutex_t SwapMetric::_fCGC_mutex;
pthread_mutex_t SwapMetric::_fVM_mutex;
pthread_mutex_t SwapMetric::_fWor_mutex;
long int SwapMetric::_faults_CGC_Thread = 0;
long int SwapMetric::_faults_VM_Thread = 0;
long int SwapMetric::_faults_Wor_Thread = 0;
bool SwapMetric::_metricPrinted = false;
long int SwapMetric::_intercepts[Number_Intercepts] = {0};

#define K 1024

void SwapMetric::incrementFaults_CGC_Thread(){
//	pthread_mutex_lock(&_fCGC_mutex);
	_faults_CGC_Thread++;
//	pthread_mutex_unlock(&_fCGC_mutex);
}

void SwapMetric::incrementFaults_VM_Thread(){
//	pthread_mutex_lock(&_fVM_mutex);
	_faults_VM_Thread++;
//	pthread_mutex_unlock(&_fVM_mutex);
}

void SwapMetric::incrementFaults_Worker_Thread(){
//	pthread_mutex_lock(&_fWor_mutex);
	_faults_Wor_Thread++;
//	pthread_mutex_unlock(&_fWor_mutex);
}

void SwapMetric::incrementFaultsNamedThread(){
//	pthread_mutex_lock(&_fNT_mutex);
	_faultsNamedThread++;
//	pthread_mutex_unlock(&_fNT_mutex);
}

void SwapMetric::incrementFaultsJavaThread(){
//	pthread_mutex_lock(&_fJT_mutex);
	_faultsJavaThread++;
//	pthread_mutex_unlock(&_fJT_mutex);
}

void SwapMetric::incrementAccessInterceptCount(int type){
	_intercepts[type]++;
}

void SwapMetric::incrementAccessIntercepts(){
//	pthread_mutex_lock(&_accessIncrement);
	_accessIntercepts++;
//	pthread_mutex_unlock(&_accessIncrement);
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
//	pthread_mutex_lock(&_compilerIncrement);
	_swapInsCompiler++;
//	pthread_mutex_unlock(&_compilerIncrement);
}

long int SwapMetric::getSwapInsCompiler(){
	return _swapInsCompiler;
}

void SwapMetric::incrementSwapInInterpreter(){
//	pthread_mutex_lock(&_interpreterIncrement);
	_swapInsInterpreter++;
//	pthread_mutex_unlock(&_interpreterIncrement);
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
//	pthread_mutex_lock(&_segFaultIncrement);
		_segFaults++;
//	pthread_mutex_unlock(&_segFaultIncrement);
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

long int SwapMetric::getTotalIntercepts(){
	int count = 0; long int sum = 0;
	for (; count < Number_Intercepts; count++){
		sum += _intercepts[count];
	}
	return sum;
}

void SwapMetric::print_on(){
	if(_metricPrinted == true || _swapOuts == 0)
		return;
	_metricPrinted = true;
	int count;
	printf("The overall SwapMetrics. \n"
			"The number of swapIns calls = %ld, %ld pages, %ld MB.\n"
			"The number of swapOuts calls = %ld, %ld pages, %ld MB.\n"
			"Total time taken for swapOut = %lld seconds %3ld milliseconds.\n"
			"Total time taken for swapIn = %lld seconds %.3ld milliseconds.\n"
			"Fault Metrics::\n"
			"Total segmentation faults = %ld\n"
			"Total Intercepts = %ld\n",
			_swapIns, _swapInPages,  _swapInBytes/(K*K),
						_swapOuts, _swapOutPages, _swapOutBytes/(K*K),
						(long long)_swapOutTime.tv_sec,
						_swapOutTime.tv_nsec/(1000*1000),
						(long long)_swapInTime.tv_sec,
						_swapInTime.tv_nsec/(1000*1000),
						_segFaults,
						getTotalIntercepts());
    char s[Max_String_Len];
	for(count = 0; count < Number_Intercepts; count++){
		getInterceptType(count, s);
		printf("%s %ld \n", s, _intercepts[count]);
	}

	printf("Intercepts due to the compiler %ld, interpreter %ld.\n", _swapInsCompiler, _swapInsInterpreter);

	printf("Faults Name Thread = %ld\nFaults Java Thread = %ld.\n"
			"Faults VM Thread = %ld, Faults Conc GC Thread = %ld, Faults Worker Thread =%ld.\n ",

			_faultsNamedThread, _faultsJavaThread,
			_faults_VM_Thread, _faults_CGC_Thread,
			_faults_Wor_Thread);
	fflush(stdout);
}

void SwapMetric::incrementSwapOutBytes(long bytes){
	_swapOutBytes += (long int)bytes;
}

void SwapMetric::incrementSwapInBytes(int bytes){
	_swapInBytes += (long int)bytes;
}

void SwapMetric::init(){
	int count;
	for(count = 0; count < Number_Intercepts; count++){
		_intercepts[count] = 0;
	}
}

void SwapMetric::getInterceptType(int type, char* str){
	switch(type){
	    case 0:
	    	strcpy(str, "Evacuate Followers");
		break;

		case 1:
			strcpy(str, "Card Table");
		break;

		case 2:
			strcpy(str, "Object Promotion");
			break;

		case 3:
			strcpy(str, "Mark From Roots");
			break;

		case 4:
			strcpy(str, "Sweep Closure");
			break;

		case 5:
			strcpy(str, "Chunk of blocks");
			break;

		case 6:
			strcpy(str, "Klass Intercept");
			break;

		case 7:
			strcpy(str, "Klass Part Intercept");
			break;

		case 8:
			strcpy(str, "Oop Iterate");
			break;

		case 9:
			strcpy(str, "Block Size");
			break;

		case 10:
			strcpy(str, "Spool");
			break;

		case 11:
			strcpy(str, "Reference Processing");
			break;

		case 12:
			strcpy(str, "Java Thread Prefetches");
			break;

		default:
			printf("incrementAccessInterceptCount() :: default");
			exit(-1);
	}
}




