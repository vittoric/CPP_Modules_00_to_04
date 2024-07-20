#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact{
    public:
    Contact();
    ~Contact();
    private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
}

#endifs