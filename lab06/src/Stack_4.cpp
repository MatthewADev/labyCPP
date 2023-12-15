#include "Stack_4.h"


Stack_4::Stack_4(){}

Stack_4::~Stack_4(){}

void Stack_4::Push(int value)
{
    data.push_back(value);
}

int Stack_4::Pop()
{
    if (!IsEmpty()) {
        int value = data.back();
        data.pop_back();
        return value;
    } 
    else {
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return 0;
    }
}

bool Stack_4::IsEmpty() const
{
    return data.empty();
}

bool Stack_4::IsFull() const
{
    return false;
}

void Stack_4::Print() const
{
    std::cout << "#Zawartosc obiektu:\n";
    for(const int& value : data){
        std::cout << value << ",";
    }
    std::cout << std::endl;
}

int Stack_4::Size() const
{
    return data.size();
}

void Stack_4::Clear()
{
    return data.clear();
}