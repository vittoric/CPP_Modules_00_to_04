#ifndef MATTERIASOURCE_HPP
#define MATTERIASOURCE_HPP
#include "AMateria.hpp"
#include "Character.hpp"
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