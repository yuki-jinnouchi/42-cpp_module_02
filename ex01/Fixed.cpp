#include "Fixed.hpp"

// public:
// default constructor
Fixed::Fixed()
  : fixedPointInteger(0) {
  std::cout << "Default constructor called" << std::endl;
}

// destructor
Fixed::~Fixed(){
  std::cout << "Destructor called" << std::endl;
}

// constructor
Fixed::Fixed(const int value)
  : fixedPointInteger(value << fractionalBits) {
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
  : fixedPointInteger(roundf(value * (1 << fractionalBits))) {
  std::cout << "Float constructor called" << std::endl;
}

// copy constructor
Fixed::Fixed(const Fixed &source)
  : fixedPointInteger(source.getRawBits()) {
  std::cout << "Copy constructor called" << std::endl;
}

// operator
Fixed &Fixed::operator=(const Fixed &source){
  std::cout << "Copy assignation operator called" << std::endl;
  if (this != &source){
    this->fixedPointInteger = source.getRawBits();
  }
  return *this;
}

// member functions
float Fixed::toFloat(void) const{
  return static_cast<float>(this->fixedPointInteger) / (1 << fractionalBits);
}

int Fixed::toInt(void) const{
  return this->fixedPointInteger >> fractionalBits;
}

// private:
int Fixed::getRawBits(void) const{
  return this->fixedPointInteger;
}

void Fixed::setRawBits(int const raw){
  Fixed::fixedPointInteger = raw;
}

// overload of the insertion («) operator
std::ostream &operator<<(std::ostream &os, const Fixed &fixed){
  os << fixed.toFloat();
  return os;
}
