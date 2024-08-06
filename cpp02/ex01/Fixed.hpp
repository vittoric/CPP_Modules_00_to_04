#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _value;
        static const int _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed &operator = (const Fixed &fixed);
        ~Fixed();

        float toFloat( void ) const;
        int toInt( void ) const;

};

#endif