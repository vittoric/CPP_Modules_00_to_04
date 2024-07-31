#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie is born" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->ZombieName = name;
    return;
}
Zombie::~Zombie(void)
{
    std::cout << this->ZombieName << " is dead" << std::endl;
    return;
}

void Zombie::announce(void)
{
    std::cout << this->ZombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

void Zombie::setZombieName(std::string name)
{
    this->ZombieName = name;
    return;
}