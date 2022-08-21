#include <iostream>

#include "Soldier.h"
#include "Necromancer.h"

int main()
{
    Soldier* john = new Soldier("Jonh Doe", 50, 15);
    Soldier* susan = new Soldier("Susan Doe", 50, 15);
    Necromancer* guldan = new Necromancer("Guldan", 100, 5, 20);

    john->print();
    susan->print();
    guldan->print();

    guldan->mAttack(*john);

    // john->pAttack(*susan);
    // john->pAttack(*susan);
    // john->pAttack(*susan);
    // john->pAttack(*susan);

    john->print();
    guldan->print();
    // susan->print();

    delete john;
    delete susan;
    delete guldan;

    return 0;
}
