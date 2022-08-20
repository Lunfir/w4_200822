#include "Mage.h"

Mage::Mage(const std::string& name)
{
    this->name = name;
}

Mage::~Mage()
{

}

void Mage::attack()
{
    std::cout << "i'm attacking... " << std::endl; 
}

void Mage::print()
{
    std::cout << "Mage: " << this->name << std::endl;
}