#include "Fixed.hpp"


Fixed::~Fixed(void)
{
	std::cout << "Fixed: Default Destructor Called" << std::endl;
}


Fixed::Fixed(void)
	: fixedPointValue(0)
{
	std::cout << "Fixed: Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
	: fixedPointValue(other.getRawBits())
{
	std::cout << "Fixed: Copy Constructor called"  << std::endl;
}

Fixed::Fixed(const int fixedPointValue)
	: fixedPointValue(fixedPointValue << fractionalBits)
{
	std::cout << "Fixed: int Constructor called" << std::endl;
}

Fixed::Fixed(const float fixedPointValue)
	: fixedPointValue((int)round(fixedPointValue * (float)(1 << fractionalBits)))
{
	std::cout << "Fixed: float Constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "Fixed: getRawBits member function called" << std::endl;
	return fixedPointValue;
}

void Fixed::setRawBits(int fpValue)
{
	fixedPointValue = fpValue;
	std::cout << "Fixed: setRawBits member function called" << std::endl;

}


int Fixed::toInt(void) const
{
	return (fixedPointValue >> fractionalBits);
}

float Fixed::toFloat(void) const
{
	return ((float)fixedPointValue / (float)(1 << fractionalBits));
}

const Fixed& Fixed::operator= (const Fixed& other)
{
	std::cout << "Fixed: Copy assignment operator called" << std::endl;
	fixedPointValue = other.getRawBits();
	return *this;
}

std::ostream& operator<< (std::ostream& outstream, Fixed const& obj)
{
	outstream << obj.toFloat();
	return outstream;
}
