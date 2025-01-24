#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

/*
Let’s start by creating the class Point in Orthodox Canonical Form that represents
a 2D point:
• Private members:
  ◦ A Fixed const attribute x.
  ◦ A Fixed const attribute y.
  ◦ Anything else useful.
• Public members:
  ◦ A default constructor that initializes x and y to 0.
  ◦ A constructor that takes as parameters two constant floating-point numbers.
    It initializes x and y with those parameters.
  ◦ A copy constructor.
  ◦ A copy assignment operator overload.
  ◦ A destructor.
  ◦ Anything else useful.
*/

class Point {
  public:
    Point();
    ~Point();

    Point(float const x, float const y);
    Point(const Point &source);

    Point &operator=(const Point &source);

    Fixed getX() const;
    Fixed getY() const;
    void setX(Fixed const x);
    void setY(Fixed const y);

  private:
    Fixed x;
    Fixed y;
};

#endif
