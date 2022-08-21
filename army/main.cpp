#include <iostream>

#include "Soldier.h"
#include "Necromancer.h"

int main()
{
    Soldier* john = new Soldier("Jonh Doe", 50, 15);
    Soldier* susan = new Soldier("Susan Doe", 50, 15);
    Necromancer* guldan = new Necromancer("Guldan", 100, 5, 20);
    Necromancer* nerzul = new Necromancer("Nerzul", 200, 5, 20);

    john->print();
    susan->print();
    guldan->print();

    guldan->mAttack(*susan);
    susan->print();

    john->pAttack(*susan);
    susan->print();

    nerzul->mAttack(*susan);
    susan->print();

    john->pAttack(*susan);
    susan->print();

    john->pAttack(*susan);
    susan->print();

    susan->print();
    guldan->print();
    nerzul->print();
    // susan->print();

    delete john;
    delete susan;
    delete guldan;

    return 0;
}
