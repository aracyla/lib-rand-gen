/**
 * @file utest.h
 * @author aracyla
 * @date 05 may 2018
 * @brief Header file containing simple calls for unit test
 *
 * Code based on: http://eradman.com/posts/tdd-in-c.html
 */

#ifndef _utest_h_
#define _utest_h_
#include <stdio.h>

int tests_run = 0;
int tests_ok = 0;

//@Description: print where the error ocurred
#define __fail() fprintf(stderr, "ERROR: %s in line %d\n", __func__, __LINE__)

//@Description: assert an expression
#define __assert(t) do { if(!(t)) {__fail(); return 1; } else { fprintf(stdout, "OK: %s\n", __func__);}} while(0)

//@Description: macro used to run the tests
#define __run_test(t) do { int r = t(); tests_run++; if(r == 0) tests_ok++;} while(0)

//@Description: macro to print the results of the test
#define __print_result() do { fprintf(stdout, "\n=======Summary======\nTests: %d\nPassed: %d\n", tests_run, tests_ok);} while(0)

#endif
