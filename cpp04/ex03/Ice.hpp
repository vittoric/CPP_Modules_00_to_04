#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include "Character.hpp"
#include <iostream>
#include <string>

class AMateria;


class Ice : public AMateria
{
public:
    Ice();
    Ice(const std::string &type);
    Ice(const Ice &ice);
    Ice &operator=(const Ice &ice);
    virtual ~Ice();

    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif