#ifndef ANDROIDSOLDIER_H
#define ANDROIDSOLDIER_H

#include <iostream>

/**
 * @brief Klasa AndroidSoldier
 * 
 */
class AndroidSoldier 
{
    public: 
        /**
         * @brief Konstruktor przypisujacy typ i ilosc
         * 
         * @param type 
         * @param quantity 
         */
        AndroidSoldier(int type, int quantity);
        
        /**
         * @brief Przeladowanie operatora i++
         * 
         * @return AndroidSoldier 
         */
        AndroidSoldier operator++(int);

        /**
         * @brief Przeladowanie operatora ++i
         * 
         * @return AndroidSoldier& 
         */
        AndroidSoldier &operator++();

        /**
         * @brief Przeladowanie operatora i--
         * 
         * @return AndroidSoldier 
         */
        AndroidSoldier operator--(int);

        /**
         * @brief Przeladowanie operatora --i
         * 
         * @return AndroidSoldier& 
         */
        AndroidSoldier &operator--();

        /**
         * @brief Przeladowanie operatora +
         * 
         * @param value 
         * @return AndroidSoldier 
         */
        AndroidSoldier operator+(int value);

        /**
         * @brief Przeladowanie operatora -
         * 
         * @param value 
         * @return AndroidSoldier 
         */
        AndroidSoldier operator-(int value);

        /**
         * @brief Przeladowanie operatora *
         * 
         * @param value 
         * @return AndroidSoldier 
         */
        AndroidSoldier operator*(int value);

        /**
         * @brief Przeladowanie operatora <<
         * 
         * @param os 
         * @param soldier 
         * @return std::ostream& 
         */
        friend std::ostream &operator<<(std::ostream &os, const AndroidSoldier &soldier);

    private: 
        int type;
        int quantity;
};


#endif