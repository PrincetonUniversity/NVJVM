/*
 * SSDManager.cpp

 *
 *  Created on: May 18, 2014
 *      Author: ravitandon
 */
#include "SSDManager.h"
int SSDManager::_top;

int SSDManager::get(int np){
	pthread_mutex_lock(&_offset_mutex);
    int start = _top;
	_top += np;
	pthread_mutex_unlock(&_offset_mutex);
	return start;
}

SSDManager::SSDManager(){
	_top = 0;
}



