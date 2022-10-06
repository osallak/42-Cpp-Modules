#include "Cat.hpp"



Cat::Cat( void )
{
    type  = "Cat";
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat( const Cat& other)
{
    std::cout << "Cat: Copy constructor called" << std::endl;
    type = other.getType();
}

Cat::~Cat( void )
{
    std::cout << "Default Destructor Called " << std::endl;
}

const Cat& Cat::operator= ( const Cat& other)
{
    std::cout << "Cat: assignement operator overloaded " << std::endl; 
    this->type = other.getType();
    return *this;
}

void Cat::makeSound( void ) const
{
    std::cout << "Cat's voice" << std::endl; 
}