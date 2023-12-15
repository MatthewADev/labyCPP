#include "Army.h"

Army::Army() {}

Army::Army(const AndroidSoldier& e1) 
{
    soldiers.push_back(e1);
}

Army::Army(const AndroidSoldier& e1, const AndroidSoldier& e2) 
{
    soldiers.push_back(e1);
    soldiers.push_back(e2);
}

Army::Army(int n, AndroidSoldier* t[]) 
{
    for(int i = 0; i < n; ++i)
    {
        soldiers.push_back(*t[i]);
    }
}

Army::Army(const std::vector<AndroidSoldier>& v) : soldiers(v) {}

Army::Army(const Army& other) : soldiers(other.soldiers) {}

Army::Army(Army&& other) : soldiers(std::move(other.soldiers)){}

Army::~Army() {}

void Army::Add(const AndroidSoldier& e)
{
    soldiers.push_back(e);
}

void Army::Remove()
{
    if(!soldiers.empty())
    {
        soldiers.pop_back();
    }
    else
    {
        std::cout << "BLAD: Pusto !" << std::endl;
    }
}

void Army::Clear()
{
    soldiers.clear();
}

void Army::Print() const
{
    std::cout << "---" << std::endl;
    std::cout << "# Zawartosc/sklad:" << std::endl;
    for(auto& soldier : soldiers)
    {
        soldier.Print();
    }
    std::cout << "---" << std::endl;
}

Army::operator int() const
{
    int sum = 0;
    for(const auto& e : soldiers)
    {
        sum += static_cast<int>(e);
    }
    return sum;
}

