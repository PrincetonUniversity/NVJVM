/*
 * SHMClient.cpp
 *
 *  Created on: Nov 14, 2014
 *      Author: ravitandon
 */

#include "SHMClient.hpp"

SHM_Client::SHM_Client() {
	sizeSharedMemory = _PAGE_SIZE;
	 /*
	     * We need to get the segment named
	     * "5678", created by the server.
	     */
	key = CLIENT_KEY;
	runClient();
}

SHM_Client::~SHM_Client() {
	// TODO Auto-generated destructor stub
}


long int SHM_Client::getCurrentTime(){
	struct timeval tp;
	gettimeofday(&tp, NULL);
	long int ms = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	return ms;
}

int SHM_Client::findNthPositionOfCharAfter(string str, int n, char ch, int startIndex){
	int index = startIndex;
	while(n>0){
		index = str.find(ch, index+1);
		n--;
	}
	return index;
}

string SHM_Client::long_to_string(long int value){
	  std::ostringstream os ;
      //throw the value into the string stream
      os << value ;
      //convert the string stream into a string and return
      return os.str() ;
}

string SHM_Client::int_to_string(int value){
	  std::ostringstream os ;
      //throw the value into the string stream
      os << value ;
      //convert the string stream into a string and return
      return os.str() ;
}

vector<string> SHM_Client::splitStrings(string inputString){
	std::vector<string> wordVector;
	std::stringstream stringStream(inputString);
	std::string line;
	while(std::getline(stringStream, line))
	{
	    std::size_t prev = 0, pos;
	    while ((pos = line.find_first_of(":", prev)) != std::string::npos)
	    {
	        if (pos > prev)
	            wordVector.push_back(line.substr(prev, pos-prev));
	        prev = pos+1;
	    }
	    if (prev < line.length())
	        wordVector.push_back(line.substr(prev, std::string::npos));
	}
	return wordVector;
}

int SHM_Client::getIndex(string str, string searchString){
	int index = 0, pos = 0, length = searchString.size();
	char ch = ':';
	while(true){
		if(str.compare(pos, length, searchString) == 0)
			return index;
		index++;
		pos = str.find(ch, pos) + 1;
	}
}

void SHM_Client::changeStateToIdle(void){
#if LOG_CLIENT
	cout << "In changeStateToIdle" << endl;
#endif
	string processId = int_to_string((int)getpid());
	int pos, size, startPos, endPos, length;
	std::string line, shmStr = string(shm);
	char newLine ='\n', delimiter = ':';
	vector<string> process_Ids = splitStrings(line);
	size = process_Ids.size();
	int index = getIndex(shmStr, processId);
	startPos = findNthPositionOfCharAfter(shmStr, index+1, newLine, 0);
	pos = findNthPositionOfCharAfter(shmStr, 1, delimiter, startPos);
	endPos = findNthPositionOfCharAfter(shmStr, 2, delimiter, startPos);
	length = endPos-pos-1;
	shmStr.replace(pos+1, length, "I");
#if LOG_CLIENT
	cout << "State" << endl << shmStr << endl;
#endif
	pos = findNthPositionOfCharAfter(shmStr, 2, delimiter, startPos);
	endPos = findNthPositionOfCharAfter(shmStr, 3, delimiter, startPos);
	length = endPos-pos-1;
	shmStr.replace(pos+1, length, "N");
#if LOG_CLIENT
	cout << "State" << endl << shmStr << endl;
#endif
	pos = findNthPositionOfCharAfter(shmStr, 3, delimiter, startPos);
	endPos = findNthPositionOfCharAfter(shmStr, 4, delimiter, startPos);
	length = endPos-pos-1;
	shmStr.replace(pos+1, length, long_to_string(getCurrentTime()));
#if LOG_CLIENT
	cout << "State" << endl << shmStr << endl;
#endif
	pos = findNthPositionOfCharAfter(shmStr, 4, delimiter, startPos);
	endPos = findNthPositionOfCharAfter(shmStr, 1, newLine, startPos);
	length = endPos-pos-1;
	shmStr.replace(pos+1, length, long_to_string(getCurrentTime()));
#if LOG_CLIENT
	cout << "State" << endl << shmStr << endl;
#endif
	copyToSharedMemory(shmStr);
}

bool SHM_Client::checkIfCanGC(char *shm){
#if LOG_CLIENT
	cout << "In checkIfCanGC" << endl;
#endif
	string processId = int_to_string((int)getpid());
	int pos, size, startPos, endPos, length;
	std::string line;
	std::string shmStr = string(shm);
	std::stringstream stringStream(shmStr);
	char newLine ='\n', delimiter = ':';
	vector<string> process_Ids = splitStrings(line);
	size = process_Ids.size();
	int index = getIndex(shmStr, processId);
	startPos = findNthPositionOfCharAfter(shmStr, index+1, newLine, 0);
	pos = findNthPositionOfCharAfter(shmStr, 2, delimiter, startPos);
	if(shmStr.compare(pos+1, 3, "GCS") == 0){
		shmStr.replace(pos-1, 1, "GCB");
		string timeStr = long_to_string(getCurrentTime());
		pos = findNthPositionOfCharAfter(shmStr, 3, delimiter, startPos);
		endPos = findNthPositionOfCharAfter(shmStr, 4, delimiter, startPos);
		length = endPos - pos - 1;
		shmStr.replace(pos+1, length, timeStr);
		copyToSharedMemory(shmStr);
		return true;
	}
	return false;
}

void SHM_Client::registerClient(char *shm){
#if LOG_CLIENT
	cout << "In register client" << endl;
#endif
	string processId = int_to_string(getpid());
	int pos, size;
	std::string line;
	std::string shmStr = string(shm);
	std::stringstream stringStream(shmStr);
	char newLine ='\n', delimiter = ':';
	string delimiterStr = ":";
	string msgStr =
		processId + (delimiter) +
		('I') + (delimiter) +
		('N') + (delimiter) +
		long_to_string((getCurrentTime())) + (delimiter) +
		long_to_string((getCurrentTime())) + (newLine);
		getline(stringStream, line);
	// The first line is the the set of processes.
		vector<string> process_Ids = splitStrings(line);
		size = process_Ids.size();
		if(size>0){
			// add its own process id at the back
				pos = shmStr.find(newLine, 0);
				shmStr.insert(pos, delimiterStr);
				shmStr.insert(pos+1, (processId));
				shmStr += msgStr;
				copyToSharedMemory(shmStr);
			} else {
			// else add its process id at the front
				cout << "No old process found" << endl;
				string str = processId + (newLine) + msgStr;
				copyToSharedMemory(str);
			}
	cout << "Client Registration Done. After adding the new process" << endl << shm << endl;
}

void SHM_Client::runClient(void)
{
    /*
     * Locate the segment.
     */
    if ((shmid = shmget(key, SHMSZ, IPC_CREAT | 0666)) < 0) {
        perror("shmget");
        exit(1);
    }

    /*
     * Now we attach the segment to our data space.
     */
    if ((shm = (char *)shmat(shmid, NULL, 0)) == (char *) -1) {
        perror("shmat");
        exit(1);
    }

    /*
     *  Creating a semaphore
     */
    int oflags = 0;
    mode_t mode = 0644;
    unsigned int initialValue = 0;
    string sem_name = string("gc_sem");
    mutex = sem_open(sem_name.c_str(), oflags, mode, initialValue);
    if(mutex == SEM_FAILED){
    	perror("unable to create semaphore");
    	sem_unlink(sem_name.c_str());
    	exit(-1);
    }

#if LOG_CLIENT
    cout << "Client::Created the semaphore" << endl;
#endif

	sem_wait(mutex);
	// Registering the client
	registerClient(shm);
	// Releasing the lock
	sem_post(mutex);
}

void SHM_Client::copyToSharedMemory(string str){
	memcpy(shm, str.c_str(), str.size());
	memset(shm+str.size(), 0, sizeSharedMemory - str.size());
}

void SHM_Client::triggerGCRequestInMemory(void){
#if LOG_CLIENT
	cout << "In trigger GC In Memory" << endl;
#endif
  string processId = int_to_string(getpid());
  std::string shmStr = string(shm);
  int index = getIndex(shmStr, processId);
  char newLine ='\n', delimiter = ':';
  int startPos = findNthPositionOfCharAfter(shmStr, index+1, newLine, 0), endPos, length;
  int pos = findNthPositionOfCharAfter(shmStr, 1, delimiter, startPos);
  shmStr.replace(pos+1, 1, "Q"); // Replacing I to Q here
  string timeStr = long_to_string(getCurrentTime());
  pos = findNthPositionOfCharAfter(shmStr, 3, delimiter, startPos);
  endPos = findNthPositionOfCharAfter(shmStr, 4, delimiter, startPos);
  length = endPos - pos - 1;
  shmStr.replace(pos+1, length, timeStr);
  copyToSharedMemory(shmStr);
}

void SHM_Client::printSMState(string msg){
	cout << msg << endl << " Shared Memory State " << endl << shm << endl;
}

void SHM_Client::triggerGCRequest(void){
#if LOG_CLIENT
	cout << "Triggering the GC signal in the client" << endl;
#endif
    // Getting the lock
    sem_wait(mutex);
    // Checking the memory segment
    triggerGCRequestInMemory();
    // Releasing the lock
    sem_post(mutex);

#if LOG_CLIENT
	printSMState("After triggering GC Request");
#endif

}

void SHM_Client::triggerGCDone(void){
#if LOG_CLIENT
	cout << "Triggering the GC done signal in the client" << endl;
#endif
    // Getting the lock
    sem_wait(mutex);
    // Checking the memory segment
    changeStateToIdle();
    // Releasing the lock
    sem_post(mutex);
#if LOG_CLIENT
	printSMState("After trigger GC Done");
#endif
}

bool SHM_Client::isGCAllowed(void){
#if LOG_CLIENT
	cout << "Checking if GC is allowed" << endl;
#endif
	bool isGC= false;
    // Getting the lock
    sem_wait(mutex);
    // Checking the memory segment
    isGC = checkIfCanGC(shm);
    // Releasing the lock
    sem_post(mutex);
    return isGC;
}
