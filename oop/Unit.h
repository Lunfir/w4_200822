#pragma once
#include <iostream>
#include <string>

class Unit
{
public:
    Unit(const std::string& name);
    virtual ~Unit();

    std::string getName() const;

    // pure virtual
    virtual void attack() = 0;

protected:
    std::string name;
};
