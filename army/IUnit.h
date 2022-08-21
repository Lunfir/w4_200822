#pragma once
#include <iostream>

class IUnit
{
public:
    virtual void pAttack(IUnit& enemy) = 0;
    virtual void takePAttack(IUnit& enemy) = 0;
    virtual void counterAttack(IUnit& enemy) = 0;
    virtual void takeCounterAttack(IUnit& enemy) = 0;

    virtual int getPAttack() const = 0;
};