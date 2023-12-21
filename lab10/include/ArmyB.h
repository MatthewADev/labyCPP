#ifndef ARMYB_H
#define ARMYB_H

#include "AndroidSoldier.h"

/**
 * @brief Klasa ArmyC
 * 
 */
class ArmyB {
public:

    /**
     * @brief Konstruktor domyslny
     * 
     */
    ArmyB();

    /**
     * @brief Konstruktor przenoszacy
     * 
     * @param army 
     */
    ArmyB(const ArmyB& army);

    /**
     * @brief Przypisanie operatora 
     * 
     * @param army 
     * @return ArmyB& 
     */
    ArmyB& operator=(const ArmyB& army);

    /**
     * @brief Destruktor domyslny
     * 
     */
    ~ArmyB();

    /**
     * @brief Funkcja Add - dodaje element do tablicy
     * 
     * @param soldier 
     * @return Funkcja nic nie zwraca;
     */
    void Add(const AndroidSoldier& soldier);

    /**
     * @brief Funkcja Print - wypisuje w outpucie dane 
     * 
     * @return Funkcja nic nie zwraca
     */
    void Print() const;

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
    AndroidSoldier* soldiers;
    int count;
    int capacity;
};


#endif 