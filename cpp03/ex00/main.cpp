#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("Boo");
    ClapTrap clapTrap2(clapTrap);
    ClapTrap clapTrap3 = clapTrap;
    std::cout << std::endl;

    std::cout << "\033[33m--- Testing attack ---\033[0m" << std::endl;
    clapTrap.attack("target");
    std::cout << std::endl;

    std::cout << "\033[33m--- Testing takeDamage ---\033[0m" << std::endl;
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);
    clapTrap.takeDamage(6);
    std::cout << std::endl;

    std::cout << "\033[33m--- Testing beRepaired ---\033[0m" << std::endl;
    clapTrap.beRepaired(3);
    clapTrap.takeDamage(7);
    clapTrap.beRepaired(8);
    std::cout << std::endl;

    return 0;
}