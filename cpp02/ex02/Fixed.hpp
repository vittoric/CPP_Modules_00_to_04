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
    // ortodox canonic form
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed &operator=(const Fixed &fixed);
    ~Fixed();

    // new constructors
    Fixed(int const intVal);
    Fixed(float const floatVal);

    // member funccions
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    // comparation operators
    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;

    // arithmetic operators
    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

    // increment and decrement operators
    Fixed &operator++();   // pre-increment
    Fixed operator++(int); // post-increment
    Fixed &operator--();   // pre-decrement
    Fixed operator--(int); // post-decrement

    // static member function
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
};

// overload operator
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif