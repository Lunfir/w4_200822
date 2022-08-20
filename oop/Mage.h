#pragma once
#include <iostream>
#include <string>

class Mage
{
public:
    Mage(const std::string& name);
    ~Mage();

    void attack();
    void print();

private:
    std::string name;
};