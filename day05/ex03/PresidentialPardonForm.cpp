/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:39:36 by osallak           #+#    #+#             */
/*   Updated: 2022/10/14 02:46:55 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string _target )
    : Form("PresidentialPardonForm", 25, 5), _target(_target)
{
    std::cout << "PresidentialPardonForm: Constructor Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
    std::cout << "PresidentialPardonForm: Destructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other)
    : Form("PresidentialPardonForm", 25, 5), _target(other.getTarget())
{
    std::cout << "PresidentialPardonForm: Copy Constructor Called" << std::endl;
}

std::string PresidentialPardonForm::getTarget( void ) const
{
    return ( _target );
}

const PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& other)
{
    _target = other.getTarget();
    return (*this);
}

void PresidentialPardonForm::specialFeature( void ) const
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::setTarget( std::string _target)
{
    this->_target = _target;
}