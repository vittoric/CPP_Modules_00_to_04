#include <string>
#include <iostream>

int main(void)
{
    // create a string
    std::string str = "HI THIS IS BRAIN";
    // create a pointer to a string
    std::string *stringPTR = &str;
    // create a reference to a string
    std::string &stringREF = str;

    // The memory address of the string variable.
    std::cout << "Memory address of the string variable: " << &str << std::endl;

    // The memory address held by stringPTR.
    std::cout << "Memory address held by stringPTR:      " << stringPTR << std::endl;

    // The memory address held by stringREF.
    std::cout << "Memory address held by stringREF:      " << &stringREF << std::endl;

    // Check if all addresses are the same
    if (stringPTR == &str && &stringREF == &str)
        std::cout << "All addresses are the same." << std::endl;
    else
        std::cout << "All addresses are not the same." << std::endl;

    std::cout << std::endl;

    // The value of the string variable
    std::cout << "Value of the string variable: " << str << std::endl;

    // The value pointed to by stringPTR.
    std::cout << "Value using pointer:          " << *stringPTR << std::endl;

    // The value pointed to by stringREF.
    std::cout << "Value using reference:        " << stringREF << std::endl;

    std::cout << std::endl;

    // modify the string using the pointer
    *stringPTR = "HI THIS IS NEW BRAIN";

    // print the string using the pointer
    std::cout << "Modified Value using pointer:   " << *stringPTR << std::endl;

    // modify the string using the reference
    stringREF = "HI THIS IS NEW NEW BRAIN";

    // print the string using the reference
    std::cout << "Modified Value using reference: " << stringREF << std::endl;
}