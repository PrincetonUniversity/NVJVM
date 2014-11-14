/*
 * SHMClient.hpp
 *
 *  Created on: Nov 14, 2014
 *      Author: ravitandon
 */

#ifndef SHMCLIENT_HPP_
#define SHMCLIENT_HPP_

#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include <string.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>
#include <vector>
#include <sstream>
#include <sys/time.h>
#include <queue>
#include <stdlib.h>
#include <signal.h>

#define _PAGE_SIZE sysconf(_SC_PAGE_SIZE)
#define SHMSZ _PAGE_SIZE
#define CLIENT_KEY 5678
#define CLIENT_SLEEP_TIME 1000
#define LOG_CLIENT 1

using namespace std;

class SHM_Client {
private:
	sem_t* mutex;
	char *shm;
	int sizeSharedMemory;
    int shmid;
    key_t key;

public:
	SHM_Client();
	virtual ~SHM_Client();
	long int getCurrentTime(void);
	int findNthPositionOfCharAfter(string str, int n, char ch, int startIndex);
	string long_to_string(long int value);
	string int_to_string(int value);
	vector<string> splitStrings(string inputString);
	int getIndex(string str, string searchString);
	void changeStateToIdle(void);
	bool checkIfCanGC(char *shm);
	void registerClient(char *shm);
	void runClient(void);
	void triggerGCRequestInMemory(void);
	void copyToSharedMemory(string str);

/* These are the interfaces through which the concurrent mark sweep algorithm interacts with the SHM Client*/
	void triggerGCRequest(void); // Marks the state as requesting for the GC
	bool isGCAllowed(void);      // Checks if the GC is allowed, if yes then the state is changed to GC_Busy
	void triggerGCDone(void);    // Marks in-memory that GC has been completed by the client
};

#endif /* SHMCLIENT_HPP_ */
