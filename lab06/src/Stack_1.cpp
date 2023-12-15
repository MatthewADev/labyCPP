#include "Stack_1.h"


Stack_1::Stack_1() : currentSize(0){}

Stack_1::~Stack_1(){}

void Stack_1::Push(int value)
{
    if(currentSize < maxSize){
        data[currentSize++] = value;
    }
    else{
        std::cout << "#BLAD: Obiekt zapelniony" << std::endl;
    }
}

int Stack_1::Pop()
{
    if(!IsEmpty()){
        return data[--currentSize];
    }
    else{
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return 0;
    }
}

bool Stack_1::IsEmpty() const
{
    return currentSize == 0;
}

bool Stack_1::IsFull() const
{
    return currentSize == maxSize;
}

void Stack_1::Print() const
{
    std::cout << "#Zawartosc obiektu:\n";
    for(int i = 0; i < currentSize; i++){
        std::cout << data[i] << ",";
    }
    std::cout << std::endl;
}

int Stack_1::Size() const
{
    return currentSize;
}

void Stack_1::Clear()
{
    currentSize = 0;
}