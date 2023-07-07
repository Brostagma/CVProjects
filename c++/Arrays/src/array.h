//
// Created by Ahmet Emin on 16.04.2023.
//
#include <cstdio>
#include <string>

#ifndef ARRAYS_ARRAY_H
#define ARRAYS_ARRAY_H
void printArray(int *array, int size);
void printArray(double *array, int size);
void printArray(std::string *array, int size);

int *createIntArray(int size);
double *createDoubleArray(int size);
std::string *createStringArray(int size);
#endif //ARRAYS_ARRAY_H
