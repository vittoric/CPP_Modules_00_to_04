#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog &dog) : Animal("animal")
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain(*dog.brain);
}
Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &dog)
    {
        delete brain;
        this->brain = new Brain(*dog.brain);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const
{
    std::cout << "🐶 Wouf" << std::endl;
}
