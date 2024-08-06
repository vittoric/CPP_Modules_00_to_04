#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _fractionalBits = 8;
    public:
        //Ortodox Canonic Form
        //Default constructor
        Fixed();

        //Copy constructor
        Fixed(const Fixed &fixed);

        // Copy assignment operator
        Fixed &operator = (const Fixed &fixed);

        //Destructor
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );

};

#endif