#include <iostream>

#include "src/array.h"

int main() {
    int arrayLocal[5] = {1, 2, 3, 4, 5};
    printArray(arrayLocal, 5);

    int *arrayInt = createIntArray(5);
    printArray(arrayInt, 5);

    double *arrayDouble = createDoubleArray(5);
    printArray(arrayDouble, 5);

    std::string *arrayString = createStringArray(5);
    printArray(arrayString, 5);
    return 0;
}