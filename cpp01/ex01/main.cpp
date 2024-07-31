#include "Zombie.hpp"

int main(void)
{
    int N = 4;
    Zombie *horde = zombieHorde(N, "Zombie");
    if (!horde)
    {
        std::cerr << "Error: No se pudo crear la horda de zombies." << std::endl;
        return 1;
    }
    std::cout << std::endl;
    std::cout << "Zombie horde is created" << std::endl
              << std::endl;
    for (int i = 0; i < N; i++)
    {
        std::cout << i + 1 << " ";
        horde[i].announce();
    }
    std::cout << std::endl;
    delete[] horde;
    return 0;
}