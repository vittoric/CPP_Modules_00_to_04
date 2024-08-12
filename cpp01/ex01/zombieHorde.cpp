#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        horde[i].setZombieName(name + " " + static_cast<char>(i + 49));
    return horde;

}