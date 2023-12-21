#ifndef ANDROIDSOLDIER_H
#define ANDROIDSOLDIER_H

/**
 * @brief Klasa AndroidSoldier
 * 
 */
class AndroidSoldier {
public:

    /**
     * @brief Konstruktor domyslny
     * 
     */
    AndroidSoldier();  

    /**
     * @brief Konstruktor z parametrami
     * 
     * @param type  
     * @param quantity 
     */
    AndroidSoldier(int type, int quantity);

    /**
     * @brief Funkcja Print - wypisuje w outpucie dane 
     * 
     * @return Funkcja nic nie zwraca
     */
    void Print() const;

private:
    int type;
    int quantity;
};



#endif 