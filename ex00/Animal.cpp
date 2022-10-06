#include "Animal.hpp"


Animal::Animal(void)
	: type("unkown")
{
	std::cout << "Animal Default constructor called!" << std::endl;
}

Animal::Animal(const Animal& other)
	: type(other.getType())
{
	std::cout << "Animal copy constructor called!" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal Default destructor called!" << std::endl;
}

const Animal& Animal::operator= (const Animal& other)
{
	this->type = other.getType();
	return *this;
}

const std::string Animal::getType(void) const
{
	return this->type;
}

void Animal::setType(std::string type)
{
	this->type = type;
}

void Animal::makeSound(void) const
{
	std::cout << "Animals Voice" << std::endl; 
}