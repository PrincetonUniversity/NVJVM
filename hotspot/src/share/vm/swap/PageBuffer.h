/*
 * PageBuffer.h
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#ifndef PAGEBUFFER_H_
#define PAGEBUFFER_H_

#include "swap_global.h"

/* Page Buffer is the interface for maintaining the pages within the in memory buffer.
 * */

class PageBuffer {
private:
	int _number_of_pages;//

public:
	PageBuffer();
	virtual ~PageBuffer();
	static SSDRange pageOut (void *, int np);
};

#endif /* PAGEBUFFER_H_ */
