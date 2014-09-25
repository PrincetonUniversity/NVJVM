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

using namespace std;
#define BUF_MAX 1000


class SwapMetrics {
private:
	int _majorFaults;
	int _minorFaults;
    int* _initialFaults;
    int* _finalFaults;
    string _phaseName;
    string _logFilePath;
    int* _currentFaults;
    static int _markPhaseFaults;
    static int _sweepPhaseFaults;
    int _phaseId;
    static int _numberReportsMark;
    static int _numberReportsSweep;
    static double _sumDiskUtilizationMark;
    static double _sumDiskUtilizationSweep;
    static double _ioUtilizationMark;
    static double _ioUtilizationSweep;

public:
	SwapMetrics(const char *phase, int phaseId);
	virtual ~SwapMetrics();
	int getMajorFaultMetrics() { return _majorFaults; }
	int getMinorFaultsMetrics() { return _minorFaults; }
	void getCurrentNumberOfFaults();
	static void printTotalFaults();
	void setPhase(int phaseId);
    enum PhaseIds{
    	markPhase = 1,
    	sweepPhase = 2
    };
    void threadFunction(int id);
};

#endif /* SWAPMETRICS_HPP_ */
