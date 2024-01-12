#ifndef ARMY_H
#define ARMY_H

#include "AndroidSoldier.h"
#include <vector>

/**
 * @brief Klasa Army
 * 
 */
class Army
{
    public: 
        /**
         * @brief Funkcja usuwa ostatni element
         * 
         */
        void Remove();

        /**
         * @brief Funkcja dodaje element na koniec
         * 
         * @param soldier 
         */
        void Add(const AndroidSoldier &soldier);

        /**
         * @brief Funkcja czysci wektor
         * 
         */
        void Clear();

        /**
         * @brief Przeladowanie operatora +
         * 
         * @param value 
         * @return Army 
         */
        Army operator+(int value);

        /**
         * @brief Przeladowanie operatora -
         * 
         * @param value 
         * @return Army 
         */
        Army operator-(int value);

        /**
         * @brief Przeladowanie operatora *
         * 
         * @param value 
         * @return Army 
         */
        Army operator*(int value);

        /**
         * @brief Przeladowanie operatora []
         * 
         * @param index 
         * @return AndroidSoldier& 
         */
        AndroidSoldier &operator[](int index);

        /**
         * @brief Przeladowanie operatora <<
         * 
         * @param os 
         * @param Army 
         * @return std::ostream& 
         */
        friend std::ostream &operator<<(std::ostream &os, const Army &Army);

    private:
        std::vector<AndroidSoldier> soldiers;
};


#endif