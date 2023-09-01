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
	
	private :
		int fixedPointValue;
		static const int fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif