#include "Queue_4.h"


Queue_4::Queue_4(){}

Queue_4::~Queue_4(){}

void Queue_4::Enqueue(int value)
{
    data.insert(data.begin(), value);
}

int Queue_4::Dequeue()
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

bool Queue_4::IsEmpty() const
{
    return data.empty();
}

bool Queue_4::IsFull() const
{
    return false;
}

void Queue_4::Print() const
{
    std::cout << "#Zawartosc obiektu:\n";
    for(const int& value : std::vector<int>(data.rbegin(), data.rend())){
        std::cout << value << ",";
    }
    std::cout << std::endl;
}

int Queue_4::Size() const
{
    return data.size();
}

void Queue_4::Clear()
{
    return data.clear();
}