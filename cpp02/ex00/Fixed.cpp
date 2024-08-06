#include "Fixed.hpp"

//Default constructor
Fixed::Fixed()
{
    std::cout << "Defult constructor called" << std::endl;
    _value = 0;
}

//Copy constructor
Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    _value = fixed._value;
}

// Copy assignment operator
Fixed &Fixed::operator = (const Fixed &fixed)
{
    std::cout << "Copy assignation operator called" << std::endl;
    if (this != &fixed)
        _value = fixed._value;
    return *this;
}

//Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

//getter for _value
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

//setter for _value
void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}