#include "AndroidSoldier.h"

AndroidSoldier::AndroidSoldier(int type, int quantity) : type(type), quantity(quantity) {}
        
AndroidSoldier AndroidSoldier::operator++(int)
{
    quantity++;
    return *this;
}

AndroidSoldier &AndroidSoldier::operator++()
{
    ++quantity;
    return *this;
}

AndroidSoldier AndroidSoldier::operator--(int)
{
    if(quantity > 0){
        quantity--;
    }
    return *this;
}

AndroidSoldier &AndroidSoldier::operator--()
{
    if(quantity > 0){
        --quantity;
    }
    return *this;
}

AndroidSoldier AndroidSoldier::operator+(int value)
{
    quantity += value;
    return *this;
}

AndroidSoldier AndroidSoldier::operator-(int value)
{
    quantity -= value;
    if(quantity < 0){
        quantity = 0;
    }
    return *this;
}

AndroidSoldier AndroidSoldier::operator*(int value)
{
    quantity *= value;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const AndroidSoldier &soldier)
{
    os << "typ: " << soldier.type << ", ilosc sztuk: " << soldier.quantity << std::endl;
    return os;
}
