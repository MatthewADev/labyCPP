#ifndef SERVICE_H
#define SERVICE_H
#include "IceMachine.h"

/**
 * @brief Service
 * Klasa okresla serwis maszyny
 */
class Service{
    public:
        /**
         * @brief Test
         * Funkcja testuje maszyne 
         * @param icemachine wskaznik na obiekt maszyna
         * @param portions zmienna ilosci porcji
         * @return Funkcja nic nie zwraca
         */
        void Test(IceMachine *icemachine, double portions);

        /**
         * @brief TestCopy
         * 
         * @param icemachine obiekt maszyna 
         * @param portions zmienna ilosci porcji
         * @return Funkcja nic nie zwraca 
         */
        void TestCopy(IceMachine icemachine, double portions);
};


#endif