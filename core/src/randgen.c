#include "../include/randgen.h"

int* rand_int_arr(int l, int u, int n){
    int i, *r;
    srand(time(NULL));
    r = (int*)malloc(sizeof(int)*n);
    if(!r) return NULL;
    for(i = 0; i < n; i++){
        r[i] = (int)l+rand()%(abs(u-l));
    }
    return r;
}

double* rand_double_arr(double l, double u, int n){
    int i;
    double *r;
    srand(time(NULL));
    r = (double*)malloc(sizeof(double) * n);
    if(!r) return NULL;
    for(i = 0; i < n; i++){
        r[i] = (double)(l+rand()%(abs(u-l)));
    }
    return r;
}


int** rand_int_mat(int l, int u, int rows, int cols){
    int **a;
    int i, j;

    srand(time(NULL));
    a = (int**)malloc(sizeof(int*) * rows);
    if(!a) return NULL;
    for(i = 0; i < rows; i++) {
        a[i] = malloc(sizeof(int) * cols);
        if(!a[i]) {
            for(j = 0; j < i; j++) free(a[j]);
            free(a);
            return NULL;
        }
        for(j = 0; j < cols; j++){
            a[i][j] = (int)l+rand()%(abs(u-l));;
        }
    }

    return a;
}

double** rand_double_mat(double l, double u, int rows, int cols){
    double **a;
    int i, j;

    srand(time(NULL));
    a = (double**)malloc(sizeof(double*) * rows);
    if(!a) return NULL;
    for(i = 0; i < rows; i++) {
        a[i] = malloc(sizeof(double) * cols);
        if(!a[i]) {
            for(j = 0; j < i; j++) free(a[j]);
            free(a);
            return NULL;
        }
        for(j = 0; j < cols; j++){
            a[i][j] = (double)(l+rand()%(abs(u-l)));
        }
    }
    return a;
}

void free_rand_mat(void** matrix, int rows){
    int i, j;
    for(i = 0; i < rows; i++){
        free(matrix[i]);
    }
    free(matrix);
}
