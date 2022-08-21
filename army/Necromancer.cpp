#include "Necromancer.h"

Necromancer::Necromancer(const std::string& name, int hp
                        , int pAttackPoint, int mAttackPoint)
    : name(name)
    , hp(hp)
    , pAttackPoint(pAttackPoint)
    , mAttackPoint(mAttackPoint)
    , mAttackPointDefault(mAttackPoint)
{

}

Necromancer::~Necromancer()
{

}

void Necromancer::mAttack(IUnit& enemy)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    const Spell* spell = SpellManager::getInstance().getSpell(SPELL::Wrath);
    if (spell == nullptr)
    {
        std::cout << "Cannot cast this spell..." << std::endl;
        return;
    }

    std::cout << "spell: " << spell->getName() << " m: " << spell->getMultiplier() << std::endl;
    
    // apply multiplier to mAttackPoint
    this->mAttackPoint *= spell->getMultiplier();
    
    enemy.takeMAttack(*this);

    // reset to defaults
    this->mAttackPoint = this->mAttackPointDefault;
}

int Necromancer::getMAttack() const
{
    return this->mAttackPoint;
}

void Necromancer::pAttack(IUnit& enemy)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    enemy.takePAttack(*this);
}

void Necromancer::takePAttack(IUnit& enemy)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->hp -= enemy.getPAttack();

    if (this->hp <= 0)
    {
        std::cout << this->name << " is dead" << std::endl;
        return;
    }

    this->counterAttack(enemy);
}

void Necromancer::takeMAttack(ISpellCaster& enemy)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->hp -= enemy.getMAttack();

    if (this->hp <= 0)
    {
        std::cout << this->name << " is dead" << std::endl;
        return;
    }
}

void Necromancer::counterAttack(IUnit& enemy)
{
    enemy.takeCounterAttack(*this);
}

void Necromancer::takeCounterAttack(IUnit& enemy)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->hp -= (enemy.getPAttack() * 0.5);

    if (this->hp <= 0)
    {
        std::cout << this->name << " is dead" << std::endl;
    }
}

int Necromancer::getPAttack() const
{
    return this->pAttackPoint;
}

void Necromancer::print()
{
    std::cout   << "Necr: " << this->name 
                << " hp: " << this->hp 
                << "  pAttack: " << this->pAttackPoint
                << "  mAttack: " << this->mAttackPoint
                << std::endl;
}
