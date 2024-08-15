#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << b << std::endl;

    //Fixed c = a + b;                        // Usa la sobrecarga del operador +
    //std::cout << "Sum: " << c << std::endl; // Imprime la suma de 10 y 20

    return 0;
}