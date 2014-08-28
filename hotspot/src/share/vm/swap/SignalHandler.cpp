/*
 * SignalHandler.cpp
 *
 *  Created on: Aug 12, 2014
 *      Author: ravitandon
 */

#include "SignalHandler.h"

struct sigaction sa;
struct sigaction oldSigAct;

bool SignalHandler::_isInit = false;

void prefetchObjects(void *addr){
	((GenCollectedHeap *)Universe::heap())->prefetch(Utility::getPageStart(addr), Utility::getPageEnd(addr));
}

void seg_handler(int sig, siginfo_t *si, void *unused){
  void *addr = (void *)si->si_addr;
  bool isJavaThread = false;
  if (si->si_code == SEGV_ACCERR && Utility::liesWithinHeap(addr)){
#if SWAP_METRICS
	  Thread *threadC = Thread::current();
	  SwapMetric::incrementSegFaults();
	  if(threadC->is_Java_thread()){
		  printf("Access Fault On %p, %d.\n", addr, Universe::getPageIndex(addr));
		  SwapMetric::incrementFaultsJavaThread();
		  isJavaThread = true;
	  } else if(threadC->is_Named_thread()){
		  if(Print_Trace){
			  void *array[10];
			  size_t size = backtrace(array, 10);
			  fprintf(stderr, "\nError: signal %d:, addr = %p\n", sig, addr);// print out all the frames to stderr
			  backtrace_symbols_fd(array, size, STDERR_FILENO);
		  }
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

#if SEGMENTATION_LOG
	  char *prefetchPosition = (char *)Universe::getPrefetchTablePosition(addr);
	  char prefetchValue = *prefetchPosition;
	  printf("Segmentation fault. "
			  "Add = %p, Page Index = %ld, IsSwappedOut Value = %d, Prefetch Value = %d, at position = %p.\n",
			  addr, Universe::getPageIndex(addr), value, prefetchValue, position);
		  fflush(stdout);
#endif

// Fall back option, when we cannot detect object accesses
	 if(!Universe::isPresent(addr)){
//		 if(isJavaThread && false)
//			 SSDSwap::CMS_handle_faults_prefetch(addr, true);
//		 else
			 SSDSwap::CMS_handle_faults(addr);
#if SEGMENTATION_LOG
			 printf("Segmentation fault at address = %p, handled.\n", addr);
			 fflush(stdout);
#endif
	 }
	 if((isJavaThread && JavaThreadPrefetch)){
		 prefetchObjects(addr);
	 }
	 return;
  }
  (*oldSigAct.sa_sigaction)(sig, si, unused);
}

void SignalHandler::init(){
	sa.sa_flags = SA_SIGINFO; // The siginfo_t structure is passed as a second parameter to the user signal handler function
	sigemptyset(&sa.sa_mask); // Emptying the signal set associated with the structure sigaction_t
	sa.sa_sigaction = seg_handler; // Assigning the fault handler
	if (sigaction(SIGSEGV, &sa, &oldSigAct) == -1){ // Installs the function in sa taken on a segmentation fault
		    perror("error :");
	}
	_isInit = true;
}

SignalHandler::SignalHandler() {
}


