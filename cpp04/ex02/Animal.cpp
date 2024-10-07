#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
    std::cout << "Animal assignation operator called" << std::endl;
    this->_type = animal._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "🐾 Sound " << this->getType() << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}