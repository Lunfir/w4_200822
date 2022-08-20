#pragma once
#include <iostream>
#include <string>

class Unit
{
public:
    Unit(const std::string& name);
    ~Unit();

    std::string name;
};
