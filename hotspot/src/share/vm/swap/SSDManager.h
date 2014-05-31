/*
 * SSDManager.h
 *
 *  Created on: May 18, 2014
 *      Author: ravitandon
 */

#ifndef SSDMANAGER_H_
#define SSDMANAGER_H_

#include "swap_global.h"
#include <pthread.h>


// Currently the SSDManager abstracts the SSD as a log. Writes are serially
class SSDManager {
private:
	static int _top;
	static pthread_mutex_t _offset_mutex;
public:
	static int get(int np);
	SSDManager();
};

#endif /* SSDMANAGER_H_ */
