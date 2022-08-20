#pragma once
#include <iostream>
#include <string>

#include "Unit.h"

class Soldier : public Unit
{
public:
    Soldier(const std::string& name);
    ~Soldier();

    void attack();
    void print();
};
