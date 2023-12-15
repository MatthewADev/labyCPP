#ifndef QUEUE_4_H
#define QUEUE_4_H

#include <iostream>
#include <vector>

/**
 * @brief klasa Queue_4
 * 
 */
class Queue_4 {
    public:

        /**
         * @brief Konstruktor nowego obiektu 
         * 
         */
        Queue_4();

        /**
         * @brief Dekonsturktor obiektu 
         * 
         */
        ~Queue_4();
        
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
     * @brief tablica int stworzona przy uzyciu std::vector
     * 
     */
    std::vector<int> data;
};



#endif