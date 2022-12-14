#pragma once
#include <iostream>
#include <string>

#include "Unit.h"

class Soldier : virtual public Unit
{
public:
    Soldier(const std::string& name);
    ~Soldier();

    void attack() override;
    void print();
};
