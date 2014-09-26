/*
 * SwapMetrics.cpp
 *
 *  Created on: Sep 19, 2014
 *      Author: ravitandon
 */

#include "SwapMetrics.hpp"

int SwapMetrics::_markPhaseFaults = 0;
int SwapMetrics::_sweepPhaseFaults = 0;
int SwapMetrics::_compactionPhaseFaults = 0;

double SwapMetrics::_sumDiskUtilizationMark = 0;
double SwapMetrics::_sumDiskUtilizationSweep = 0;
double SwapMetrics::_sumDiskUtilizationMutator = 0;
double SwapMetrics::_sumDiskUtilizationCompaction = 0;

double SwapMetrics::_ioWaitMark = 0;
double SwapMetrics::_ioWaitSweep = 0;
double SwapMetrics::_ioWaitMutator = 0;
double SwapMetrics::_ioWaitCompaction = 0;

int SwapMetrics::_numberReportsSweep = 0;
int SwapMetrics::_numberReportsMark = 0;
int SwapMetrics::_numberReportsMutator = 0;
int SwapMetrics::_numberReportsCompaction = 0;

double SwapMetrics::_userTimeMutator = 0;
double SwapMetrics::_userTimeMark = 0;
double SwapMetrics::_userTimeSweep = 0;
double SwapMetrics::_userTimeCompaction = 0;

double SwapMetrics::_markTime = 0;
double SwapMetrics::_sweepTime = 0;
double SwapMetrics::_compactionTime = 0;

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
            return sub;
        }
        count++;
    } while (iss);
    cout << "Something is wrong -->" << buf << endl;
    exit(-1);
    return ret;
}

void* monitorIOMutators(void* arg){
  printf("Starting the mutator IO monitor.\n");
  double value;
  int count;
  string temp;
  FILE *fp;
  char buf[BUF_MAX];
  std::string ret;
  std::string cmd = std::string("iostat -x 1 2 dm-0");
  while(true){
  count = 0;
  fp = popen(cmd.c_str(), "r");
  while(fgets(buf, BUF_MAX, fp) != NULL){
	count++;
	temp = std::string(buf);
	if(count == 10){
	  ret = splitString(temp, 0);
	  value = sToDub(ret);
	  SwapMetrics::_userTimeMutator += value;
	  temp = std::string(buf);
	  ret = splitString(temp, 3);
	  value = sToDub(ret);
	  SwapMetrics::_ioWaitMutator += value;
	}
	if(count == 13){
	   ret = splitString(temp, 13);
	   value = sToDub(ret);
	   SwapMetrics::_sumDiskUtilizationMutator += value;
	}
  }
  	  SwapMetrics::_numberReportsMutator++;
  	  sleep(1);
  }
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
	ret = splitString(temp, 0);
	value = sToDub(ret);
	if(id == SwapMetrics::markPhase){
	  SwapMetrics::_userTimeMark += value;
	} else if(id == SwapMetrics::sweepPhase){
		SwapMetrics::_userTimeSweep += value;
	} else if(id == SwapMetrics::compactPhase){
		SwapMetrics::_userTimeCompaction += value;
	}
	  temp = std::string(buf);
	  ret = splitString(temp, 3);
      value = sToDub(ret);
      if(id == SwapMetrics::markPhase){
    	  SwapMetrics::_ioWaitMark += value;
      } else if(id == SwapMetrics::sweepPhase){
    	  SwapMetrics::_ioWaitSweep += value;
      } else if(id == SwapMetrics::compactPhase){
  		SwapMetrics::_ioWaitCompaction += value;
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
       }else if(id == SwapMetrics::compactPhase){
   		SwapMetrics::_numberReportsCompaction += value;
   	}
    }
    count++;
  }
  free(arg);
}

void SwapMetrics::threadFunction(int id){
  pthread_t thread;
  int *arg = (int *)malloc(sizeof(int));
  *arg = id;
  int rc = pthread_create(&thread, NULL, monitorIOs, (void *)arg);
  if (rc){
		 printf("ERROR; return code from pthread_create() is %d\n", rc);
		 exit(-1);
	  }
}

void SwapMetrics::mutatorMonitorThreadFunction(void){
  pthread_t thread;
  int rc = pthread_create(&thread, NULL, monitorIOMutators, NULL);
  if (rc){
		 printf("ERROR; return code from pthread_create() is %d\n", rc);
		 exit(-1);
	  }
}

void SwapMetrics::setPhase(int phaseId){
     _phaseId = phaseId;
}

void SwapMetrics::universeInit(){
	printf("Initializing the swapMetrics.\n");
	mutatorMonitorThreadFunction();
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
  } else if(_phaseId == compactPhase) {
	  _compactionPhaseFaults += _majorFaults;
  }

  // Writing the minor and the major faults to the output
  cout  << _phaseName << "," << _minorFaults << "," << _majorFaults << endl;
}

void SwapMetrics::printTotalFaults(){
    int totalFaults[2];
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
       		 std::stringstream(sub) >> totalFaults[count];
       		 count++;
       	  } while(iss);
       cout << "Total number of major faults : " << totalFaults[1] << endl;

       cout << "MarkPhaseFaults : " << _markPhaseFaults << endl;
       cout << "SweepPhaseFaults : " << _sweepPhaseFaults << endl;
       cout << "CompactionPhaseFaults : " << _compactionPhaseFaults << endl;

       cout << "SweepPhaseDiskUtilization : " << _sumDiskUtilizationSweep / _numberReportsSweep << endl;
       cout << "MarkPhaseDiskUtilization : " << _sumDiskUtilizationMark / _numberReportsMark << endl;
       cout << "MutatorDiskUtilization : " << _sumDiskUtilizationMutator / _numberReportsMutator << endl;
       cout << "CompactionDiskUtilization : " << _sumDiskUtilizationCompaction / _numberReportsCompaction << endl;

       cout << "SweepIOWait : " << _ioWaitSweep / _numberReportsSweep << endl;
       cout << "MarkIOWait : " << _ioWaitMark / _numberReportsMark << endl;
       cout << "MutatorIOWait : " << _ioWaitMutator / _numberReportsMutator << endl;
       cout << "CompactionIOWait : " << _ioWaitCompaction / _numberReportsCompaction << endl;

       cout << "UserTimeMutator : " << _userTimeMutator /_numberReportsMutator << endl;
       cout << "UserTimeMark : " << _userTimeMark /_numberReportsMark << endl;
       cout << "UserTimeSweep : " << _userTimeSweep /_numberReportsSweep << endl;
       cout << "UserTimeCompaction : " << _userTimeCompaction /_numberReportsCompaction << endl;

       cout << "TotalMarkTime : " << _markTime << endl;
       cout << "TotalSweepTime : " << _sweepTime << endl;
       cout << "TotalCompactionTime : " << _compactionTime << endl;

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
