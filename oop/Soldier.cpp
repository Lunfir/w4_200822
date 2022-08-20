#include "Soldier.h"

Soldier::Soldier(const std::string& name)
    : Unit(name)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Soldier::~Soldier()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Soldier::attack()
{
    std::cout << "i'm attacking... " << std::endl; 
}

void Soldier::print()
{
    std::cout << "Soldier: " << this->name << std::endl;
}
