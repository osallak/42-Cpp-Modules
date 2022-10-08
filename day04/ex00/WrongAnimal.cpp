#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(void)
	: type("unkown")
{
	std::cout << "WrongAnimal Default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
	: type(other.getType())
{
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Default destructor called!" << std::endl;
}

const WrongAnimal& WrongAnimal::operator= (const WrongAnimal& other)
{
	std::cout << "WrongAnimal: assignement operator overloaded" << std::endl;
	this->type = other.getType();
	return *this;
}

const std::string WrongAnimal::getType(void) const
{
	return this->type;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound" << std::endl; 
}