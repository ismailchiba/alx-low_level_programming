#ifndef SEARCH_H
#define SEARCH_H

#include<stdio.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_index(int *array, size_t L_index, size_t R_index, int value);
void print_array(int *array, size_t l, size_t r);
#endif