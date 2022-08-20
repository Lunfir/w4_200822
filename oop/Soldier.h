#pragma once
#include <iostream>
#include <string>

#include "Unit.h"

class Soldier : public Unit
// class Soldier : protected Unit // name ---> protected
// class Soldier : private Unit
{
public:
    Soldier(const std::string& name);
    ~Soldier();

    void attack();
    void print();
};
