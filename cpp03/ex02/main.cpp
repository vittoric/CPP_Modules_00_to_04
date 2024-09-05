#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "--- Creating ClapTrap ---" << std::endl;
    ClapTrap clap("ClapTrap");
    std::cout << std::endl;

    std::cout << "--- Creating ScavTrap ---" << std::endl;
    ScavTrap scav("ScavTrap");
    std::cout << std::endl;

    std::cout << "--- ScavTrap attacks ClapTrap ---" << std::endl;
    scav.attack("ClapTrap");
    std::cout << std::endl;

    std::cout << "--- ClapTrap attacks ScavTrap ---" << std::endl;
    clap.attack("ScavTrap");
    std::cout << std::endl;

    std::cout << "--- Testing ScavTrap guardGate ---" << std::endl;
    scav.guardGate();
    std::cout << std::endl;

    // Creating FragTrap object
    FragTrap frag("Fraggy");

    // Testing basic functionality
    frag.attack("Enemy");
    frag.takeDamage(20);
    frag.beRepaired(10);

    // Testing special ability
    frag.highFivesGuys();

    return 0;
}