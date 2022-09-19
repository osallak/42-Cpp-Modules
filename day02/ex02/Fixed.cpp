#include "Fixed.hpp"


Fixed::~Fixed(void)
{
	std::cout << "Default Destructor Called" << std::endl;
}


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

Fixed::Fixed(const int fixedPointValue)
	: fixedPointValue(fixedPointValue << fractionalBits)
{
	std::cout << "int Constructor called" << std::endl;
}

Fixed::Fixed(const float fixedPointValue)
	: fixedPointValue((int)round(fixedPointValue * (float)(1 << fractionalBits)))
{
	std::cout << "float Constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPointValue;
}

void Fixed::setRawBits(int fpValue)
{
	fixedPointValue = fpValue;
	std::cout << "setRawBits member function called" << std::endl;

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
	std::cout << "Copy assignment operator called" << std::endl;
	fixedPointValue = other.getRawBits();
	return *this;
}

std::ostream& operator<< (std::ostream& outstream, Fixed const& obj)
{
	outstream << obj.toFloat();
	return outstream;
}

//comparison operators overload

bool Fixed::operator > (const Fixed& other) const
{
	return this->toFloat() > other.toFloat();
}

bool Fixed::operator >= (const Fixed& other) const
{
	return this->toFloat() >= other.toFloat();
}

bool Fixed::operator <(const Fixed& other) const
{
	return this->toFloat() < other.toFloat();
}

bool Fixed::operator <= (const Fixed& other) const
{
	return this->toFloat() <=  other.toFloat();
}

bool Fixed::operator == (const Fixed& other) const
{
	return this->toFloat() == other.toFloat();
}

bool Fixed::operator != (const Fixed& other) const
{
	return this->toFloat() != other.toFloat();
}

//arithmetic operators overload + - * /


float Fixed::operator +(const Fixed& other) const
{
	return (this->toFloat() + other.toFloat());
}


float Fixed::operator -(const Fixed& other) const
{
	return (this->toFloat() - other.toFloat());
}


float Fixed::operator *(const Fixed& other) const
{
	return (this->toFloat() * other.toFloat());
}


float Fixed::operator /(const Fixed& other) const
{
	return (this->toFloat() / other.toFloat());
}

// Pre/Post increment && Pre/Post decrement operators overload 
//void=> prefix
//int=> postfix

float Fixed::operator++(void)
{
	fixedPointValue++;

	return toFloat();
}

float Fixed::operator++( int )
{
	float tmp = toFloat();
	fixedPointValue++;
	return tmp;
}

float Fixed::operator--(void)
{
	fixedPointValue--;
	return toFloat();
}

float Fixed::operator--(int)
{
	float tmp = toFloat();
	fixedPointValue--;
	return tmp;
}

//comparison functions min && max with different arguments
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}


const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}
