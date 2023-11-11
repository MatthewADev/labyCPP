#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

/**
 * @brief Inicjalizacja tablicy
 * 
 * @param[in] arraySize rozmiar tablicy
 * @return funkcja zwraca zaakolowana zmienna arraySize
 */
int *InitArray(int arraySize);

/**
 * @brief Wypelnianie tablicy suma kolenych liczb
 * 
 * @param[in] array wskaznik do tablicy 
 * @param[in] arraySize zmienna rozmiar tablicy 
 * @return funkcja nic nie zwraca
 */
void CreateSequence(int *array, int arraySize);

/**
 * @brief Funkcja zmienia rozmiar tablicy 
 * 
 * @param[in] array wskaznik do tablicy
 * @param[in] arraySize zmienna rozmiar tablicy 
 * @param[in] newArraySize noway rozmiar tablicy
 * @return funkcja zwraca tablice o nowym rozmiarze
 */
int *ChangeArraySize(int *array, int arraySize, int newArraySize);

/**
 * @brief Funkcja usuwa tablice
 * 
 * @param[in] array wskaznik do tablicy
 * @return funkcja nic nie zwraca
 */
void DeleteArray(int *array);


#endif