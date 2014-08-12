/*
 * SignalHandler.h
 *
 *  Created on: Aug 12, 2014
 *      Author: ravitandon
 */

#ifndef SIGNALHANDLER_H_
#define SIGNALHANDLER_H_
#include "Utility.h"
#include "SwapMetric.h"
#include "signal.h"
#include <unistd.h>

struct sigaction sa;
struct sigaction oldSigAct;

class SignalHandler {
public:
	SignalHandler();
};

#endif /* SIGNALHANDLER_H_ */
