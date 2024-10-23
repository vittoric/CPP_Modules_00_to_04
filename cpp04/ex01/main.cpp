#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *meta[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
		std::cout << std::endl;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << meta[i]->getType() << std::endl;
		meta[i]->makeSound();
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete meta[i];
		std::cout << std::endl;
	}

	Animal *a = new Animal("Animal");

	Dog *d = new Dog();
	Dog *k = new Dog(*d);
	std::cout << std::endl;
	a->makeSound();
	k->makeSound();
	std::cout << std::endl;

	std::cout << "--------------Concrete Brain test --------------" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "--------------Concrete Brain test -------------- end" << std::endl;

	std::cout << std::endl;
	delete d;
	delete k;
	delete a;
	return (0);
}