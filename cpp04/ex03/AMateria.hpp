#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "Character.hpp"
#include <iostream>
#include <string>

class AMateria
{
protected:
    std::string type;

public:
    AMateria();
    AMateria(std::string &type);
    AMateria(const AMateria &materia);
    AMateria &operator=(const AMateria &materia);
    virtual ~AMateria();

    std::string const &getType() const;

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif