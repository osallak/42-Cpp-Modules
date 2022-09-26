#pragma once
#include <iostream>

class Fixed{
	private:
		int fixedPointValue;
		static const int fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed& other);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		const Fixed& operator= (const Fixed& other);
};
