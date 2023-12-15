#include "Stack_2.h"


Stack_2::Stack_2() : currentSize(0){}

Stack_2::~Stack_2(){}

void Stack_2::Push(int value)
{
    if(currentSize < data.size()){
        data[currentSize++] = value;
    }
    else{
        std::cout << "#BLAD: Obiekt zapelniony" << std::endl;
    }
}

int Stack_2::Pop()
{
    if(!IsEmpty()){
        return data[--currentSize];
    }
    else{
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return 0;
    }
}

bool Stack_2::IsEmpty() const
{
    return currentSize == 0;
}

bool Stack_2::IsFull() const
{
    return currentSize == data.size();
}

void Stack_2::Print() const
{
    std::cout << "#Zawartosc obiektu:\n";
    for(int i = 0; i < currentSize; i++){
        std::cout << data[i] << ",";
    }
    std::cout << std::endl;
}

int Stack_2::Size() const
{
    return currentSize;
}

void Stack_2::Clear()
{
    currentSize = 0;
}