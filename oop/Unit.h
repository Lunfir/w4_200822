#pragma once
#include <iostream>
#include <string>

class Unit
{
public:
    Unit(const std::string& name);
    ~Unit();

    std::string getName() const;

    virtual void attack();

protected:
    std::string name;
};
