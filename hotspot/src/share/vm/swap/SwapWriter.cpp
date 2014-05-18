/*
 * SwapWriter.cpp
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#include "SwapWriter.h"
#include "SSDManager.h"

SwapWriter::SwapWriter() {
	// TODO Auto-generated constructor stub
}

SwapWriter::~SwapWriter() {
	// TODO Auto-generated destructor stub
}

// Writes a set number of pages to the offset in the file, assumes the page to be unprotected.
// Page needs to be protected later on.
SSDRange SwapWriter::swapOut (void * va, int np, int off){
	if (L_SWAP){
		  printf("In swapOut, writer writing out %d, top %p, offset %d\n", np, va, off); fflush(stdout);
	}
	  char file[] = "/home/tandon/swap.txt";
	  FILE *f = fopen(file, "w");
	  if (f == NULL){
		  printf("Error opening swap file \n"); fflush(stdout);
		  exit(-1);
	  }
	  fseek(f, off, SEEK_SET);
	  if(ferror(f)){
		  printf("Error seeking to %d of file %s\n", off, file);
	  }

	  // What happens when another thread writes on the address space when that part of the address space is being swapped out ?
	  size_t len = fwrite(va, sizeof(char), np * PAGE_SIZE, f);
	  if (len == 0){
		  fputs ("Error writing swap file\n", stderr); fflush(stdout);
	  } else {
		printf("Written %zd bytes to the file\n", len); fflush(stdout);
	  }
	  fclose (f);
	  return SSDRange (off, off + (np-1) * PAGE_SIZE);
}

