#include "Fixed.hpp"

Fixed::Fixed(): fixedPointValue(0){
 std::cout << "Default cosntructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
 	std::cout << "Copy constructor called" << std::endl;
 	this->fixedPointValue = other.fixedPointValue;
}

Fixed &Fixed::operator=(const Fixed& other){
	std::cout << "Assignation opperator called" << std::endl;
	this->fixedPointValue = other.fixedPointValue;
	return *this;
}

Fixed::~Fixed(){
 std::cout << "Default destructor called" << std::endl;
}

/* ------------------------------------------------------------------------------- */
Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = value << this->fractionalBits;
}

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = roundf(value * (1 << this->fractionalBits));
}


float Fixed::toFloat(void) const{
	return (float)this->fixedPointValue / (float)(1 << this->fractionalBits);
}

/*
(float)fixed / (float)(1 << 8) = 10860.0 / 256.0 = 42.4219 */

int Fixed::toInt(void) const{
	return this->fixedPointValue >> this->fractionalBits;
}
/* 
10860 >> 8 = 10860 / 256 / = 42 */

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return out;
}

/* ------------------------------------------------------------------------------- */

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPointValue;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPointValue = raw;
}
