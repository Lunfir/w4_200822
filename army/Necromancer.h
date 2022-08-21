#pragma once
#include <iostream>

#include "ISpellCaster.h"

class Necromancer : public ISpellCaster
{
public:
    Necromancer();
    ~Necromancer();

    // // ISpellCaster overrides
    // virtual void mAttack(IUnit& enemy) = 0;
    // virtual int getMAttack() const = 0;

    // // IUnit overrides
    // virtual void pAttack(IUnit& enemy) = 0;
    // virtual void takePAttack(IUnit& enemy) = 0;
    // virtual void counterAttack(IUnit& enemy) = 0;
    // virtual void takeCounterAttack(IUnit& enemy) = 0;

    // virtual int getPAttack() const = 0;

private:
    std::string name;
    int hp;
    int pAttackPoint;
    int mAttackPoint;
};
