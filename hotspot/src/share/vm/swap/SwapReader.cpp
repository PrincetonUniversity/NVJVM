/*
 * SwapReader.cpp
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#include "SwapReader.h"
#include "SwapMetric.h"


SwapReader::SwapReader() {
	// TODO Auto-generated constructor stub

}

SwapReader::~SwapReader() {
	// TODO Auto-generated destructor stub
}

size_t SwapReader::swapInOffset (void* va, int numberBytes, int ssdOffset){
	 if(L_SWAP && REMAP){
		 printf("swapping in address %p, number of bytes = %d, from offset %d\n", va, numberBytes, ssdOffset);
		 fflush(stdout);
	 }
	  FILE *f = fopen("/home/tandon/swap.txt", "r");
	  fseek(f, (long)(ssdOffset), SEEK_SET);
/*
		if (mprotect (va, np*_PAGE_SIZE, PROT_NONE) == -1){
			perror("error :");
			printf("Error In Removing Protection From Page %p \n", va);
			fflush(stdout);
			exit(1);
		}
*/
//	  size_t len = fread(va, sizeof(char), (long)(numberBytes), f);
	  size_t len = numberBytes;
	  int numPages = (numberBytes-1)/_PAGE_SIZE + 1;

	  SwapMetric::incrementSwapInsV(numPages);
	  SwapMetric::incrementSwapInBytes((int)numberBytes);

	  if ((int)len != numberBytes){
		  fputs ("Error reading swap file\n", stderr); fflush(stdout);
		  exit(1);
	  } else {
		  if (L_SWAP && REMAP){
			  printf("Read %zd bytes from the file\n", len); fflush(stdout);
		  }
	  }
	  fclose (f);
	  return len;
}
