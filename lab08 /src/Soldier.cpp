#include "Soldier.h"

AndroidSoldier::AndroidSoldier(int type, int quantity) : type(type), quantity(quantity) {}

void AndroidSoldier::SetCard(int quantity)
{
    this->quantity = quantity;
}

void AndroidSoldier::Print() const
{
    std::cout << "typ: " << type << ", ilosc sztuk: " << quantity << std::endl;
}

