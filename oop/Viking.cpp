#include "Viking.h"

Viking::Viking(const std::string& name)
    : Soldier(name), Mage(name), Unit(name)
    // , Mage(name)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Viking::~Viking()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Viking::attack()
{
    std::cout << "i'm attacking... " << __PRETTY_FUNCTION__ << std::endl;
}

void Viking::print()
{
    std::cout << "Viking: " << this->getName() << std::endl;
}
