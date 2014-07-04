/*
 * SwapWriter.cpp
 *
 *  Created on: May 14, 2014
 *      Author: ravitandon
 */

#include "SwapWriter.h"
#include "SSDManager.h"
#include "SwapMetric.h"

SwapWriter::SwapWriter() {
	// TODO Auto-generated constructor stub
}

SwapWriter::~SwapWriter() {
	// TODO Auto-generated destructor stub
}

void check(){
	char file[] = "/home/tandon/swap.txt";
	FILE *f = fopen(file, "r");
	fseek(f, (long)(0), SEEK_SET);
	char va ;
	int count, sum = 0;
	for (count = 0; count < 4096 * 256; count++){
		fread(&va, sizeof(char),  1, f);
		if(va){
//			printf("%d,", va);
			sum++;
		}
	}
	fclose(f);
	if(sum == 0){
		printf("All zeros. Something is wrong.\n");
		exit(-1);
	}
}

// Writes a set number of pages to the offset in the file, assumes the page to be unprotected.
// Page needs to be protected later on.
SSDRange SwapWriter::swapOut (void * va, int np, int off){
	if (L_SWAP){
		  printf("In swapOut, writer writing out %d, bottom %p, offset %d\n", np, va, off);
		  fflush(stdout);
	}
	  char file[] = "/home/tandon/swap.txt";
	  FILE *f = fopen(file, "w");
	  if (f == NULL){
		  printf("Error opening swap file \n"); fflush(stdout);
		  exit(-1);
	  }
	  fseek(f, (long)(off * _PAGE_SIZE), SEEK_SET);
	  if(ferror(f)){
		  printf("Error seeking to %d of file %s\n", off, file);
		  fflush(stdout);
		  exit(-1);
	  }

	  // What happens when another thread writes on the address space when that part of the address space is being swapped out ?
	  size_t len = fwrite(va, sizeof(char), (long)(np * _PAGE_SIZE), f);
	  if (len == 0){
		  fputs ("Error writing swap file\n", stderr);
		  fflush(stdout);
	  } else {
		  if(L_SWAP){
			  printf("Written %zd bytes to the file\n", len);
			  fflush(stdout);
		  }
	  }
	  fclose (f);
	  check();
	  SwapMetric::incrementSwapOutsV(np);
	  SwapMetric::incrementSwapOutBytes(np*_PAGE_SIZE);

	  return SSDRange (off, off + (np-1), np);
}

