/*
 * SwapReader.h
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */
#include "swap_global.h"

#ifndef SWAPREADER_H_
#define SWAPREADER_H_

class SwapReader {
public:
	SwapReader();
	virtual ~SwapReader();
	static size_t swapIn (void * va,  int np, int off);
};

#endif /* SWAPREADER_H_ */
