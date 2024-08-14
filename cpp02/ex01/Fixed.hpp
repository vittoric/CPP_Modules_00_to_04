#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath> //roundf() library
#include <string>

class Fixed
{
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed &operator=(const Fixed &fixed);
    ~Fixed();
    // new constructors
    Fixed(int const intVal);
    Fixed(float const floatVal);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

// overload operator
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif