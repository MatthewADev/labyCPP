#include "ArmyA.h"
#include <iostream>

ArmyA::ArmyA() : count(0) {}

void ArmyA::Print() const {
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

void ArmyA::Add(const AndroidSoldier& soldier) {
    if (count < 10) {
        soldiers[count++] = soldier;
    }
}

void ArmyA::Remove() {
    if (count > 0) {
        --count;
    }
}

void ArmyA::Clear() {
    count = 0;
}
 