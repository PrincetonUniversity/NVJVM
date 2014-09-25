/*
 * SwapMetrics.cpp
 *
 *  Created on: Sep 19, 2014
 *      Author: ravitandon
 */

#include "SwapMetrics.hpp"

int SwapMetrics::_markPhaseFaults = 0;
int SwapMetrics::_sweepPhaseFaults = 0;

double SwapMetrics::_sumDiskUtilizationMark = 0;
int SwapMetrics::_numberReportsMark = 0;
double SwapMetrics::_sumDiskUtilizationSweep = 0;
int SwapMetrics::_numberReportsSweep = 0;

void SwapMetrics::setPhase(int phaseId){
     _phaseId = phaseId;
}

SwapMetrics::SwapMetrics(const char* phase) {
  _currentFaults = new int[2];
  _initialFaults = new int[2];
  _finalFaults = new int[2];
  _phaseName = std::string(phase);
  getCurrentNumberOfFaults();
  int count;
  for (count = 0; count < 2; count++){
       _initialFaults[count] = _currentFaults[count];
  }
  _logFilePath = "/home/tandon/logs/cms.log";
  generateIOReport(false);
}

SwapMetrics::~SwapMetrics() {
  getCurrentNumberOfFaults();
  int count;
  for (count = 0; count < 2; count++){
       _finalFaults[count] = _currentFaults[count];
  }
  // Setting the minor and the major faults
  _minorFaults = _finalFaults[0] - _initialFaults[0];
  _majorFaults = _finalFaults[1] - _initialFaults[1];
  if(_phaseId == markPhase){
       _markPhaseFaults += _majorFaults;
  } else if (_phaseId == sweepPhase) {
       _sweepPhaseFaults += _majorFaults;
  }

  // Writing the minor and the major faults to the output
  cout  << _phaseName << "," << _minorFaults << "," << _majorFaults << endl;
  generateIOReport(true);
}

std::string inToS(int num){
    std::ostringstream ss;
    ss << num;
    return ss.str();
}

void SwapMetrics::printTotalFaults(){
      int count = 0;
       FILE *fp;
       char buf[BUF_MAX];
       pid_t pid = getpid();
       std::string cmd = std::string("ps -o min_flt,maj_flt ") +
          std::string(inToS(pid));
       fp = popen(cmd.c_str(), "r");
       while(fgets(buf, BUF_MAX, fp) != NULL);
       cout << "MarkPhaseFaults : " << _markPhaseFaults << endl;
       cout << "SweepPhaseFaults : " << _sweepPhaseFaults << endl;
       cout << "SweepPhaseDiskUtilization : " << _sumDiskUtilizationSweep / _numberReportsSweep << endl;
       cout << "MarkPhaseDiskUtilization : " << _sumDiskUtilizationMark / _numberReportsMark << endl;
}

void SwapMetrics::generateIOReport(bool doAdd){
  FILE *fp;
  double value;
  char buf[BUF_MAX];
  std::string cmd = std::string("iostat -x dm-0 | awk '/util/{getline; print}' | awk -F ' ' '{print $14}'");
  fp = popen(cmd.c_str(), "r");
  while(fgets(buf, BUF_MAX, fp) != NULL);
  std::stringstream(std::string(buf)) >> value;
  if(doAdd){
	  if(_phaseId == markPhase){
		  _sumDiskUtilizationMark += value;
		  _numberReportsMark++;
	  } else if(_phaseId == sweepPhase){
		  _sumDiskUtilizationSweep += value;
		  _numberReportsSweep++;
	  }
  }
  return;
}

void SwapMetrics::getCurrentNumberOfFaults(void){
	int count = 0;
	FILE *fp;
	char buf[BUF_MAX];
	pid_t pid = getpid();
	std::string cmd = std::string("ps -o min_flt,maj_flt ") +
	  std::string(inToS(pid));
	fp = popen(cmd.c_str(), "r");
	while(fgets(buf, BUF_MAX, fp) != NULL);
	istringstream iss(buf);
	do
	 {
		 string sub;
		 iss >> sub;
		 std::stringstream(sub) >> _currentFaults[count];
		 count++;
	  } while(iss);
}
