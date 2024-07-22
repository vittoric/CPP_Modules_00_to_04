#include "phoneBook.hpp"

PhoneBook::PhoneBook() {
    this->contactCount = 0;
    this->contactTotal = 0;
}

PhoneBook::~PhoneBook() {
    return;
}

std::string PhoneBook::trimmingPhone(std::string &str) {
    size_t start = 0;
    size_t end = str.length();
    while (start < end && std::isspace(str[start]))
        start++;
    while (end > start && std::isspace(str[end - 1]))
        end--;
    return str.substr(start, end - start);
}

bool isNumber(const std::string &str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

std::string PhoneBook::getInput(std::string input) {
    std::string str;
    do {
        std::cout << input << ": ";
        std::getline(std::cin, str);
        str = trimmingPhone(str);
    } while (str.empty() || (!isNumber(str) && input == "Phone Number"));
    return str;
}

void PhoneBook::addContact() {
    this->contacts[this->contactCount].getFirstName(getInput("First Name"));
    this->contacts[this->contactCount].getLastName(getInput("Last Name"));
    this->contacts[this->contactCount].getNickName(getInput("Nick Name"));
    this->contacts[this->contactCount].getPhoneNumber(getInput("Phone Number"));
    this->contacts[this->contactCount].getDarkestSecret(getInput("Darkest Secret"));
    this->contactCount = (this->contactCount + 1) % 8;
    if (this->contactTotal < 8)
        this->contactTotal++;
}

void PhoneBook::serchContact() {
    std::string str;
    int index;
    
    if (this->contactTotal == 0) {
        std::cout << "No contacts to search for. Please add a contact first." << std::endl;
        return;
    }
    std::cout << "     Index| First Name|  Last Name|  Nick Name|" << std::endl;
    for (int i = 0; i < this->contactTotal; i++) {
        std::cout  << std::setw(10) << i << "|";
        this->contacts[i].printContact();
    }
    do {
        std::cout << "Enter the index of the contact you would like to see: ";
        std::getline(std::cin, str);
        str = trimmingPhone(str);
        if (!isNumber(str)) {
            std::cout << "Invalid index. Please enter a number." << std::endl;
            continue;
        }
        index = std::stoi(str);
        if (index < 0 || index >= this->contactTotal) {
            std::cout << "Invalid index. Please enter a valid index." << std::endl;
        }
    } while (str.empty() || index < 0 || index >= this->contactTotal);

    this->contacts[index].printKeyWords();
}

void PhoneBook::printContact() {
    if (this->contactTotal == 0) {
        std::cout << "No contacts to print. Please add a contact first." << std::endl;
        return;
    }
    std::cout << "     Index|First Name|  Last Name|  Nick Name|" << std::endl;
    for (int i = 0; i < this->contactTotal; i++) {
        std::cout  << std::setw(10) << i + 1 << "|";
        this->contacts[i].printContact();
    }
}
