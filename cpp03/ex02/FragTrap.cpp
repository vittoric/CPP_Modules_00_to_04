#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "\033[32mFragTrap default constructor called\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "\033[32mFragTrap constructor called\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
    *this = fragTrap;
    std::cout << "\033[33mFragTrap copy constructor called\033[0m" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
    std::cout << "\033[34mFragTrap ssignment operator called\033[0m" << std::endl;
    if(this != &fragTrap)
    {
        this->_name = fragTrap._name;
        this->_hitPoints = fragTrap._hitPoints;
        this->_energyPoints = fragTrap._energyPoints;
        this->_attackDamage = fragTrap._attackDamage;
    }
    return *this;
}

FragTrap:: ~FragTrap()
{
    std::cout << "\033[31mFragTrap destructor called\033[0m" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "\033[35mFragTrap says: High five guys!\033[0m" << std::endl;
}