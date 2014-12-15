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
#include <sys/time.h>
#define PRINT_LOGS 0
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
    int _currentSwapOuts;
    int _initialSwapOuts;
    int _finalSwapOuts;
    int _processFinalSwapOuts;
    int _initialPageOuts;
    int _finalPageOuts;

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
    	compactPhase = 3,
    	parMarkPhase = 4,
    	refProcessingPhase = 5,
    	summaryPhase = 6
    };
    void threadFunction(int id);
    static void mutatorMonitorThreadFunction(void);
    static int getCurrentNumberOfSwapOuts();
    static int getCurrentNumberOfPageOuts();
    static void incrementFalsePositive(void);
    static void incrementPageTouches(void);
    static void incrementObjectSpills(void);
    static void signalled(void);

    static int _cPages;
    static int _tPages;

    static bool _shouldWait;
    static int _processInitialSwapOuts;
    static int _processInitialPageOuts;

    static int _defaultFaults;

    static int _markPhaseSwapOuts;
    static int _sweepPhaseSwapOuts;
    static int _compactionPhaseSwapOuts;

    static int _markPhasePageOuts;
    static int _sweepPhasePageOuts;
    static int _compactionPhasePageOuts;

    static int _markPhaseFaults;
	static int _sweepPhaseFaults;
	static int _compactionPhaseFaults;

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

	static int _falsePositives;
	static int _pageTouches;
	static int _objectSpills;

	static double _compactionTime;
	static void compactionTimeIncrement(double v) { _compactionTime += v; }

	static double _markTime;
	static void markTimeIncrement(double v) { _markTime += v; }

	static double _sweepTime;
	static void sweepTimeIncrement(double v) { _sweepTime += v; }

};

#endif /* SWAPMETRICS_HPP_ */
