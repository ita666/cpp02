#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>

class Fixed{
	public :
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
	
	private :
		int fixedPointValue;
		static const int fractionalBits = 8;
};

#endif
