#include "Mage.h"

Mage::Mage(const std::string& name)
    : Unit(name)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Mage::~Mage()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

// void Mage::attack()
// {
//     std::cout << "i'm attacking... " << __PRETTY_FUNCTION__ << std::endl;
// }

void Mage::print()
{
    std::cout << "Mage: " << this->getName() << std::endl;
}