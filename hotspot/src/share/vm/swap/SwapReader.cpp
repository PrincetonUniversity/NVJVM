/*
 * SwapReader.cpp
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#include "SwapReader.h"


SwapReader::SwapReader() {
	// TODO Auto-generated constructor stub

}

SwapReader::~SwapReader() {
	// TODO Auto-generated destructor stub
}

// Reads the page from the offset in the file, assumes the page to be unprotected
size_t SwapReader::swapIn (void * va, int np, int off){
	 if(L_SWAP){
		 printf("swapping in address %p, number pages %d, from offset %d\n", va, np, off);
		 fflush(stdout);
	 }
	  FILE *f = fopen("/home/tandon/swap.txt", "r");
	  fseek(f, (long)(off * _PAGE_SIZE), SEEK_SET);
/*
		if (mprotect (va, np*_PAGE_SIZE, PROT_NONE) == -1){
			perror("error :");
			printf("Error In Removing Protection From Page %p \n", va);
			fflush(stdout);
			exit(1);
		}
*/
	  size_t len = fread(va, sizeof(char), (long)(np*_PAGE_SIZE), f);
	  if (len == 0){
		  fputs ("Error reading swap file\n", stderr); fflush(stdout);
		  return -1;
	  } else {
		  if (L_SWAP){
			  printf("Read %zd bytes from the file\n", len); fflush(stdout);
			  return -1;
		  }
	  }
	  fclose (f);
	  return len;
}
