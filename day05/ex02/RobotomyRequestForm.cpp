/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:34:40 by osallak           #+#    #+#             */
/*   Updated: 2022/10/13 23:02:18 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string _target )
    : Form("RobotomyRequestForm", 72, 45), _target(_target)
{
    std::cout << "RobotomyRequestForm: Constructor Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
    std::cout << "RobotomyRequestForm: Destructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other)
    : Form("RobotomyRequestForm", 72, 45), _target(other.getTarget())
{
    std::cout << "RobotomyRequestForm: Copy Constructor Called" << std::endl;
}

std::string RobotomyRequestForm::getTarget( void ) const
{
    return ( _target );
}

const RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& other)
{
    _target = other.getTarget();
    return (*this);
}

void RobotomyRequestForm::specialFeature( void ) const
{
    static bool robotomized = true;

    std::cout << "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ..."<<std::endl;

    if (robotomized == true){
        std::cout << _target << " has been robotomized successfully" << std::endl;
    }else{
        std::cout << _target << ":  the robotomy failed" << std::endl;
    }
    robotomized = !robotomized;
}