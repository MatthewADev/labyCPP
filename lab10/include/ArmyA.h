#ifndef ARMYA_H
#define ARMYA_H

#include "AndroidSoldier.h"

/**
 * @brief Klasa ArmyA
 * 
 */
class ArmyA {
public:

    /**
     * @brief Konstruktor domyslny
     * 
     */
    ArmyA();

    /**
     * @brief Funkcja Print - wypisuje w outpucie dane 
     * 
     * @return Funkcja nic nie zwraca
     */
    void Print() const;

    /**
     * @brief Funkcja Add - dodaje element do tablicy
     * 
     * @param soldier 
     * @return Funkcja nic nie zwraca;
     */
    void Add(const AndroidSoldier& soldier);

    /**
     * @brief Funkcja Remove - usuwa element tablicy;
     * 
     * @return Funkcja nic nie zwraca
     */
    void Remove();

    /**
     * @brief Funkcja Clear - czysci tablice
     * 
     * @return Funkcja nic nie zwraca
     */
    void Clear();

private:
    AndroidSoldier soldiers[10];
    int count;
};



#endif 