/*
@author aracyla
@brief basic tests for rand_int generation
*/
#include <stdio.h>
#include "../core/include/randgen.h"

int tests_run = 0;

#define __fail() fprintf(stderr, "ERROR: %s line %d\n", __func__, __LINE__)
#define __assert(test) do { if(!(test)) {__fail(); return 1;}} while(0)

//ref: http://eradman.com/posts/tdd-in-c.html
