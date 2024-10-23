#include "Cure.hpp"


Cure::Cure() : AMateria(){
    this->type = "cure";
}

Cure::Cure(const std::string &type){
    this->type = type;
}

Cure::Cure(const Cure &cure) :AMateria(cure){
    if (this == &cure)
        return ;
    this->type = cure.type;
}

Cure &Cure::operator=(const Cure &cure){
    if (this == &cure)
        return *this;
    this->type = cure.getType();
    return *this;
}

Cure::~Cure(){
}   

void Cure::use(ICharacter &target){
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria *Cure::clone() const{
    return (new Cure(*this));
}