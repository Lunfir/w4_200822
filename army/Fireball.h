#pragma once
#include <iostream>

#include "Spell.h"

class Fireball : public Spell
{
public:
    Fireball(const std::string& name = "Fireball"
            , float multiplier = 1.5);

    ~Fireball() = default;
};
