#include <iostream>

#include "Mage.h"
#include "Soldier.h"

int main()
{
    Soldier soldier("John Doe");
    // Mage mage("Susan Woe");

    soldier.print();
    std::cout << "name: " << soldier.name << std::endl;
    // mage.print();

    return 0;
}
