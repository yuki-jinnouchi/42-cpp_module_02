#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

/*
Create a class in Orthodox Canonical Form that represents a fixed-point number:
• Private members:
◦ An integer to store the fixed-point number value.
◦ A static constant integer to store the number of fractional bits. Its value
will always be the integer literal 8.
• Public members:
◦ A default constructor that initializes the fixed-point number value to 0.
◦ A copy constructor.
◦ A copy assignment operator overload.
◦ A destructor.
◦ A member function int getRawBits( void ) const;
that returns the raw value of the fixed-point value.
◦ A member function void setRawBits( int const raw );
that sets the raw value of the fixed-point number.
*/

class Fixed {
  public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &source);
    Fixed &operator=(const Fixed &source);

    int getRawBits(void) const;
    void setRawBits(int const raw);

  private:
    int fixedPointInteger;
    static const int fractionalBits = 8;
};

#endif
