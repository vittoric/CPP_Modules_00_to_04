#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "\033[32mClapTrap default constructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "\033[32mClapTrap constructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
    std::cout << "\033[33mClapTrap copy constructor called\033[0m" << std::endl;
    *this = clapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
    std::cout << "\033[34mClapTrap assignment operator called\033[0m" << std::endl;
    if (this != &clapTrap)
    {
        this->_name = clapTrap._name;
        this->_hitPoints = clapTrap._hitPoints;
        this->_energyPoints = clapTrap._energyPoints;
        this->_attackDamage = clapTrap._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[31mClapTrap destructor called\033[0m" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "\033[41mClapTrap " << this->_name << " is already dead and cannot attack!\033[0m" << std::endl;
        return;
    }
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
        return;
    }
    else
    {
        this->_hitPoints -= 1;
        this->_energyPoints -= 1;
        // this->_attackDamage += 1;
    }
    std::cout << "\033[35mClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!\033[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "\033[41mClapTrap " << this->_name << " is already dead and cannot attack!\033[0m" << std::endl;
        return;
    }
    this->_hitPoints -= amount;
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    std::cout << "\033[45mClapTrap " << this->_name << " takes " << amount << " points of damage!\033[0m" << std::endl;
    if (this->_hitPoints == 0)
        std::cout << "\033[31mClapTrap " << this->_name << " has been destroyed!\033[0m" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "\033[100mClapTrap " << this->_name << " is already dead and cannot be repaired!\033[0m" << std::endl;
        return;
    }
    if (this->_energyPoints == 0)
    {
        std::cout << "\033[31mClapTrap " << this->_name << " has no energy left to repair!\033[0m" << std::endl;
        return;
    }
    else
    {
        this->_hitPoints += amount;
        this->_energyPoints -= 1;
    }
    std::cout << "\033[32mClapTrap " << this->_name << " is repaired for " << amount << " points!\033[0m" << std::endl;
}

int ClapTrap::getHitPoints(void) const
{

    std::cout << "ClapTrap Hit Points: " << _hitPoints << std::endl;
    return _hitPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
    std::cout << "ClapTrap Energy Points: " << _energyPoints << std::endl;
    return _energyPoints;
}

int ClapTrap::getAttackDamage(void) const
{
    std::cout << "ClapTrap Attack Damage: " << _attackDamage << std::endl;
    return _attackDamage;
}