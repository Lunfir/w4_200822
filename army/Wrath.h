#pragma once
#include <iostream>

#include "Spell.h"

class Wrath : public Spell
{
public:
    Wrath(const std::string& name = "Wrath"
            , float multiplier = 0.7);

    ~Wrath() = default;
};