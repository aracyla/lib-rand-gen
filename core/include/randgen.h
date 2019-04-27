/**
 * @file randgen.h
 * @author aracyla
 * @date 27 april 2018
 * @brief Header file of wrapper for random simple functions
 *
 * This header declares the accessable functions and types used in the definition/implementation
 */
#ifndef         randgen
#define         randgen

#include <stdlib.h>
#include <time.h>


/*!
 Generate a random array of numbers. Note that this array should be freed after usage.
 @param[in] l Lowest number possible that should be generated.
 @param[in] u Highest number possible that should be generated.
 @param[in] n Size of the array.
 @return An array of ints containing n elements.
 @author aracyla
*/
int* rand_int_arr(int l, int u, int n);


/*!
 Generate a random matrix rows x cols.
 @param[in] l Lowest number possible that should be generated.
 @param[in] u Highest number possible that should be generated.
 @param[in] rows Number of rows of the matrix.
 @param[in] cols Number of cols of the matrix.
 @return A matrix of ints rows x cols.
 @author aracyla
*/
int** rand_int_mat(int l, int u, int rows, int cols);


/*!
 Free the matrix allocated by rand_int_mat().
 @param[in] matrix The matrix to be freed.
 @param[in] rows The number of rows of the matrix.
*/
void free_rand_mat(void** matrix, int rows);

#endif
