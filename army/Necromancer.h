#pragma once
#include <iostream>
#include <string>

#include "ISpellCaster.h"
#include "SpellManager.h"

class Necromancer : public ISpellCaster
{
public:
    Necromancer(const std::string& name, int hp
                , int pAttackPoint, int mAttackPoint);
    ~Necromancer();

    // ISpellCaster overrides
    void mAttack(IUnit& enemy) override;
    int getMAttack() const override;

    // IUnit overrides
    void pAttack(IUnit& enemy) override;
    void takePAttack(IUnit& enemy) override;
    void takeMAttack(ISpellCaster& enemy) override;
    void counterAttack(IUnit& enemy) override;
    void takeCounterAttack(IUnit& enemy) override;
    int getPAttack() const override;

    void print();

private:
    std::string name;
    int hp;
    int pAttackPoint;
    int mAttackPoint;
    int mAttackPointDefault;
};
