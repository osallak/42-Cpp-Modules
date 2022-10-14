/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:56:15 by osallak           #+#    #+#             */
/*   Updated: 2022/10/14 02:48:15 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern( void )
{
    std::cout << "Intern Constructor Called" << std::endl;
}

Intern::~Intern( void )
{
    std::cout << "Intern Desstructor Called" << std::endl;
}

Intern::Intern( Intern const& other)
{
    std::cout << "Copy Constructor Called" << std::endl;
    (void) other;
}

Intern const& Intern::operator= (Intern const& other)
{
    (void) other;
    return *this;
}

Form*  Intern::makeForm(std::string _name, std::string _target)
{
    std::string _forms[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};

    int i = 0;

    while (i < 3 && _forms[i] != _name)
            i++;

    switch (i)
    {
    case (0):
        std::cout << "Intern creates " << _name << std::endl;
        return (new RobotomyRequestForm( _target ));
    case (1):
        std::cout << "Intern creates " << _name << std::endl;
        return (new ShrubberyCreationForm( _target ));
    case (2):
        std::cout << "Intern creates " << _name << std::endl;
        return (new PresidentialPardonForm( _target ));
    default:
        std::cout << "Invalid Form" << std::endl;
    }
    return ( NULL);
}