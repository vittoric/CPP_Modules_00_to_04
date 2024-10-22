#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
public:
    Cure();
    Cure(std::string &type);
    Cure(const Cure &cure);
    Cure &operator=(const Cure &cure);
    virtual ~Cure();

    void use(ICharacter &target);
    AMateria *clone() const;
};

#endif