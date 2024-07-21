#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"
#include <iostream>
#include <string>
#include <cctype>

class PhoneBook {
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact();
        void serchContact();
        void printContact();
        std::string getInput(std::string input);
        std::string trimmingPhone(std::string &str);
    private:
        Contact contacts[8];
        int contactCount;
        int contactTotal;
};

#endif