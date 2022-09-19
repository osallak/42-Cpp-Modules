#pragma once
#include <iostream>
#include <cmath>


class Fixed{
	private:
		int fixedPointValue;
		static const int fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int fixedPointValue);
		Fixed(const float fixedPointValue);
		~Fixed();
		int getRawBits( void ) const;
		const Fixed& operator= (const Fixed& other);
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<< (std::ostream& outstream, Fixed const& obj);
