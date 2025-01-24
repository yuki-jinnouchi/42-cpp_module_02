#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

/*
Add the following public constructors and public member functions to your class:
• A constructor that takes a constant integer as a parameter.
  It converts it to the corresponding fixed-point value. The fractional bits value is
  initialized to 8 like in exercise 00.
• A constructor that takes a constant floating-point number as a parameter.
  It converts it to the corresponding fixed-point value. The fractional bits value is
  initialized to 8 like in exercise 00.

• A member function float toFloat( void ) const;
  that converts the fixed-point value to a floating-point value.
• A member function int toInt( void ) const;
  that converts the fixed-point value to an integer value.

And add the following function to the Fixed class files:
• An overload of the insertion («) operator that inserts a floating-point representation
  of the fixed-point number into the output stream object passed as parameter.
*/

class Fixed {
  public:
    Fixed();
    ~Fixed();

    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &source);
    Fixed &operator=(const Fixed &source);

    float toFloat(void) const;
    int toInt(void) const;

    int getRawBits(void) const;
    void setRawBits(int const raw);

  private:
    int fixedPointInteger;
    static const int fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
