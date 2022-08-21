#pragma once
#include <iostream>

#include "IUnit.h"

class ISpellCaster : public IUnit
{
public:
    virtual void mAttack(IUnit& enemy) = 0;
    virtual int getMAttack() const = 0;
};