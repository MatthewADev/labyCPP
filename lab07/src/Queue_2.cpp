#include "Queue_2.h"


Queue_2::Queue_2() : currentSize(0){}

Queue_2::~Queue_2(){}

void Queue_2::Enqueue(int value)
{
    if(currentSize < data.size()){
        for (int i = currentSize; i > 0; i--){
            data[i] = data[i-1];
        }
        data[0] = value;
        ++currentSize;
    } else {
        std::cout << "#BLAD: Obiekt zapełniony\n";
    }
}

int Queue_2::Dequeue()
{
    if(!IsEmpty()){
        return data[--currentSize];
    }
    else{
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return 0;
    }
}

bool Queue_2::IsEmpty() const
{
    return currentSize == 0;
}

bool Queue_2::IsFull() const
{
    return currentSize == data.size();
}

void Queue_2::Print() const
{
    std::cout << "#Zawartosc obiektu:\n";
    for(int i = currentSize - 1; i >= 0; --i){
        std::cout << data[i] << ",";
    }
    std::cout << std::endl;
}

int Queue_2::Size() const
{
    return currentSize;
}

void Queue_2::Clear()
{
    currentSize = 0;
}