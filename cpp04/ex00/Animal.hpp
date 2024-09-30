#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &animal);
    Animal &operator=(const Animal &animal);
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
};

#endif
