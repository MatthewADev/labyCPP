#include "Stack_3.h"


Stack_3::Stack_3(int initialSize) : currentSize(0), maxSize(initialSize)
{
    data = new int[maxSize];
}

Stack_3::~Stack_3()
{
    delete[] data;
}

void Stack_3::Push(int value)
{
    if(currentSize < maxSize){
        data[currentSize++] = value;
    }
    else{
        int *newData = new int[maxSize * 2];
        for(int i = 0; i < currentSize; i++){
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        maxSize *= 2;

        data[currentSize++] = value;
    }
}

int Stack_3::Pop()
{
    if(!IsEmpty()){
        return data[--currentSize];
    }
    else{
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return 0;
    }
}

bool Stack_3::IsEmpty() const
{
    return currentSize == 0;
}

bool Stack_3::IsFull() const
{
    return currentSize == maxSize;
}

void Stack_3::Print() const
{
    std::cout << "#Zawartosc obiektu:\n";
    for(int i = 0; i < currentSize; i++){
        std::cout << data[i] << ",";
    }
    std::cout << std::endl;
}

int Stack_3::Size() const
{
    return currentSize;
}

void Stack_3::Clear()
{
    currentSize = 0;
}