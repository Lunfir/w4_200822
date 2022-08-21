#include "Necromancer.h"

Necromancer::Necromancer(const std::string& name, int hp
                        , int pAttackPoint, int mAttackPoint)
    : name(name)
    , hp(hp)
    , pAttackPoint(pAttackPoint)
    , mAttackPoint(mAttackPoint)
{

}

Necromancer::~Necromancer()
{

}

void Necromancer::mAttack(IUnit& enemy)
{
    enemy.takeMAttack(*this);
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
