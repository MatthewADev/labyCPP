#ifndef ARMYC_H
#define ARMYC_H

#include "AndroidSoldier.h"


/**
 * @brief Klasa ArmyC
 * 
 */
class ArmyC {
public:

    /**
     * @brief Konstruktor domyslny
     * 
     */
    ArmyC();

    /**
     * @brief Konstruktor kopiujacy
     * 
     * @param army 
     */
    ArmyC(const ArmyC& army);

    /**
     * @brief Przypisanie operatora 
     * 
     * @param army 
     * @return ArmyC& 
     */
    ArmyC& operator=(const ArmyC& army);

    /**
     * @brief Konstruktor przenoszacy
     * 
     * @param army 
     */
    ArmyC(ArmyC&& army);

    /**
     * @brief Przypisanie operatora 
     * 
     * @param army 
     * @return ArmyC& 
     */
    ArmyC& operator=(ArmyC&& army);

    /**
     * @brief Destruktor domyslny
     * 
     */
    ~ArmyC();

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