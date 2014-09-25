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
double SwapMetrics::_ioUtilizationMark = 0;
double SwapMetrics::_ioUtilizationSweep = 0;

std::string inToS(int num){
    std::ostringstream ss;
    ss << num;
    return ss.str();
}

double sToDub(string str){
	double i3;
	std::stringstream(str) >> i3;
	return i3;
}

std::string splitString(std::string buf, int index){
	int count = 0;
    std::string ret = "";
    istringstream iss(buf);
    do
    {
        string sub;
        iss >> sub;
        if(count == index){
            cout << "Substring: " << sub << endl;
            return sub;
        }
        count++;
    } while (iss);
    cout << "Something is wrong -->" << buf << endl;
    exit(-1);
    return ret;
}

void* monitorIOs(void* arg){
  int id = *(int *)arg;
  double value;
  int count = 0;
  string temp;
  FILE *fp;
  char buf[BUF_MAX];
  count++;
  std::string ret;
  std::string cmd = std::string("iostat -x 1 2 dm-0");;
  fp = popen(cmd.c_str(), "r");
  while(fgets(buf, BUF_MAX, fp) != NULL){
    temp = std::string(buf);
    if(count == 10){
      ret = splitString(temp, 3);
      value = sToDub(ret);
      if(id == SwapMetrics::markPhase){
    	  SwapMetrics::_ioUtilizationMark += value;
    	  cout <<  "IOUtilization --> " << SwapMetrics::_ioUtilizationMark << endl;
      } else if(id == SwapMetrics::sweepPhase){
    	  SwapMetrics::_ioUtilizationSweep += value;
      }
    }
    if(count == 13){
       ret = splitString(temp, 13);
       value = sToDub(ret);
       if(id == SwapMetrics::markPhase){
    	   SwapMetrics::_sumDiskUtilizationMark += value;
    	   SwapMetrics::_numberReportsMark++;
       } else if(id == SwapMetrics::sweepPhase){
     	  SwapMetrics::_sumDiskUtilizationSweep += value;
     	 SwapMetrics::_numberReportsSweep++;
       }
    }
    count++;
  }
}


void SwapMetrics::threadFunction(int id){
  pthread_t thread;
  long arg = (long)id;
  int rc = pthread_create(&thread, NULL, monitorIOs, (void *)&id);
  if (rc){
         printf("ERROR; return code from pthread_create() is %d\n", rc);
         exit(-1);
      }
}

void SwapMetrics::setPhase(int phaseId){
     _phaseId = phaseId;
}

SwapMetrics::SwapMetrics(const char* phase, int phaseId) {
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
  _phaseId = phaseId;
  threadFunction(phaseId);
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
       cout << "SweepIOWait : " << _ioUtilizationSweep / _numberReportsSweep << endl;
       cout << "MarkIOWait : " << _ioUtilizationMark / _numberReportsMark << endl;
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
