#ifndef SOLDIER_H
#define SOLDIER_H

#include <iostream>

/**
 * @brief Klasa Android Soldier
 * 
 */
class AndroidSoldier
{
    public :

        /**
         * @brief Konstruktor domyslny klasy AndroidSoldier
         * 
         * @param type zmienna int okreslajaca typ
         * @param quantity zmienna int okreslajaca ilosc
         */
        AndroidSoldier(int type, int quantity);
    
        /**
        * @brief Funkcja ustawiajaca wartosc ilosci
         * 
         * @param quantity ilosc
         * @return funkcja nic nie zwraca
         */
        void SetCard(int quantity);
    
        /**
         * @brief Funkcja wypisujaca print
         * @return funkcja ta nic nie zwraca
         */
        void Print() const;

    private:

        int type;
        int quantity;
};


#endif