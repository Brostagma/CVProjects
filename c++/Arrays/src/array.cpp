//
// Created by Ahmet Emin on 16.04.2023.
//

#include "array.h"


void printArray(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void printArray(double *array, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%f ", array[i]);
    }
    printf("\n");
}

void printArray(std::string *array, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%s ", array[i].c_str());
    }
    printf("\n");
}

int *createIntArray(int size) {
    int *array;
    array = new int[size];
    for (int i = 0; i < size; ++i) {
        array[i] = i;
    }
    return array;
}

firefdouble *createDoubleArray(int size) {
    double *array;
    array = new double[size];
    for (int i = 0; i < size; ++i) {
        array[i] = i;
    }
    return array;
}

std::string *createStringArray(int size) {
    std::string *array;
    array = new std::string[size];
    for (int i = 0; i < size; ++i) {
        array[i] = std::to_string(i);
    }
    return array;
}