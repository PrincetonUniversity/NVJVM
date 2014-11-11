/*
 * SwapMetrics.hpp
 *
 *  Created on: Sep 19, 2014
 *      Author: ravitandon
 */

#ifndef SWAPMETRICS_HPP_
#define SWAPMETRICS_HPP_
#include <stdio.h>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include <pthread.h>
#include<time.h>
#include <vector>
#include <fstream>

using namespace std;
#define BUF_MAX 1000

class ThreadStruct {
private:
	pid_t _threadId;
	int _threadType;
public:
	ThreadStruct(pid_t tid, int tType){
		_threadId = tid;
		_threadType = tType;
	}
	pid_t getThreadId(){
		return _threadId;
	}
	int getThreadType(){
		return _threadType;
	}
};

class SwapMetrics {
private:
	int _majorFaults;
	int _minorFaults;
    int* _initialFaults;
    int* _finalFaults;
    string _phaseName;
    string _logFilePath;
    int* _currentFaults;
    int _initialSwapOuts;
    int _finalSwapOuts;
    int _processFinalSwapOuts;

public:
    static void universeInit();
	SwapMetrics(const char *phase, int phaseId);
	virtual ~SwapMetrics();
	int getMajorFaultMetrics() { return _majorFaults; }
	int getMinorFaultsMetrics() { return _minorFaults; }
	void getCurrentNumberOfFaults();
	static void printTotalFaults();
	void setPhase(int phaseId);
    enum PhaseIds{
    	unknownPhase = 0,
    	markPhase = 1,
    	sweepPhase = 2,
    	compactPhase = 3
    };
    void threadFunction(int id);
    static void mutatorMonitorThreadFunction(void);
    static int getCurrentNumberOfSwapOuts();

    static int _markPhaseFaults;
	static int _sweepPhaseFaults;
	static int _compactionPhaseFaults;
	static int _processInitialSwapOuts;
	static int _compactionPhaseSwapOuts;
	static int _markPhaseSwapOuts;
	static int _sweepPhaseSwapOuts;

	int _phaseId;

	static int _numberReportsMark;
	static int _numberReportsSweep;
	static int _numberReportsMutator;
	static int _numberReportsCompaction;

	static double _sumDiskUtilizationMark;
	static double _sumDiskUtilizationSweep;
	static double _sumDiskUtilizationMutator;
	static double _sumDiskUtilizationCompaction;

	static double _ioWaitMark;
	static double _ioWaitSweep;
	static double _ioWaitMutator;
	static double _ioWaitCompaction;

	static double _userTimeMutator;
	static double _userTimeSweep;
	static double _userTimeMark;
	static double _userTimeCompaction;

	static double _compactionTime;
	static void compactionTimeIncrement(double v) { _compactionTime += v; }

	static double _markTime;
	static void markTimeIncrement(double v) { _markTime += v; }

	static double _sweepTime;
	static void sweepTimeIncrement(double v) { _sweepTime += v; }

	static void addThreadToList(pid_t threadId, int thr_type){
		_threadList.push_back(new ThreadStruct(threadId, thr_type));
	}

	static std::vector<ThreadStruct *> _threadList;

	static void printThreads(){
		  ThreadStruct *thread;
		  ofstream myfile;
		  myfile.open ("/home/tandon/data/threads.txt");
		  std::vector<ThreadStruct *>::iterator it;
		  int maxCount = 4;
		  for(int count = 0; count < maxCount; count++){
			  for (it = _threadList.begin(); it < _threadList.end(); it++){
				  thread = *it;
				  if(thread->getThreadType() == count){
					  myfile << thread->getThreadId() << "," ;
				  }
			  }
			  myfile << "\b \b\n" ;
		  }
		  myfile.close();
	}

};

#endif /* SWAPMETRICS_HPP_ */
