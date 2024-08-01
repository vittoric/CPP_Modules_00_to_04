#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

Weapon::~Weapon() {}

// get type funccion
const std::string &Weapon::getType() const
{
    return type;
}

// set type function
void Weapon::setType(std::string newType)
{
    type = newType;
}