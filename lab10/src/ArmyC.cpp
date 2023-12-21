#include "ArmyC.h"
#include <iostream>

ArmyC::ArmyC()  : soldiers(new AndroidSoldier[10]), count(0), capacity(10) {}

ArmyC::ArmyC(const ArmyC& army) : count(army.count), capacity(army.capacity) {
    soldiers = new AndroidSoldier[capacity];
    for (int i = 0; i < count; ++i) {
        soldiers[i] = army.soldiers[i];
    }
}

ArmyC& ArmyC::operator=(const ArmyC& army) {
    if (this != &army) {
        delete[] soldiers;

        count = army.count;
        capacity = army.capacity;

        soldiers = new AndroidSoldier[capacity];
        for (int i = 0; i < count; ++i) {
            soldiers[i] = army.soldiers[i];
        }
    }
    return *this;
}

ArmyC::ArmyC(ArmyC&& army) : soldiers(army.soldiers), count(army.count), capacity(army.capacity) {
    army.soldiers = nullptr;
    army.count = 0;
    army.capacity = 0;
}

ArmyC& ArmyC::operator=(ArmyC&& army) {
    if (this != &army) {
        delete[] soldiers;

        soldiers = army.soldiers;
        count = army.count;
        capacity = army.capacity;

        army.soldiers = nullptr;
        army.count = 0;
        army.capacity = 0;
    }
    return *this;
}

ArmyC::~ArmyC() {
    delete[] soldiers;
}

void ArmyC::Add(const AndroidSoldier& soldier) {
    if (count < capacity) {
        soldiers[count++] = soldier;
    }
}

void ArmyC::Print() const {
    std::cout << "---\n# Zawartosc/sklad:\n";
    
    
        for (int i = 0; i < count; ++i) {
            soldiers[i].Print();
        }
    
    std::cout << "---\n";
}

void ArmyC::Remove() {
    if (count > 0) {
        --count;
    }
    else {
        std::cout << "BLAD: Pusto !\n";
    }
}

void ArmyC::Clear() {
    count = 0;
}

