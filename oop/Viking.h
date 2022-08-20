#pragma once
#include <iostream>

#include "Soldier.h"
#include "Mage.h"

class Viking : public Soldier, public Mage
{
public:
    Viking(const std::string& name);
    ~Viking();

    void attack() override;
    void print();
};

//     Unit

// Soldier     Mage
    
//     Viking

//     Unit --> Soldier
//     Unit --> Mage
//     Viking