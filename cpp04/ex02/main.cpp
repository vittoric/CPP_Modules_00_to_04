#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
   const Animal* meta[10];
	for (int i = 0; i < 10; i++){
		if (i < 5)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
        std::cout << std::endl;
	}
	for (int i = 0; i < 10; i++){
		std::cout << meta[i]->getType() << std::endl;
		meta[i]->makeSound();
       
	} 
    std::cout << std::endl;
	for (int i = 0; i < 10; i++)
    {
        delete meta[i];
        std::cout << std::endl;
    }

	//Animal *a = new Animal("Animal");
	//a->makeSound();
	std::cout << std::endl;
	Dog *d = new Dog();
	Dog *k = new Dog(*d);
    std::cout << std::endl;
	
	std::cout << std::endl;
	k->makeSound();
    std::cout << std::endl;

	// Animal* animal = new Animal(); // Error: cannot instantiate an abstract class
	delete d;
	delete k;
	return (0);
}