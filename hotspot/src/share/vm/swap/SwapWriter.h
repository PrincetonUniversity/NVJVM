/*
 * SwapWriter.h
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#include "swap_global.h"

#ifndef SWAPWRITER_H_
#define SWAPWRITER_H_

class SwapWriter {

public:
	SwapWriter();
	virtual ~SwapWriter();
	static SSDRange swapOut (void * va, int np, int off);
};

#endif /* SWAPWRITER_H_ */
