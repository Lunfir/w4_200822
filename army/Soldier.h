#pragma once
#include <iostream>
#include <string>

#include "IUnit.h"

class IObserver;

class Soldier : public IUnit
{
public:
    Soldier(const std::string& name, int hp, int pAttackPoint);
    virtual ~Soldier();

    // IUnit overrides
    void pAttack(IUnit& enemy) override;
    void takePAttack(IUnit& enemy) override;
    void takeMAttack(ISpellCaster& enemy) override;
    void counterAttack(IUnit& enemy) override;
    void takeCounterAttack(IUnit& enemy) override;
    int getPAttack() const override;
    int getMaxHp() const override;

    // IObservable overrides
    void onSubscription(IObserver* observer) override;
    void notify() override;

    void print();

private:
    std::string name;
    int hp;
    int maxHp;
    int pAttackPoint;
};