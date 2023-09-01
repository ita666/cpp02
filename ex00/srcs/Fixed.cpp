#include "Fixed.hpp"

Fixed::Fixed(): fixedPointValue(0){
 std::cout << "Default cosntructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
 	std::cout << "Copy constructor called" << std::endl;
 	this->fixedPointValue = other.fixedPointValue;
}

Fixed &Fixed::operator=(const Fixed &){
	std::cout << "Assignation opperator called" << std::endl;
	return *this;
}


Fixed::~Fixed(){
 std::cout << "Default destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPointValue;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPointValue = raw;
}