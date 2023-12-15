#ifndef QUEUE_3_H
#define QUEUE_3_H

#include <iostream>

/**
 * @brief klasa Queue_3
 * 
 */
class Queue_3 {
    public:

        /**
         * @brief Konstruktor nowego obiektu 
         * 
         * @param initialSize - rozmiar inicjowanej tablicy 
         */
        Queue_3(int initialSize);
    
        /**
         * @brief Dekonsturktor obiektu 
         * 
         */
        ~Queue_3();
    
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
    int maxSize;

    /**
     * @brief tablica int 
     * 
     */
    int *data;

    /**
     * @brief obecny rozmiar tablicy w postaci int
     * 
     */
    int currentSize;
};



#endif