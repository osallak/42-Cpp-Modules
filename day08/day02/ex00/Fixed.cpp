#include "Fixed.hpp"



Fixed::Fixed(void)
	: fixedPointValue(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
	: fixedPointValue(other.getRawBits())
{
	std::cout << "Copy Constructor called"  << std::endl;
}


int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPointValue >> fractionalBits;
}

void Fixed::setRawBits(int fractionalBits)
{
	fixedPointValue = fractionalBits;
	std::cout << "setRawBits member function caled" << std::endl;

}


const Fixed& Fixed::operator= (const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixedPointValue = other.getRawBits();
	return other;
}
