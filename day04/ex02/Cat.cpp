/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:12:23 by osallak           #+#    #+#             */
/*   Updated: 2022/10/08 15:59:40 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"



Cat::Cat( void )
    : CatBrain(new Brain())
{
    type  = "Cat";
    std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat( const Cat& other)
    : CatBrain(new Brain())
{
    std::cout << "Cat: Copy constructor called" << std::endl;
    type = other.getType();
    
    *CatBrain = *other.getBrain();
}

Cat::~Cat( void )
{
    delete CatBrain;
    std::cout << "Cat: Default Destructor Called " << std::endl;
}

const Cat& Cat::operator= ( const Cat& other)
{
    std::cout << "Cat: assignement operator overloaded " << std::endl; 
    this->type = other.getType();
    *CatBrain = *other.getBrain();
    
    return *this;
}

void Cat::makeSound( void ) const
{
    std::cout << "MEOWWWWWWW......" << std::endl; 
}

const Brain* Cat::getBrain( void ) const
{
    return (CatBrain);
}

