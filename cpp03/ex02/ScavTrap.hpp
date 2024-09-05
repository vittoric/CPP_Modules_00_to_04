#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
    // constructoa and destructor of ScavTrap
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &scavTrap);
    ScavTrap &operator=(const ScavTrap &scavTrap);
    ~ScavTrap();

    // redifine the attack() method
    void attack(const std::string &target);

    // special scavTrap method
    void guardGate();
};

#endif