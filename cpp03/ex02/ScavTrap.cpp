#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "\033[32mScavTrap default constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "\033[32mScavTrap constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
    *this = scavTrap;
    std::cout << "\033[33mScavTrap copy constructor called\033[0m" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
    std::cout << "\033[34mScavTrap assignment operator called\033[0m" << std::endl;
    if (this != &scavTrap)
    {
        this->_name = scavTrap._name;
        this->_hitPoints = scavTrap._hitPoints;
        this->_energyPoints = scavTrap._energyPoints;
        this->_attackDamage = scavTrap._attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "\033[31mScavTrap destructor called\033[0m" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if(_hitPoints == 0)
    {
        std::cout << "\033[41mScavTrap " << _name << " is already dead and cannot attack!\033[0m" << std::endl;
        return;
    }
    if(_energyPoints == 0)
    {
        std::cout << "\033[41mScavTrap " << _name << " is out of energy!\033[0m" << std::endl;
    }
    else
    {
        _energyPoints -= 1;
        std::cout << "\033[35mScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\033[0m" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "\033[107mScavTrap " << _name << " has entered in Gate keeper mode!\033[0m" << std::endl;
}