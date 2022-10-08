/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:32:15 by osallak           #+#    #+#             */
/*   Updated: 2022/10/07 18:23:06 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
    type  = "Dog";
    std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog( const Dog& other)
{
    std::cout << "Dog: copy constructor called" << std::endl;
    type = other.getType();
}

Dog::~Dog( void )
{
    std::cout << "Dog: Default Destructor Called " << std::endl;
}

const Dog& Dog::operator= ( const Dog& other)
{
    std::cout << "Dog: assignement operator overloaded " << std::endl;
    this->type = other.getType();
    return *this;
}

void Dog::makeSound( void ) const
{
    std::cout << "WOOF!..WOOF!..." << std::endl; 
}