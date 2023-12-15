#ifndef ANDROIDSOLDIER_H
#define ANDROIDSOLDIER_H

#include <iostream>

/**
 * @brief Klasa AndroidSoldier
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

        explicit AndroidSoldier(int type);
    
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

        /**
         * @brief Konwersja na int 
         * 
         * @return zwraca int quantity
         */
        operator int() const;

        /**
         * @brief Konwersja na string 
         * 
         * @return zwraca std::string wypisuja
         */
        std::string ToString() const;

        /**
         * @brief konwersja na string
         * 
         * @return zwraca ToString(); 
         */
        operator std::string() const;

        /**
         * @brief Pobiera ilosc
         * 
         * @return zwraca int quantity
         */
        int GetQuantity() const;

    private:

        int type;
        int quantity;
};

int Compare(const AndroidSoldier& e1, const AndroidSoldier& e2);

#endif