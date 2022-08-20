#include "Unit.h"

Unit::Unit(const std::string& name)
{
    this->name = name;
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Unit::~Unit()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}
