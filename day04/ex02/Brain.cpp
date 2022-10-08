/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:43:41 by osallak           #+#    #+#             */
/*   Updated: 2022/10/07 20:45:21 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//orthodox canonical form mandatory methodes

Brain::Brain( void )
    : ideasCount( 0 )
{
    std:: cout  << "Brain: default constructor called" << std::endl; 
}

Brain::Brain( const std::string ideas[] , int ideasCount)
    : ideasCount( ideasCount )
{
    std:: cout  << "Brain: constructed with " << ideasCount << " ideas" << std::endl;
    for (int i = 0; i < ideasCount; i++){
        this->ideas[i] = ideas[i];
    }
}

Brain::Brain( const Brain& other)
    : ideasCount( other.getIdeasCount())
{
    std::cout << "Brain: copy Constructor called" << std::endl;
    for (int i = 0 ;i < ideasCount; i++){
        this->ideas[i] = other.getIdea( i );
    }
}

Brain::~Brain( void )
{
    std::cout << "Brain: Default Destructor Called"<< std::endl;
}

const Brain& Brain::operator= ( const Brain& other)
{
    this->ideasCount  = other.getIdeasCount();
    for (int i = 0 ; i < ideasCount; i++){
        this->ideas[i] = other.getIdea( i );
    }
    return *this;
}

//other methods

void Brain::setIdea( std ::string idea)
{
    if (ideasCount >= 100)
        ideasCount = 0;
    this->ideas[ideasCount] = idea;
    ideasCount++;
}

const std::string& Brain::getIdea( int index) const
{
    return (ideas[index]);
}

int Brain::getIdeasCount( void ) const
{
    return (this->ideasCount);  
}
