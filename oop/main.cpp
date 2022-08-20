#include <iostream>
#include <vector>

#include "Mage.h"
#include "Soldier.h"
#include "Viking.h"

int main()
{
    std::vector<Unit*> army;

    army.push_back(new Soldier("John Doe"));
    army.push_back(new Mage("Susan Woe"));
    army.push_back(new Unit("Unit unit"));
    army.push_back(new Viking("Viking Horrible"));

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
