#include "Fixed.hpp"



Fixed::Fixed(void)
	: fixedPointValue(0)
{
	std::cout << "Fixed: Default Constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed: Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
	: fixedPointValue(other.getRawBits())
{
	std::cout << "Fixed: Copy Constructor called"  << std::endl;
}

//Getter

int Fixed::getRawBits(void) const
{
	std::cout << "Fixed: getRawBits member function called" << std::endl;
	return fixedPointValue >> fractionalBits;
}

//Setter

void Fixed::setRawBits(int fractionalBits)
{
	fixedPointValue = fractionalBits;
	std::cout << "Fixed: setRawBits member function caled" << std::endl;

}


const Fixed& Fixed::operator= (const Fixed& other)
{
	std::cout << "Fixed: Copy assignment operator called" << std::endl;
	fixedPointValue = other.getRawBits();
	return other;
}
