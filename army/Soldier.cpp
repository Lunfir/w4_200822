#include "Soldier.h"

#include "ISpellCaster.h"

Soldier::Soldier(const std::string& name, int hp, int pAttackPoint)
    : name(name)
    , hp(hp)
    , pAttackPoint(pAttackPoint)
{

}

Soldier::~Soldier()
{

}


void Soldier::pAttack(IUnit& enemy)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    enemy.takePAttack(*this);
}

void Soldier::takePAttack(IUnit& enemy)
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

void Soldier::takeMAttack(ISpellCaster& enemy)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->hp -= enemy.getMAttack();

    if (this->hp <= 0)
    {
        std::cout << this->name << " is dead" << std::endl;
        return;
    }
}

void Soldier::counterAttack(IUnit& enemy)
{
    enemy.takeCounterAttack(*this);
}

void Soldier::takeCounterAttack(IUnit& enemy)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->hp -= (enemy.getPAttack() * 0.5);

    if (this->hp <= 0)
    {
        std::cout << this->name << " is dead" << std::endl;
    }
}

int Soldier::getPAttack() const
{
    return this->pAttackPoint;
}

void Soldier::print()
{
    std::cout   << "Soldier: " << this->name 
                << " hp: " << this->hp 
                << "  pAttack: " << this->pAttackPoint
                << std::endl;
}
