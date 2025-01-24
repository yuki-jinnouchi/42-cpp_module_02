#include "Point.hpp"

Point::Point()
  : x(0), y(0) {
}

Point::~Point(){
}

Point::Point(float const x, float const y)
  : x(x), y(y) {
}

Point::Point(const Point &source)
  : x(source.x), y(source.y) {
}

Point &Point::operator=(const Point &source){
  if (this != &source){
    x = source.getX();
    y = source.getY();
  }
  return *this;
}

Fixed Point::getX() const{
  return x;
}

Fixed Point::getY() const{
  return y;
}
