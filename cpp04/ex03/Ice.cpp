#include "Ice.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

 Ice::Ice(): AMateria("ice")
 {
        std::cout << "Ice Default constructor" << std::endl;
 }

Ice::Ice(const std::string &type): AMateria(type)
{
    std::cout << "Ice constructor called. Type " << type << std::endl; 
}

Ice::Ice(const Ice &ice): AMateria(ice.type)
{
    std::cout << "Ice Copy constructor" << std::endl;
}

Ice &Ice::operator=(const Ice &ice)
{
    std::cout << "Ice Assignation constructor" << std::endl;
    if (this != &ice)
        this->type = ice.type;
    return (*this);
}
    
Ice::~Ice()
{
    std::cout << "Ice Destructor" << std::endl;
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "Ice used on " << target.getName() << std::endl;
}