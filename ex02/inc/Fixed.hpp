#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>
#include <cmath>

class Fixed{
	public :
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed (const int value);
		Fixed (const float value);
		float toFloat(void) const;
		int toInt(void) const;

		Fixed &operator++();    // Prefix increment
		Fixed operator++(int);  // Postfix increment
		Fixed &operator--();    // Prefix decrement
		Fixed operator--(int);  // Postfix decrement

		// Comparison operators
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		// Arithmetic operators
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		// Static functions
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
	
	private :
		int fixedPointValue;
		static const int fractionalBits = 8;
};
	std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif