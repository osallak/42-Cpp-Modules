#include "WrongCat.hpp"



WrongCat::WrongCat( void )
{
    type  = "WrongCat";
    std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other)
{
    std::cout << "WrongCat: Copy constructor called" << std::endl;
    type = other.getType();
}

WrongCat::~WrongCat( void )
{
    std::cout << "Default Destructor Called " << std::endl;
}

const WrongCat& WrongCat::operator= ( const WrongCat& other)
{
    std::cout << "WrongCat: assignement operator overloaded " << std::endl; 
    this->type = other.getType();
    return *this;
}

void WrongCat::makeSound( void ) const
{
    std::cout << " Barking..." << std::endl; 
}