#ifndef QUEUE_1_H
#define QUEUE_1_H

#include <iostream>

/**
 * @brief klasa Queue_1
 * 
 */
class Queue_1 {
    public:

        /**
         * @brief Konstruktor nowego obiektu 
         * 
         */
        Queue_1();

        /**
         * @brief Dekonsturktor obiektu 
         * 
         */
        ~Queue_1();
        
        /**
         * @brief Funkcja dodajaca element do tablicy
         * 
         * @param value wartosc ktora chcemy dodac
         *
         * @return funkcja nic nie zwraca
         */
        void Enqueue(int value);
        
        /**
         * @brief Funkcja usuwajaca pierwszy element tablicy 
         * 
         * @return funcja zwraca zmiejszona tablice int
         */
        int Dequeue();
        
        /**
         * @brief Funkcja sprawdzajaca czy tablica jest pusta 
         * 
         * @return zwraca true jezeli jest pusta
         * @return zwraca false jezeli nie jest pusta
         */
        bool IsEmpty() const;
        
        /**
         * @brief Funkcja sprawdzajaca czy tablica jest pelna
         * 
         * @return zwraca true jezeli jest pelna
         * @return zwraca false jezeli nie jest pelna 
         */
        bool IsFull() const;
        
        /**
         * @brief Funkcja wypisujaca
         *
         * @return nic nie zwraca 
         */
        void Print() const;
        
        /**
         * @brief Funkcja okreslajaca rozmiar tablicy
         * 
         * @return zwraca rozmiar w postaci int 
         */
        int Size() const;
        
        /**
         * @brief funkcja czyszczaca tablice 
         * 
         * @return nie zwraca nic 
         */
        void Clear();

private:

    /**
     * @brief maksymalny rozmiar tablicy w postaci int 
     * 
     */
    static const int maxSize = 4;

    /**
     * @brief tablica int o rozmiarze maxSize
     * 
     */
    int data[maxSize];

    /**
     * @brief obecny rozmiar tablicy w postaci int
     * 
     */
    int currentSize;
};



#endif