#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;

public:
    Dog();
    Dog(const Dog &dog);
    Dog &operator=(const Dog &dog);
    virtual ~Dog();
    virtual void makeSound() const;
    void setIdea(int index, std::string idea);
    std::string getIdea(int index) const;
};

#endif