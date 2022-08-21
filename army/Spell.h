#pragma once
#include <iostream>
#include <string>

class Spell
{
public:
    Spell(const std::string& name, float multiplier);
    virtual ~Spell();

    const std::string& getName() const;
    float getMultiplier() const;

private:
    std::string name;
    float multiplier;
};
