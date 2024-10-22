#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type("default")
{
    std::cout << "AMateria Default constructor" << std::endl;
}

AMateria::AMateria(std::string &type) : type(type)
{
    std::cout << "AMateria constructor called. Type " << type << std::endl;
}

AMateria::AMateria(const AMateria &materia) : type(materia.type)
{
    std::cout << "AMateria Copy constructor" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &materia)
{
    std::cout << "AMateria Assignation operator" << std::endl;
    if (this != &materia)
        this->type = materia.type;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}
