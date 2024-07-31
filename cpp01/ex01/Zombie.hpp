#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
private:
    std::string ZombieName;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce();
    void setZombieName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif