#include "Queue_1.h"


Queue_1::Queue_1() : currentSize(0){}

Queue_1::~Queue_1(){}

void Queue_1::Enqueue(int value)
{
    if(currentSize < maxSize){
        for (int i = currentSize; i > 0; i--){
            data[i] = data[i-1];
        }
        data[0] = value;
        ++currentSize;
    } else {
        std::cout << "#BLAD: Obiekt zapełniony\n";
    }
}

int Queue_1::Dequeue()
{
    if(!IsEmpty()){
        return data[--currentSize];
    }
    else{
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return 0;
    }
}

bool Queue_1::IsEmpty() const
{
    return currentSize == 0;
}

bool Queue_1::IsFull() const
{
    return currentSize == maxSize;
}

void Queue_1::Print() const
{
    std::cout << "#Zawartosc obiektu:\n";
    for(int i = currentSize - 1; i >= 0; --i){
        std::cout << data[i] << ",";
    }
    std::cout << std::endl;
}

int Queue_1::Size() const
{
    return currentSize;
}

void Queue_1::Clear()
{
    currentSize = 0;
}