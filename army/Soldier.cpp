#include "Soldier.h"

#include "ISpellCaster.h"
#include "IObserver.h"


Soldier::Soldier(const std::string& name, int hp, int pAttackPoint)
    : name(name)
    , hp(hp)
    , maxHp(hp)
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
    if (this->hp <= 0)
    {
        return;
    }

    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->hp -= enemy.getPAttack();

    if (this->hp <= 0)
    {
        std::cout << this->name << " is dead" << std::endl;
        this->notify();

        return;
    }

    this->counterAttack(enemy);
}

void Soldier::takeMAttack(ISpellCaster& enemy)
{
    if (this->hp <= 0)
    {
        return;
    }

    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->hp -= enemy.getMAttack();

    if (this->hp <= 0)
    {
        std::cout << this->name << " is dead" << std::endl;
        this->notify();

        return;
    }
}

void Soldier::counterAttack(IUnit& enemy)
{
    enemy.takeCounterAttack(*this);
}

void Soldier::takeCounterAttack(IUnit& enemy)
{
    if (this->hp <= 0)
    {
        return;
    }
    
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    this->hp -= (enemy.getPAttack() * 0.5);

    if (this->hp <= 0)
    {
        std::cout << this->name << " is dead" << std::endl;
        this->notify();
    }
}

int Soldier::getPAttack() const
{
    return this->pAttackPoint;
}

int Soldier::getMaxHp() const
{
    return this->maxHp;
}

void Soldier::onSubscription(IObserver* observer)
{
    // TODO: if there a case when several necromants are observers for one soldier?
    this->observer = observer;
}

void Soldier::notify()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    if (this->observer == nullptr)
    {
        return;
    }

    this->observer->onNotification(*this);
}

void Soldier::print()
{
    std::cout   << "Soldier: " << this->name 
                << " hp: " << this->hp 
                << "  pAttack: " << this->pAttackPoint
                << std::endl;
    if (this->observer != nullptr)
    {
        std::cout << "observer: " << this->observer << std::endl;
    }
}
