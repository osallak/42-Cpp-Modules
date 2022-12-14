#include"Point.hpp"


Point::Point(void)
	:x(0), y(0)
{
	std::cout << "Point: default constructror called" << std::endl;	
}

Point::Point(const float x, const float y)
	:x(x), y(y)
{
	std::cout << "Point: float constructror called" << std::endl;	
}

Point::~Point(void)
{
	std::cout << "Point: Destructor called" << std::endl;
}

Point::Point(const Point& other)
	:x(other.getX()), y(other.getY())
{
	//constructed using initializer list
}


//Copy assignment operator

Point& Point::operator= (const Point& other)
{
	(Fixed) this->x = (Fixed) other.getX();
	(Fixed) this->y = (Fixed) other.getY();
	return *this;
}

//Getters && setters

const Fixed& Point::getX(void) const
{
	return x;
}

const Fixed& Point::getY(void) const
{
	return y;
}
