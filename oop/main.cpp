#include <iostream>

#include "Mage.h"
#include "Soldier.h"

int main()
{
    Soldier soldier("John Doe");
    Mage mage("Susan Woe");
    Unit unit("Unit unit");

    soldier.attack();
    mage.attack();
    unit.attack();

    // soldier.print();
    // std::cout << "name: " << soldier.name << std::endl;
    // mage.print();

    return 0;
}
