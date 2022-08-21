#include <iostream>

#include "Soldier.h"

int main()
{
    Soldier* john = new Soldier("Jonh Doe", 50, 15);
    Soldier* susan = new Soldier("Susan Doe", 50, 15);

    john->print();
    susan->print();

    john->pAttack(*susan);
    john->pAttack(*susan);
    john->pAttack(*susan);
    john->pAttack(*susan);

    john->print();
    susan->print();

    delete john;
    delete susan;

    return 0;
}
