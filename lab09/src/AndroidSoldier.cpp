#include "AndroidSoldier.h"

AndroidSoldier::AndroidSoldier(int type, int quantity) : type(type), quantity(quantity) {}

AndroidSoldier::AndroidSoldier(int type) : type(type), quantity(0) {}

void AndroidSoldier::SetCard(int quantity)
{
    this->quantity = quantity;
}

void AndroidSoldier::Print() const
{
    std::cout << "typ: " << type << ", ilosc sztuk: " << quantity << std::endl;
}

AndroidSoldier::operator int() const
{
    return quantity;
}

std::string AndroidSoldier::ToString() const
{
    return "<typ=" + std::to_string(type) + ", ilosc=" + std::to_string(quantity) + ">";
}

AndroidSoldier::operator std::string() const
{
    return ToString();
}

int AndroidSoldier::GetQuantity() const
{
    return quantity;
}

int Compare(const AndroidSoldier& e1, const AndroidSoldier& e2)
{
    if(e1.GetQuantity() < e2.GetQuantity())
    {
        return -1;
    }
    else if(e1.GetQuantity() > e2.GetQuantity())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}