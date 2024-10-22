#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    this->name = "default";
    for(int i = 0; i < 4; i++)
        this->inventory[i]  = NULL;
}

MateriaSource::MateriaSource(std::string &name){
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->inventory[i]=NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource){
    if(this == &materiaSource)
        return;
    this->name = materiaSource.name;
    for(int i = 0; i < 4; i++){
        if(materiaSource.inventory[i])
            this->inventory[i] = materiaSource.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materia){
    if(this == &materia)
        return *this;
    this->name = materia.name;
    for(int i = 0; i < 4; i++){
        if(this->inventory[i])
            delete this->inventory[i];
        this->inventory[i] =NULL;
    }
    for(int i = 0; i < 4; i++){
        if(materia.inventory[i])
            this->inventory[i] = materia.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
    return *this;
}

MateriaSource::~MateriaSource(){
    for(int i = 0; i < 4; i++){
        if(this->inventory[i])
            delete this->inventory[i];
    }
}

void MateriaSource::learnMateria(AMateria *m){
    for(int i = 0; i < 4; i++){
        if(this->inventory[i] == NULL)
            this->inventory[i] = m->clone();
    }
    delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type){
    for(int i = 0; i < 4; i++){
        if(this->inventory[i] && this->inventory[i]->getType() == type)
            return this->inventory[i]->clone();
    }
    return NULL;
}

