#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Defult constructor called" << std::endl;
    _value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    _value = fixed._value;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignation operator called" << std::endl;
    if (this != &fixed)
        _value = fixed._value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}