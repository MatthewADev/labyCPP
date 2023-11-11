#include "Service.h"
#include "IceMachine.h"
#include <iostream>


void Service::Test(IceMachine *icemachine, double portions)
{
    std::cout << "#############################################################\n";
    std::cout << "### Test serwisowy ###\n\n";
    std::cout << "1. Wsyp proszek do pelna:\n";
    icemachine->Reload(icemachine->GetCapacity() - icemachine->GetPowder());
    std::cout << "2. Przebieg testowy: " << portions << " porcji";
    icemachine->Start();
    icemachine->Make(portions);
    icemachine->Stop();
    icemachine->powder = 2 - (portions * 0.01);
    std::cout << "### Koniec testu serwisowego ###\n";
    std::cout << "#############################################################\n\n";

}

void Service::TestCopy(IceMachine icemachine, double portions)
{
    std::cout << "#############################################################\n";
    std::cout << "### Test serwisowy ###\n\n";
    std::cout << "1. Wsyp proszek do pelna:\n";
    icemachine.Reload(icemachine.GetCapacity() - icemachine.GetPowder());
    std::cout << "2. Przebieg testowy: " << portions << " porcji";
    icemachine.Start();
    icemachine.Make(portions);
    icemachine.Stop();
    icemachine.powder = 2 - (portions * 0.01);
    std::cout << "### Koniec testu serwisowego ###\n";
    std::cout << "#############################################################\n\n";

}