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
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif