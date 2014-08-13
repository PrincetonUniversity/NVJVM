/*
 * SignalHandler.cpp
 *
 *  Created on: Aug 12, 2014
 *      Author: ravitandon
 */

#include "SignalHandler.h"

struct sigaction sa;
struct sigaction oldSigAct;

void seg_handler(int sig, siginfo_t *si, void *unused){
  void *addr = (void *)si->si_addr;
  if (si->si_code == SEGV_ACCERR && Utility::liesWithinHeap(addr)){
#if SWAP_METRICS
	  Thread *threadC = Thread::current();
	  SwapMetric::incrementSegFaults();
	  if(threadC->is_Java_thread()){
		  SwapMetric::incrementFaultsJavaThread();
	  } else if(threadC->is_Named_thread()){
		  if(threadC->is_VM_thread()) {
			  SwapMetric::incrementFaults_VM_Thread();
		  } else if(threadC->is_ConcurrentGC_thread()){
			  SwapMetric::incrementFaults_CGC_Thread();
		  } else if(threadC->is_Worker_thread()){
			  SwapMetric::incrementFaults_Worker_Thread();
		  }
		  SwapMetric::incrementFaultsNamedThread();
	  }
#endif
	  char *position = (char *)Universe::getPageTablePosition(addr);
	  char value = *position;

#if SEGMENTATION_LOG
	  char *prefetchPosition = (char *)Universe::getPrefetchTablePosition(addr);
	  char prefetchValue = *prefetchPosition;
	  printf("Segmentation fault. "
			  "Add = %p, Page Index = %ld, IsSwappedOut Value = %d, Prefetch Value = %d, at position = %p.\n",
			  addr, Universe::getPageIndex(addr), value, prefetchValue, position);
		  fflush(stdout);
#endif

// Fall back option, when we cannot detect object accesses
	 if(value != Universe:: _presentMask){
//		 SSDSwap::handle_faults(addr);
		 SSDSwap::CMS_handle_faults(addr);
#if SEGMENTATION_LOG
			 printf("Segmentation fault at address = %p, handled.\n", addr);
			 fflush(stdout);
#endif
	 }
	 return;
  }
  (*oldSigAct.sa_sigaction)(sig, si, unused);
}

SignalHandler::SignalHandler() {
	sa.sa_flags = SA_SIGINFO; // The siginfo_t structure is passed as a second parameter to the user signal handler function
	sigemptyset(&sa.sa_mask); // Emptying the signal set associated with the structure sigaction_t
	sa.sa_sigaction = seg_handler; // Assigning the fault handler
	if (sigaction(SIGSEGV, &sa, &oldSigAct) == -1){ // Installs the function in sa taken on a segmentation fault
		    perror("error :");
	}
}

