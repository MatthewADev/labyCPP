#ifndef ICEMACHINE_H
#define ICEMACHINE_H
#include <iostream>

/**
 * @brief IceMachine
 * @class klasa okresla maszyne do lodow 
 */
class IceMachine{
    private:
        int id;
        bool state;
        double capacity;
        double consumption;
        int portions;
        double amount;
        
    public:
        /**
         * @brief Tworzy nowy obiekt
         */
        IceMachine();

        /**
         * @brief SetID 
         * Funkcja ustawia id maszyny 
         * @param id zmienna id
         */
        void SetID(int id);

        /**
         * @brief Set the State object
         * Funkcja okresla stan maszyny 
         * @param state zmienna stanu 
         * @return funkcja nic nie zwraca
         */
        void SetState(bool state);

        /**
         * @brief Set the Capacity object
         * Funkcja okresla pojemnosc maszyny
         * @param capacity zmienna pojemnosci 
         * @return funkcja nic nie zwraca
         */
        void SetCapacity(double capacity);

        /**
         * @brief Set the Consumption object
         * Funkcja okresla wydajnosc maszyny
         * @param consumption zmienna wydajnosci 
         * @return funkcja nic nie zwraca
         */
        void SetConsumption(double consumption);

        /**
         * @brief Set the Powder object
         * Funkcja okresla ilosc proszku 
         * @param powder zmienna proszku
         * @return funkcja nic nie zwraca
         */
        void SetPowder(double powder);

        /**
         * @brief Presentacja
         * Funkcja wykonuje prezentacje maszyny 
         * @return funkcja nic nie zwraca
         */
        void Presentation();

        /**
         * @brief Make
         * Funkcja robi lody
         * @param powder zmienna proszku 
         * @return funkcja nic nie zwraca
         */
        void Make(int powder);

        /**
         * @brief Start
         * Funkcja odpala maszyne
         * @return funkcja nic nie zwraca
         */
        void Start();

        /**
         * @brief Reload
         * Funkcja uzupelnia maszyne 
         * @param amount ilosc uzupelniacza
         * @return funkcja nic nie zwraca
         */
        void Reload(double amount);

        /**
         * @brief Stop
         * Funkcja wylacza maszyne
         * @return funkcja nic nie zwraca
         */
        void Stop();
        double powder;

        /**
         * @brief Get the Capacity object
         * Funkcja pobiera pojemnosc 
         * @return double 
         */
        double GetCapacity();

        /**
         * @brief Get the Powder object
         * Funkcja pobiera ilosc proszku 
         * @return double 
         */
        double GetPowder();
        

};

#endif