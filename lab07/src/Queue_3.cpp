#include "Queue_3.h"


Queue_3::Queue_3(int initialSize) : currentSize(0), maxSize(initialSize)
{
    data = new int[maxSize];
}

Queue_3::~Queue_3()
{
    delete[] data;
}

void Queue_3::Enqueue(int value)
{
    if (currentSize < maxSize)
    {
        for (int i = currentSize; i > 0; i--)
        {
            data[i] = data[i - 1];
        }
        data[0] = value;
        ++currentSize;
    }
    else
    {
        int *newData = new int[maxSize * 2];
        for (int i = 0; i < currentSize; ++i)
        {
            newData[i + 1] = data[i];
        }
        delete[] data;
        data = newData;
        maxSize *= 2;

        data[0] = value;
        ++currentSize;
    }
}

int Queue_3::Dequeue()
{
    if(!IsEmpty()){
        return data[--currentSize];
    }
    else{
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return 0;
    }
}

bool Queue_3::IsEmpty() const
{
    return currentSize == 0;
}

bool Queue_3::IsFull() const
{
    return currentSize == maxSize;
}

void Queue_3::Print() const
{
    std::cout << "#Zawartosc obiektu:\n";
    for(int i = currentSize - 1; i >= 0; --i){
        std::cout << data[i] << ",";
    }
    std::cout << std::endl;
}

int Queue_3::Size() const
{
    return currentSize;
}

void Queue_3::Clear()
{
    currentSize = 0;
}