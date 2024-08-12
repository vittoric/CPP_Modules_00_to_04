#include "Zombie.hpp"

// Macros para los colores
#define RESET "\033[0m"
#define HORD "\033[34m"
#define ANNOUNCE "\033[32m"
#define DELETE_COLOR "\033[31m"

int main(void)
{
    int N = 5;

    Zombie *horde = zombieHorde(N, "Zombie");
    if (!horde)
    {
        std::cerr << "Error: No se pudo crear la horda de zombies." << std::endl;
        return 1;
    }
    std::cout << std::endl;

    std::cout << HORD;
    std::cout << "Zombie horde is created" << std::endl
              << std::endl;
    std::cout << RESET;

    std::cout << ANNOUNCE;
    for (int i = 0; i < N; i++)
        horde[i].announce();

    std::cout << RESET;
    std::cout << std::endl;

    std::cout << DELETE_COLOR;
    delete[] horde;
    std::cout << RESET;

    return 0;
}