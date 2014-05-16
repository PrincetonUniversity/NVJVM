/*
 * SwapWriter.h
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */


#ifndef SWAPWRITER_H_
#define SWAPWRITER_H_

#include "swap_global.h"

class SwapWriter {

public:
	SwapWriter();
	virtual ~SwapWriter();
	static SSDRange swapOut (void * va, int np);
};

#endif /* SWAPWRITER_H_ */
