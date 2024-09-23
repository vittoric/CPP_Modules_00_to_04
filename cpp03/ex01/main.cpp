#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "--- Creating ClapTrap ---" << std::endl;
    ClapTrap clap("Boo");
    std::cout << std::endl;

    std::cout << "--- Creating ScavTrap ---" << std::endl;
    ScavTrap scav("Foo");
    std::cout << std::endl;

    std::cout << "--- ScavTrap attacks ClapTrap ---" << std::endl;
    scav.attack("Boo");
    std::cout << std::endl;

    std::cout << "--- ClapTrap attacks ScavTrap ---" << std::endl;
    clap.attack("Foo");
    std::cout << std::endl;

    std::cout << "--- Testing ScavTrap guardGate ---" << std::endl;
    scav.guardGate();
    std::cout << std::endl;

    return 0;
}