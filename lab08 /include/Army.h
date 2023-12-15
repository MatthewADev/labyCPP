#ifndef ARMY_H
#define ARMY_H

#include <vector>
#include "Soldier.h"


/**
 * @brief Klasa Army
 * 
 */
class Army
{
    public:
        
        /**
         * @brief Konstruktor domyslny klasy Army
         * 
         */
        Army();
        
        /**
         * @brief Konstruktor tworzacy zolnieza
         * 
         * @param e1 pierwszy zolniez 
         */
        Army(const AndroidSoldier& e1);
        
        /**
         * @brief Konstruktor tworzacy dwoch zolniezy
         * 
         * @param e1 pierwszy zolniez 
         * @param e2 drugi zolniez 
         */
        Army(const AndroidSoldier& e1, const AndroidSoldier& e2);
        
        /**
         * @brief Konstruktor z tablica zolniezy 
         * 
         * @param n ilosc zolniezy w tablicy
         * @param t wskaznik na tablice
         */
        Army(int n, AndroidSoldier* t[]);
        
        /**
         * @brief Konstruktor z wektorem zolniezy 
         * 
         * @param v wektor obiektow zolniezy
         */
        Army(const std::vector<AndroidSoldier>& v);
        
        /**
         * @brief Konstruktor kopiujacy z klasy Army 
         * 
         * @param other armia do skopiowania 
         */
        Army(const Army& other);
        
        /**
         * @brief Konstruktor przenoszacy z klasy Army 
         * 
         * @param other armia do przeniesienia 
         */
        Army(Army&& other);
        
        /**
         * @brief Destruktor klasy Army
         * 
         */
        ~Army();

        /**
         * @brief Funkcja dodajaca zolnieza do armii
         * 
         * @param e zolniez do dodania 
         */
        void Add(const AndroidSoldier& e);
        
        /**
         * @brief Funkcja usuwa zolnieza z armii
         * 
         */
        void Remove();
        
        /**
         * @brief Funkcja czysci cala armie 
         * 
         */
        void Clear();
        
        /**
         * @brief Funkcja wyswietla informacje o zolniezach 
         * 
         */
        void Print() const;

    private:
        std::vector<AndroidSoldier> soldiers;
};

#endif