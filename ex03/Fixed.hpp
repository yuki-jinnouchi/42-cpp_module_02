#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

/*
Add public member functions to your class to overload the following operators:
• The 6 comparison operators: >, <, >=, <=, == and !=.
• The 4 arithmetic operators: +, -, *, and /.
• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
  post-decrement) operators, that will increase or decrease the fixed-point value from
  the smallest representable ϵ such as 1 + ϵ > 1.

Add these four public overloaded member functions to your class:
• A static member function min that takes as parameters two references on fixed-point
  numbers, and returns a reference to the smallest one.
• A static member function min that takes as parameters two references to constant
  fixed-point numbers, and returns a reference to the smallest one.
• A static member function max that takes as parameters two references on fixed-point
numbers, and returns a reference to the greatest one.
• A static member function max that takes as parameters two references to constant
  fixed-point numbers, and returns a reference to the greatest one.
*/

class Fixed {
  public:
    Fixed();
    ~Fixed();

    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &source);

    Fixed &operator=(const Fixed &source);

    bool operator>(const Fixed &rhs) const;
    bool operator<(const Fixed &rhs) const;
    bool operator>=(const Fixed &rhs) const;
    bool operator<=(const Fixed &rhs) const;
    bool operator==(const Fixed &rhs) const;
    bool operator!=(const Fixed &rhs) const;

    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed &operator++(int);
    Fixed &operator--(int);

    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

    float toFloat(void) const;
    int toInt(void) const;

    int getRawBits(void) const;
    void setRawBits(int const raw);


  private:
    int fixedPointInteger;
    static const int fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
Fixed operator+(const Fixed &lhs, const Fixed &rhs);
Fixed operator-(const Fixed &lhs, const Fixed &rhs);
Fixed operator*(const Fixed &lhs, const Fixed &rhs);
Fixed operator/(const Fixed &lhs, const Fixed &rhs);

#endif
