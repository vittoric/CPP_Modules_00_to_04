#ifndef MATTERIASOURCE_HPP
#define MATTERIASOURCE_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>
#include <string>

class MateriaSource : public IMateriaSource
{
private:
    std::string name;
    AMateria *inventory[4];

public:
    MateriaSource();
    MateriaSource(std::string &name);
    MateriaSource(const MateriaSource &materiaSource);
    MateriaSource &operator=(const MateriaSource &materia);
    ~MateriaSource();

    void learnMateria(AMateria *m);
    AMateria *createMateria(std::string const &type);
};

#endif