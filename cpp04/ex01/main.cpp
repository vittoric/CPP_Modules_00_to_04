#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
   std::cout << "----- Animal Tests -----" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;

    std::cout << j->getType() << " says: ";
    j->makeSound(); // Woof! Woof!

    std::cout << i->getType() << " says: ";
    i->makeSound(); // Meow! Meow!

    std::cout << meta->getType() << " says: ";
    meta->makeSound(); // Animal makes a sound!
    std::cout << std::endl;

    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    return 0;
}