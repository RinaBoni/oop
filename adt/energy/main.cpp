#include <iostream>
#include <string>
#include "energy.h"
#include <stdio.h>

using namespace std;


int main()
{
    try {
        EnergyDrink first("Monster", "Ultra enerdy", "cherry", 54, 32, 230, 100, 0.4);
        //EnergyDrink first;
        //EnergyDrink. 
        //first = EnergyDrink();
        cout<< first.AllInformation();
    }
    catch (exception& argument) {
        cout << argument.what();
    }

    //EnergyDrink();
    EnergyDrink monster;
   
    //count << monster.AllInformation();



    return 0;
}