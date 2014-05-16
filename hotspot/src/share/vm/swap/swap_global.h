/*
 * global.h
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "errno.h"
#include <sys/mman.h>
#include <iostream>
#include <unistd.h>
#include <signal.h>
#include "assert.h"
#include "string.h"
#include <unordered_map>
using namespace std;

#ifndef GLOBAL_H_
#define GLOBAL_H_

#define DEBUG false

#define PAGE_SIZE sysconf(_SC_PAGE_SIZE) // Each page in page buffer is of size 4KB

#define handle_error(msg) \
  do {perror (msg); exit(EXIT_FAILURE);} while (0)

class SwapRange {

private:
	int _num_pages;
	void *_start_address;
public:
	SwapRange(){
		_num_pages = -1;
		_start_address = NULL;
	}
	SwapRange(int n, void *a){
		_num_pages = n;
		_start_address = a;
	}
	int getNumPages (){
		return _num_pages;
	}
	void *getStartAddress(){
		return _start_address;
	}
};

class SSDRange {
private:
	int _start_off;
	int _end_off;

public:
	SSDRange(){
		_start_off = -1;
		_end_off = -1;
	}

	SSDRange(int s, int e){
		_start_off = s;
		_end_off = e;
	}
	int getStart(){
		return _start_off;
	}
	int getEnd(){
		return _end_off;
	}
};

#endif /* GLOBAL_H_ */
