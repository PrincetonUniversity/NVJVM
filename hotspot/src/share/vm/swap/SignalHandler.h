/*
 * SignalHandler.h
 *
 *  Created on: Aug 12, 2014
 *      Author: ravitandon
 */

#ifndef SIGNALHANDLER_H_
#define SIGNALHANDLER_H_

#include "SwapMetric.h"
#include "signal.h"
#include <unistd.h>
#include "SSDSwap.h"
#include "Utility.h"
#include "runtime/thread.hpp"
#include <stdio.h>
#include <execinfo.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include "memory/genCollectedHeap.hpp"
#include "memory/memRegion.hpp"

class SignalHandler {
private:
	static bool _isInit;
public:
	SignalHandler();
	static void init();
};

#endif /* SIGNALHANDLER_H_ */
