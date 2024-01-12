#include "Army.h"
#include <vector>


void Army::Remove()
{
    if(!soldiers.empty())
    {
        soldiers.pop_back();
    }
   
}

void Army::Add(const AndroidSoldier &soldier)
{
    soldiers.push_back(soldier);
}

void Army::Clear()
{
    soldiers.clear();
}

Army Army::operator+(int value)
{
    for(auto& soldier : soldiers)
    {
        soldier = soldier + value;
    }
    return *this;
}

Army Army::operator-(int value)
{
    for(auto& soldier : soldiers)
    {
        soldier = soldier - value;
    }
    return *this;
}

Army Army::operator*(int value)
{
    for(auto& soldier : soldiers)
    {
        soldier = soldier * value;
    }
    return *this;
}

AndroidSoldier &Army::operator[](int index)
{
    return soldiers[index];
}

std::ostream &operator<<(std::ostream &os, const Army &army)
{
    os << "---\n# Zawartosc/sklad:\n---\n";
    if(army.soldiers.empty())
    {
        os << "BLAD: Pusto !" << std::endl;
    }
    else
    {
        for(const auto& soldier : army.soldiers)
        {
            os << soldier;
        }
    }
    os << "---\n";
    return os;
}
