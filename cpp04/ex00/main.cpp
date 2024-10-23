#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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

    std::cout << "----- WrongAnimal Tests -----" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    const WrongCat* wrongMiau = new WrongCat();


    std::cout << wrongCat->getType() << " says: ";
    wrongCat->makeSound(); // WrongAnimal makes a sound.
    wrongMiau->makeSound(); // Imprime: "Wrong meow!"

    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongCat;
    delete wrongMiau;

    return 0;
}