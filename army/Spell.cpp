#include "Spell.h"

Spell::Spell(const std::string& name, float multiplier)
{
    this->name = name;
    this->multiplier = multiplier;
}

Spell::~Spell()
{

}


const std::string& Spell::getName() const
{
    return this->name;
}

float Spell::getMultiplier() const
{
    return this->multiplier;
}
