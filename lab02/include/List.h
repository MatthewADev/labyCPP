#ifndef LIST_H
#define LIST_H


// Element listy
struct slistEl
{
  slistEl * next; //wskaznik do nastepnego elementu w liscie
  char data;  //przechowywany znak
};

// Lista
struct slist
{
  slistEl * head; //wskaznik do pierwszego elementu listy
};

/**
 * @brief Inicjalizacja listy
 * 
 * Funkcja inicjalizuje liste, ustawiajac wskaznik head na NULL
 * 
 * @param[in] list wskaznik do listy
 * @return funkcja nic nie zwraca
 */
void init(slist * list);

/**
 * @brief Dodawanie elementu na koncu listy
 * 
 * Funkcja dodaje nowy element z podanym znakiem na koncu listy
 * 
 * @param[in] list wskaznik do listy
 * @param[in] c znak, ktory ma byc dodany jako nowy element
 * @return funkcja nic nie zwraca
 */
void push_back(slist * list, char c);

/**
 * @brief Usuniecie nastepnego elementu
 * 
 * Funkcja usuwa element nastepujacy po danym elemencie listy 
 * 
 * @param[in] e wskaznik do elementu
 * @return funkcja nic nie zwraca
 */
void delete_after(slistEl * e);

/** @brief Wyszukanie elementu w liscie.
*
* Funkcja przeszukuje liste w celu znalezienia podanego elementu.
*
* @param[in] list  wskaznik do listy
* @param[in] c  wartosc szukanego elementu 
* @return wskaznik do pierwszego elementu listy o wartosci c jesli taki element jest w liscie \n
* NULL jesli lista nie posiada elementu o wartosci c
*/
slistEl * find(slist * list, char c);

/**
 * @brief Wypisanie listy
 * 
 * Funkcja po kolei wypisuje zawartosc listy.
 * 
 * @param[in] list wskaznik do listy
 * @return funkcja nic nie zwraca
 */
void printl(slist * list);

#endif