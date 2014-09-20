/*
 * SwapMetrics.cpp
 *
 *  Created on: Sep 19, 2014
 *      Author: ravitandon
 */

#include "SwapMetrics.hpp"

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

  // Writing the minor and the major faults to the output
  cout  << _phaseName << "," << _minorFaults << "," << _majorFaults << endl;
}

std::string inToS(int num){
    std::ostringstream ss;
    ss << num;
    return ss.str();
}

void SwapMetrics::getCurrentNumberOfFaults(void){
	  int count = 0;
	  FILE *fp;
	  char buf[BUF_MAX];
	  pid_t pid = getpid();
	  std::string cmd = std::string("ps -o min_flt,maj_flt ") +
	    std::string(inToS(pid));
	  fp = popen(cmd.c_str(), "r");
	  while(fgets(buf, BUF_MAX, fp) != NULL){
		  cout << buf << endl;
	  }
	  istringstream iss(buf);
	  do
	   {
	       string sub;
	       iss >> sub;
	       std::stringstream(sub) >> _currentFaults[count];
	       count++;
	    } while(iss);

}
