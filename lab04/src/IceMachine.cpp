#include "IceMachine.h"
#include <iostream>


IceMachine::IceMachine() : id(0), state(false), capacity(0.0), consumption(0.0), powder(0.0), amount(0.0){}

void IceMachine::SetID(int id){
    this->id = id;
}
void IceMachine::SetState(bool state){
    this->state = state;
}
void IceMachine::SetCapacity(double capacity){
    this->capacity = capacity;
}
void IceMachine::SetConsumption(double consumption){
    this->consumption = consumption;
}
void IceMachine::SetPowder(double powder){
    this->powder = powder;
}
void IceMachine::Presentation(){
    std::cout << "### Prezentacja ###\n";
    std::cout << "Identyfikator maszyny do lodow wloskich: " << id << '\n';
    if(state == false){
        std::cout << "Maszyna do lodow wloskich jest wylaczona\n";
    }
    else{
        std::cout << "Maszyna do lodow wloskich jest wlaczona\n";
    }
    
    std::cout << "Pojemnosc maszyny do lodow wloskich wynosi " << capacity << "kilogramy/kilogramow\n";
    std::cout << "Srednia wydajnosc wynosi " << consumption << "kilogramow na 1 porcje\n";
    std::cout << "W maszynie do lodow wloskich jest " << powder << "kilogramow proszku\n\n";
}
void IceMachine::Make(int portions){
    if(powder > 0){
        if(state == true){
        std::cout << "### Robienie lodow ###\n";
        std::cout << "Zrobiles " << portions <<  "porcji lodow\n\n";
        }
        else{
            std::cout << "### Robienie lodow ###\n";
            std::cout << "BLAD: Wlacz maszyne do lodow wloskich\n\n";
        }
    }
    else{
        std::cout << "### Robienie lodow ###\n";
        std::cout << "BLAD: Niepoprawna ilosc porcji\n\n";
    }
}
void IceMachine::Start(){
    std::cout << "### Uruchomienie maszyny do lodow wloskich ###\n";
    if(powder > 0){
        std::cout << "Maszyna do lodow wloskich zostala wlaczona\n\n";
        state = true;
    }
    else{
        std::cout << "BLAD: Brak proszku, wsyp\n\n";
    }
}
void IceMachine::Reload(double amount){
    std::cout << "### Wsypywanie proszku ###\n\n";
    std::cout << "Wsypales " << amount << " kilogram/kilogramow proszku\n\n";
}
void IceMachine::Stop(){
    std::cout << "### Zatrzymanie maszyny do lodow wloskich ###\n";
    std::cout << "Maszyna do lodow wloskich zostala wylaczona\n\n";
    state = false;
}

double IceMachine::GetCapacity(){
    return capacity;
}

double IceMachine::GetPowder(){
    return powder;
}

