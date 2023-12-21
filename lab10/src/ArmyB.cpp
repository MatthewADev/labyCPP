#include "ArmyB.h"
#include <iostream>

ArmyB::ArmyB()  : soldiers(new AndroidSoldier[10]), count(0), capacity(10) {}

ArmyB::ArmyB(const ArmyB& army) : count(army.count), capacity(army.capacity) {
    if (capacity > 0) {
        soldiers = new AndroidSoldier[capacity];
        for (int i = 0; i < count; ++i) {
            soldiers[i] = army.soldiers[i];
        }
    } else {
        soldiers = nullptr;
    }
}


ArmyB& ArmyB::operator=(const ArmyB& army) {
    if (this != &army) {
        count = army.count;
        capacity = army.capacity;
        delete[] soldiers;
        soldiers = new AndroidSoldier[capacity];
        for (int i = 0; i < count; ++i) {
            soldiers[i] = army.soldiers[i];
        }
    }
    return *this;
}

ArmyB::~ArmyB() {
    delete[] soldiers;
}


void ArmyB::Add(const AndroidSoldier& soldier) {
    if (count < capacity) {
        soldiers[count++] = soldier;
    }
}

void ArmyB::Print() const {
    std::cout << "---\n# Zawartosc/sklad:\n---\n";
    if (count == 0) {
        std::cout << "BLAD: Pusto !\n";
    } else {
        for (int i = 0; i < count; ++i) {
            soldiers[i].Print();
        }
    }
    std::cout << "---\n";
}

void ArmyB::Remove() {
    if (count > 0) {
        --count;
    }
}

void ArmyB::Clear() {
    count = 0;
}
