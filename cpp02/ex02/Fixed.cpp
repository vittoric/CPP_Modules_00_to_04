#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Defult constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : _value(fixed._value)
{
    std::cout << "Copy constructor called" << std::endl;
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

// Constructor that takes an integer as input
Fixed::Fixed(int const intVal)
{
    std::cout << "Int constructor called" << std::endl;
    _value = intVal << _fractionalBits;
}

// Constructor that takes a float as input
Fixed::Fixed(float const floatVal)
{
    std::cout << "Float constructor calles" << std::endl;
    _value = static_cast<int>(roundf(floatVal * (1 << _fractionalBits)));
}

// Set the raw value
void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member functio called" << std::endl;
    _value = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

// convert to float
float Fixed::toFloat(void) const
{
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

// convert to int
int Fixed::toInt(void) const
{
    return _value >> _fractionalBits;
}

// comparation operators
bool Fixed::operator>(const Fixed &other) const
{
    return _value > other._value;
}

bool Fixed::operator<(const Fixed &other) const
{
    return _value < other._value;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return _value >= other._value;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return _value <= other._value;
}

bool Fixed::operator==(const Fixed &other) const
{
    return _value == other._value;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return _value != other._value;
}

// arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

// increment and decrement operators
Fixed &Fixed::operator++() // pre-increment
{
    ++_value;
    return *this;
}

Fixed Fixed::operator++(int) // post-increment
{
    Fixed temp = *this;
    ++_value;
    return temp;
}

Fixed &Fixed::operator--() // pre-decremento
{
    --_value;
    return *this;
}

Fixed Fixed::operator--(int) // post-decrement
{
    Fixed temp = *this;
    --_value;
    return temp;
}

// static funcctions min and max
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

// overload operator
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
