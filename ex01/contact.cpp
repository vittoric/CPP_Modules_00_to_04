#include "contact.hpp"

Contact::Contact(){
    return;
}

Contact::~Contact(){
    return;
}

void Contact::getFirstName(std::string firstNameValue){
    this->firstName = firstNameValue;
}

void Contact::getLastName(std::string lastNameValue){
    this->lastName = lastNameValue;
}

void Contact::getNickName(std::string nickNameValue){
    this->nickName =nickNameValue;
}

void Contact::getPhoneNumber(std::string phoneNumbreValue){
    this->phoneNumber = phoneNumbreValue;
}

void Contact::getDarkestSecret(std::string darkestSecretValue){
    this->darkestSecret = darkestSecretValue;
}

void Contact::printKeyWords(void){
    std::cout << "First Name: " << this->firstName << std::endl;
    std::cout << "Last Name: " << this->lastName << std::endl;
    std::cout << "Nick Name: " << this->nickName << std::endl;
    std::cout << "Phone Number: " << this->phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
}

void Contact::printContact(void){
    if (this->firstName.length() > 10)
        std::cout << std::setw(10) << this->firstName.substr(0, 9) << ".|" ;
    else
        std::cout << std::setw(11) << this->firstName << "|" ;
    if (this->lastName.length() > 10)
        std::cout << std::setw(10) << this->lastName.substr(0, 9) << ".|" ;
    else
        std::cout << std::setw(11) << this->lastName << "|" ;
    if (this->nickName.length() > 10)
        std::cout << std::setw(10) << this->nickName.substr(0, 9) << ".|" ;
    else
        std::cout << std::setw(11) << this->nickName << "|" ;
    std::cout << std::endl;
}