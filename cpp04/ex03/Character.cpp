#include "Character.hpp"

Character::Character(){
    this->name = "default";
    for (int i = 0; i < 4; i++)
         this->inventory[i] = NULL;
}

Character::Character(const std::string &name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character &character){
    if(this == &character)
        return;
    *this = character;
}
Character &Character::operator=(const Character &Character){
    if(this == &Character)
        return *this;
    this->name = Character.getName();
     for(int i = 0; i < 4; i++){
        if(Character.inventory[i])
            this ->inventory[i] = Character.inventory[i]->clone();
        else
            this->inventory[i] =NULL;
     }
return *this;
}

Character::~Character(){
    for(int i = 0; i < 4; i++){
        if(this->inventory[i])
            delete this->inventory[i];
    }
}

std::string const &Character::getName() const{
    return (this->name);
}

void Character::equip(AMateria *m){
    for (int i = 0; i < 4; i++){
        if(this->inventory[i] == NULL){
            this->inventory[i] = m;
            break;
        }
    }
   // delete m;
}

void Character::unequip(int idx){
   if (idx >= 0 && idx < 4)
        this->inventory[idx] = NULL; 
}

void Character::use(int idx, ICharacter &target){
    if(idx >= 0 && idx < 4 && this->inventory[idx]) 
        this->inventory[idx]->use(target);
}