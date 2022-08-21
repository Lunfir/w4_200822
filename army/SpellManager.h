#pragma once
#include <iostream>
#include <unordered_map>

#include "Spell.h"

enum class SPELL
// enum SPELL
{
    Fireball,
    Wrath       
};

class SpellManager
{
public:
    static SpellManager& getInstance();

    ~SpellManager();

    const Spell* getSpell(SPELL spell) const;

    // addSpell(Spell& spell) 

private:
    SpellManager();
    SpellManager(const SpellManager& other) = delete;

    std::unordered_map<SPELL, Spell> spellbook;
};
