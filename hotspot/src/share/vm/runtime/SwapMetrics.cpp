/*
 * SwapMetrics.cpp
 *
 *  Created on: Sep 19, 2014
 *      Author: ravitandon
 */

#include "SwapMetrics.hpp"
int SwapMetrics::_cPages = 0;
int SwapMetrics::_tPages = 0;


bool SwapMetrics::_shouldWait=false;
int SwapMetrics::_processInitialSwapOuts=0;
int SwapMetrics::_processInitialPageOuts=0;

int SwapMetrics::_sweepPhaseSwapOuts=0;
int SwapMetrics::_markPhaseSwapOuts=0;
int SwapMetrics::_compactionPhaseSwapOuts=0;

int SwapMetrics::_sweepPhasePageOuts=0;
int SwapMetrics::_markPhasePageOuts=0;
int SwapMetrics::_compactionPhasePageOuts=0;

int SwapMetrics::_defaultFaults=0;
int SwapMetrics::_markPhaseFaults = 0;
int SwapMetrics::_sweepPhaseFaults = 0;
int SwapMetrics::_compactionPhaseFaults = 0;
int SwapMetrics::_parMarkCoreAware = 0;
int SwapMetrics::_parMarkFaults = 0;

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

int SwapMetrics::_falsePositives = 0;
int SwapMetrics::_pageTouches = 0;
int SwapMetrics::_objectSpills = 0;

int SwapMetrics::_monitorIOsFlag = 0;
int SwapMetrics::_mincoreCallCount = 0;

void SwapMetrics::incrementMinCore(){
	Atomic::inc((volatile jint*)&(SwapMetrics::_mincoreCallCount));
}

long int getCurrentTime(){
	struct timeval tp;
	gettimeofday(&tp, NULL);
	long int ms = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	return ms;
}

string long_to_string(long int value){
	  std::ostringstream os ;
      //throw the value into the string stream
      os << value ;
      //convert the string stream into a string and return
      return os.str() ;
}

void SwapMetrics::incrementObjectSpills(void){
	_objectSpills++;
}

void SwapMetrics::incrementFalsePositive(void){
	_falsePositives++;
}

void SwapMetrics::incrementPageTouches(void){
	_pageTouches++;
}

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
  double value, average;
  int count;
  string temp;
  FILE *fp;
  char buf[BUF_MAX];
  std::string ret;
  std::string cmd = std::string("iostat -x 1 2 dm-2");
  double cpuUtilization[] = {0, 0, 0};
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
	  cpuUtilization[SwapMetrics::_numberReportsMutator%3] = value;
#if PRINT_LOGS
	  cout << endl << "cpuTime::" << value << ",";
#endif
	  temp = std::string(buf);
	  ret = splitString(temp, 3);
	  value = sToDub(ret);
	  SwapMetrics::_ioWaitMutator += value;
#if PRINT_LOGS
	  cout << "ioWait::" << value << ",";
#endif
	}
	if(count == 13){
	   ret = splitString(temp, 13);
	   value = sToDub(ret);
	   SwapMetrics::_sumDiskUtilizationMutator += value;
#if PRINT_LOGS
	   cout << "diskUtilization::" << value << ",";
#endif
	}
  }
  	  SwapMetrics::_numberReportsMutator++;
  	  average = (cpuUtilization[0]+cpuUtilization[1]+cpuUtilization[2])/3;
  	  SwapMetrics::_shouldWait = (average > 12.5);
#if PRINT_LOGS
  	  cout << "Waitflag::" << SwapMetrics::_shouldWait << endl;
#endif
  	  sleep(1);
  }
}

void* monitorIOs(void* arg){
  int initialValue=SwapMetrics::_monitorIOsFlag;
  int id = *(int *)arg;
  double value;
  int count = 0;
  string temp;
  FILE *fp;
  char buf[BUF_MAX];
  std::string ret;
  std::string cmd = std::string("iostat -x 1 2 dm-2");;
  while(SwapMetrics::_monitorIOsFlag == initialValue){
  count=1;
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
    	   SwapMetrics::_sumDiskUtilizationCompaction += value;
    	   SwapMetrics::_numberReportsCompaction++;
   	}
    }
    count++;
  }
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

int SwapMetrics::getCurrentNumberOfSwapOuts(void){
	int swapOuts = 0;
	int count = 0;
	FILE *fp;
	char buf[BUF_MAX];
	std::string cmd = std::string("vmstat -s | grep \"pages swapped out\"");
	fp = popen(cmd.c_str(), "r");
	while(fgets(buf, BUF_MAX, fp) != NULL);
	istringstream iss(buf);
		do
		 {
			 string sub;
			 iss >> sub;
			 std::stringstream(sub) >> swapOuts;
			 break;
		  } while(iss);
		return swapOuts;
}

int SwapMetrics::getCurrentNumberOfPageOuts(void){
	int swapOuts = 0;
	int count = 0;
	FILE *fp;
	char buf[BUF_MAX];
	std::string cmd = std::string("vmstat -s | grep \"pages paged out\"");
	fp = popen(cmd.c_str(), "r");
	while(fgets(buf, BUF_MAX, fp) != NULL);
	istringstream iss(buf);
		do
		 {
			 string sub;
			 iss >> sub;
			 std::stringstream(sub) >> swapOuts;
			 break;
		  } while(iss);
		return swapOuts;
}

void SwapMetrics::setPhase(int phaseId){
     _phaseId = phaseId;
}

void SwapMetrics::universeInit(){
	mutatorMonitorThreadFunction();
	_processInitialSwapOuts = getCurrentNumberOfSwapOuts();
	_processInitialPageOuts = getCurrentNumberOfSwapOuts();
}

SwapMetrics::SwapMetrics(const char* phase, int phaseId) {
  _currentFaults = new int[2];
  _initialFaults = new int[2];
  _finalFaults = new int[2];
  _phaseName = std::string(phase);
  getCurrentNumberOfFaults();
  _initialSwapOuts = getCurrentNumberOfSwapOuts();
  _initialPageOuts = getCurrentNumberOfPageOuts();
  int count;
  for (count = 0; count < 2; count++){
       _initialFaults[count] = _currentFaults[count];
  }
  _logFilePath = "/home/tandon/logs/cms.log";
  _phaseId = phaseId;
  threadFunction(phaseId);
  cout << "Start of phase: "<< phase << ",timestamp :: " << getCurrentTime() << endl;
}

SwapMetrics::~SwapMetrics() {
  SwapMetrics::_monitorIOsFlag++;
  getCurrentNumberOfFaults();
  _finalSwapOuts = getCurrentNumberOfSwapOuts();
  _finalPageOuts = getCurrentNumberOfPageOuts();
  int count;
  for (count = 0; count < 2; count++){
       _finalFaults[count] = _currentFaults[count];
  }
  // Setting the minor and the major faults
  _minorFaults = _finalFaults[0] - _initialFaults[0];
  _majorFaults = _finalFaults[1] - _initialFaults[1];
  if(_phaseId == markPhase){
       _markPhaseFaults += _majorFaults;
       _markPhaseSwapOuts += _finalSwapOuts-_initialSwapOuts;
       _markPhasePageOuts += _finalPageOuts-_initialPageOuts;
  } else if (_phaseId == sweepPhase) {
       _sweepPhaseFaults += _majorFaults;
       _sweepPhaseSwapOuts += _finalSwapOuts-_initialSwapOuts;
       _sweepPhasePageOuts += _finalPageOuts-_initialPageOuts;
  } else if(_phaseId == compactPhase) {
	  _compactionPhaseFaults += _majorFaults;
	  _compactionPhaseSwapOuts += _finalSwapOuts-_initialSwapOuts;
	  _compactionPhasePageOuts += _finalPageOuts-_initialPageOuts;
  }else if(_phaseId == parMarkCoreAware){
	  _parMarkCoreAware += _majorFaults;
  } else if(_phaseId == parMarkPhase){
	  _parMarkFaults += _majorFaults;
  }

  // Writing the minor and the major faults to the output
  cout  << _phaseName << "," << _minorFaults << "," << _majorFaults << endl;
  cout << "End of phase: "<< _phaseName << ",timestamp :: " << getCurrentTime() << endl;
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

        int finalFaults;
       	cmd = std::string("vmstat -s | grep \"pages swapped out\"");
       	fp = popen(cmd.c_str(), "r");
       	while(fgets(buf, BUF_MAX, fp) != NULL);
       	istringstream iss2(buf);
       		do
       		 {
       			 string sub;
       			 iss2 >> sub;
       			 std::stringstream(sub) >> finalFaults;
       			 break;
       		  } while(iss2);

       	int finalPageOuts;
     	cmd = std::string("vmstat -s | grep \"pages paged out\"");
       	fp = popen(cmd.c_str(), "r");
       	while(fgets(buf, BUF_MAX, fp) != NULL);
       	istringstream iss3(buf);
       		do
       		 {
       			 string sub;
       			 iss3 >> sub;
       			 std::stringstream(sub) >> finalPageOuts;
       			 break;
       		  } while(iss3);


       cout << "Total number of major faults : " << totalFaults[1] << endl;
       cout << "Total number of swapOuts : " << (finalFaults-_processInitialSwapOuts) << endl;
       cout << "Total number of pageOuts : " << (finalPageOuts-_processInitialPageOuts) << endl;
       cout << "Total number of faults without the default faults :" << (totalFaults[1] - _defaultFaults) << endl;

       cout << "MarkPhaseFaults : " << _markPhaseFaults << endl;
       cout << "SweepPhaseFaults : " << _sweepPhaseFaults << endl;
       cout << "CompactionPhaseFaults : " << _compactionPhaseFaults << endl;
       cout << "ParMarkPhaseFaults :" << _parMarkCoreAware << endl;
       cout << "ParMarkPhaseFaults :" << _parMarkFaults << endl;

       cout << "MarkPhaseSwapOuts : " << _markPhaseSwapOuts << endl;
       cout << "SweepPhaseSwapOuts : " << _sweepPhaseSwapOuts << endl;
       cout << "CompactionPhaseSwapOuts : " << _compactionPhaseSwapOuts << endl;

       cout << "MarkPhasePageOuts : " << _markPhasePageOuts << endl;
        cout << "SweepPhasePageOuts : " << _sweepPhasePageOuts << endl;
        cout << "CompactionPhasePageOuts : " << _compactionPhasePageOuts << endl;

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
       cout << "Total Mincore calls: " << _mincoreCallCount << endl;

       //cout << "Number of mark phases : " << _numberReportsMark << endl;
       //cout << "Number of sweep phases : " << _numberReportsSweep << endl;
       //cout << "Number of compaction phases : " << _numberReportsCompaction << endl;

//       cout << "Continuous Pages :: " << _cPages << endl;
//       cout << "Total Pages :: " << _tPages << endl;
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

void SwapMetrics::signalled(void){
	int count = 0;
	FILE *fp;
	char buf[BUF_MAX];
	pid_t pid = getpid();
	std::string cmd = std::string("ps -o min_flt,maj_flt ") +
	  std::string(inToS(pid));
	fp = popen(cmd.c_str(), "r");
	while(fgets(buf, BUF_MAX, fp) != NULL);
	int currentFaults[2];
	istringstream iss(buf);
		do
		 {
			 string sub;
			 iss >> sub;
			 std::stringstream(sub) >> currentFaults[count];
			 count++;
		  } while(iss);
		_defaultFaults=currentFaults[1];
}


