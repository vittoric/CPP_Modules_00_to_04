#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("Zombie1");
    Zombie *zombie2 = newZombie("VRADS");
    Zombie *Foo = newZombie("Foo");
    zombie->announce();
    zombie2->announce();
    Foo->announce();
    randomChump("TORI");
    randomChump("LOli");
    delete Foo;
    delete zombie;
    delete zombie2;
    return 0;
}