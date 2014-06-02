/*
 * global.h
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_

#include "memory/universe.inline.hpp"
#include "runtime/globals.hpp"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "errno.h"
#include <iostream>
#define _GNU_SOURCE_ 1
#include <unistd.h>
#include <sys/mman.h>
#include <signal.h>
#include "string.h"
#include <map>


using namespace std;

#define MREMAP_MAYMOVE 1
#define MREMAP_FIXED 2


#define DEBUG false

#define PAGE_SIZE sysconf(_SC_PAGE_SIZE) // Each page in page buffer is of size 4KB

#define handle_error(msg) \
  do {perror (msg); exit(EXIT_FAILURE);} while (0)

class SwapRange {

private:
	int _num_pages;
	void *_top_address;
	void *_bottom_address;
public:
	SwapRange(){
		_num_pages = -1;
		_top_address = NULL;
		_bottom_address = NULL;
	}
	SwapRange(int n, void *top, void *bot){
		_num_pages = n;
		_top_address = top;
		_bottom_address = bot;
	}
	int getNumPages (){
		return _num_pages;
	}
	void *getTop(){
		return _top_address;
	}
	void *getBot(){
		return _bottom_address;
	}
};
/** The SSDRange includes the range of pages over which a specific region of the address space is swapped out.
 *  The offsets are set in terms of the page offsets.
 *  These offsets are inclusive (the bottom and top page are included in the range).
 */
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
