#include <iostream>
#include <vector>

#include "Mage.h"
#include "Soldier.h"

int main()
{
    std::vector<Unit*> army;

    army.push_back(new Soldier("John Doe"));
    army.push_back(new Mage("Susan Woe"));
    // army.push_back(new Unit("Unit unit"));

    for (Unit* unit : army)
    {
        unit->attack();
    }

    for (Unit* unit : army)
    {
        delete unit;
    }

    return 0;
}

