/*
 * SwapReader.h
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */


#ifndef SWAPREADER_H_
#define SWAPREADER_H_

#include "swap_global.h"

class SwapReader {
public:
	SwapReader();
	virtual ~SwapReader();
	static size_t swapInOffset (void* va,  int nb, int offSSD);
};

#endif /* SWAPREADER_H_ */
