#ifndef IMATTERIASOURCE_HPP
#define IMATTERIASOURCE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif