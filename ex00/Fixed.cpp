#include "Fixed.hpp"

Fixed::Fixed() : fixedPointInteger(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
  std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &source) {
  std::cout << "Copy constructor called" << std::endl;
  this->fixedPointInteger = source.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &source){
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &source){
    this->fixedPointInteger = source.getRawBits();
  }
  return *this;
}


int Fixed::getRawBits(void) const{
  std::cout << "getRawBits member function called" << std::endl;
  return this->fixedPointInteger;
}

void Fixed::setRawBits(int const raw){
  std::cout << "setRawBits member function called" << std::endl;
  Fixed::fixedPointInteger = raw;
}
