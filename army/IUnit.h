#pragma once
#include <iostream>

class ISpellCaster;

class IUnit
{
public:
    virtual void pAttack(IUnit& enemy) = 0;
    virtual void takePAttack(IUnit& enemy) = 0;
    virtual void takeMAttack(ISpellCaster& enemy) = 0;
    virtual void counterAttack(IUnit& enemy) = 0;
    virtual void takeCounterAttack(IUnit& enemy) = 0;

    virtual int getPAttack() const = 0;
};