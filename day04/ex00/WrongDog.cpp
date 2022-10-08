/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:32:15 by osallak           #+#    #+#             */
/*   Updated: 2022/10/06 23:46:26 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog( void )
{
    type  = "WrongDog";
    std::cout << "WrongDog Default Constructor Called" << std::endl;
}

WrongDog::WrongDog( const WrongDog& other)
{
    std::cout << "WrongDog: copy constructor called" << std::endl;
    type = other.getType();
}

WrongDog::~WrongDog( void )
{
    std::cout << "Default Destructor Called " << std::endl;
}

const WrongDog& WrongDog::operator= ( const WrongDog& other)
{
    std::cout << "WrongDog: assignement operator overloaded " << std::endl; 
    this->type = other.getType();
    return *this;
}

void WrongDog::makeSound( void ) const
{
    std::cout << "WrongDog's sound" << std::endl; 
}