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
		
		//comparison operators overload
		
		bool operator > (const Fixed& other) const;
		bool operator >= (const Fixed& other) const;
		bool operator < (const Fixed& other) const;
		bool operator <= (const Fixed& other) const;
		bool operator == (const Fixed& other) const;
		bool operator != (const Fixed& other) const;
		
		//arithmetic operators overload + - * /
		
		float operator +(const Fixed& other) const;
		float operator -(const Fixed& other) const;
		float operator *(const Fixed& other) const;
		float operator /(const Fixed& other) const;
		
		//post/pre increment && post/pre decrement operators overload 
		
		float operator++(void);
		float operator++(int);
		float operator--(void);
		float operator--(int);
		//min/max functions overload
		static  Fixed& min(Fixed& a, Fixed& b);
		static  const Fixed& min(const Fixed& a, const Fixed& b);
		static  Fixed& max(Fixed& a, Fixed& b) ;
		static  const Fixed& max(const Fixed& a, const Fixed& b);

};

std::ostream& operator<< (std::ostream& outstream, Fixed const& obj);
