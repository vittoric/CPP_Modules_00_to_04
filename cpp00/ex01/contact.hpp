#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>
#include <string>

class Contact{
    public:
        Contact();
        ~Contact();
        void getFirstName(std::string firstNameValue);
        void getLastName(std::string lastNameValue);
        void getNickName(std::string nickNameValue);
        void getPhoneNumber(std::string phoneNumberValue);
        void getDarkestSecret(std::string darkestSecretValue);
        void printKeyWords(void);
        void printContact(void);
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
};

#endif