#include "Array.h"
#include <iostream>


int *InitArray(int arraySize)
{
    int *array = new int[arraySize];
    return array;
}

void CreateSequence(int *array, int arraySize)
{
    for(int i = 1; i <= arraySize; i++){
        array[i] = array[i-1] + i;
    }

}

int *ChangeArraySize(int *array, int arraySize, int newArraySize)
{
    int *newArray = new int[newArraySize];
        for(int i = 0; i < arraySize; i++){
            newArray[i] = array[i];
        }
        delete []array;
        return newArray;
}

void DeleteArray(int *array)
{
    delete []array;
}
