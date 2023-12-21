#include "AndroidSoldier.h"
#include <iostream>

AndroidSoldier::AndroidSoldier() : type(0), quantity(0) {}

AndroidSoldier::AndroidSoldier(int type, int quantity) : type(type), quantity(quantity) {}

void AndroidSoldier::Print() const {
    std::cout << "typ: " << type << ", ilosc sztuk: " << quantity << std::endl;
}