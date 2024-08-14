#include "Harl.hpp"

#define RESET "\033[0m"
#define DEBUG "\033[34m"   // Azul para heap
#define INFO "\033[32m"	   // Verde para stack
#define WARNING "\033[33m" // Amarelo para stack
#define ERROR "\033[31m"   // Vermelho para stack

int main()
{
	Harl harl;

	std::cout << std::endl;

	std::cout << DEBUG;
	std::cout << "Testing DEBUG lavel: " << std::endl;
	harl.complain("DEBUG");
	std::cout << RESET;

	std::cout << std::endl;

	std::cout << INFO;
	std::cout << "Testing INFO level:" << std::endl;
	harl.complain("INFO");
	std::cout << RESET;

	std::cout << std::endl;

	std::cout << WARNING;
	std::cout << "Testing WARNING level:" << std::endl;
	harl.complain("WARNING");
	std::cout << RESET;

	std::cout << std::endl;

	std::cout << ERROR;
	std::cout << "Testing ERROR level: " << std::endl;
	harl.complain("ERROR");
	std::cout << RESET;

	std::cout << std::endl;
}