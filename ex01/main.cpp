#include <iostream>
#include <string>
#include <cctype>

std::string trimming(const std::string &str){
    size_t start = 0;
    size_t end = str.length();
    while (start < end && std::isspace(str[start]))
        start++;
    while (end > start && std::isspace(str[end - 1]))
        end--;
    return(str.substr(start, end - start));
}

int main(void) {
    std::string str;
    std::cout << "Hi there! This is your PhoneBook. What would you like to do?" << std::endl;
    str="";
    while (str != "EXIT"){
        std::cout << "ADD, SEARCH or EXIT❓" <<std::endl;
        if (!std::getline(std::cin, str)){
            std::cout << "Error reading input. Exiting." << std::endl;
            break;
        }
        if (trimming(str) == "ADD")
            std::cout << "You chose to add a contact. Please enter the contact's information." << std::endl;

        else if (trimming(str) == "SEARCH")
            std::cout << "You chose to search for a contact. Please enter the contact's name." << std::endl;

        else if (trimming(str) == "EXIT")
            std::cout << "You chose to exit the PhoneBook. Goodbye!" << std::endl;
        else
            std::cout << "Invalid input. Please try again." << std::endl;
    }
    return (0);
}