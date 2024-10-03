#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog constructor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog &dog) : Animal("animal")
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(animal.brain);
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &dog)
    {
        delete brain;
        brain = new Brain(dog.brain);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "🐶 Wouf" << std::endl;
}

void Dog::setIdea(int index, std::string idea)
{
    if(index >= 0 && index < 100)
        brain->ideas[index] = idea;
}

std::string Dog::getIdea(int index) const
{
    if(index >= 0 && index < 100)
        return brain->ideas[index];
    return "";
}