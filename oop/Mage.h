#pragma once
#include <iostream>
#include <string>

#include "Unit.h"

class Mage : virtual public Unit
{
public:
    Mage(const std::string& name);
    ~Mage();

    // void attack() override;
    void print();
};
