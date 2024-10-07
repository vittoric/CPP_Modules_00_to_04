#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*cat.brain);
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &cat)
    {
        delete brain;
        this->brain = new Brain(*cat.brain);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "🐱 Miaou" << std::endl;
}