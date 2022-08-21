#pragma once
#include <iostream>

#include "IUnit.h"

class ISpellCaster : public IUnit
{
public:
    virtual void mAttack(IUnit& enemy) = 0;
};