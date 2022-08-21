#include "SpellManager.h"

#include "Fireball.h"
#include "Wrath.h"

SpellManager& SpellManager::getInstance()
{
    static SpellManager instance;

    return instance;
}

SpellManager::~SpellManager()
{

}

const Spell* SpellManager::getSpell(SPELL spell) const
{
    auto search = spellbook.find(spell);
    if (search != spellbook.end()) 
    {
        return &search->second;
    }

    return nullptr;
}

SpellManager::SpellManager()
{
    spellbook.emplace(SPELL::Fireball, Fireball());
    spellbook.emplace(SPELL::Wrath, Wrath());
}
