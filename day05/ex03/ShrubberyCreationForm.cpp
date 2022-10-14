/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:32:23 by osallak           #+#    #+#             */
/*   Updated: 2022/10/14 02:46:39 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm( std::string _target )
    : Form("ShrubberyCreationForm", 145, 137), _target(_target)
{
    std::cout << "ShrubberyCreationForm: Constructor Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
    std::cout << "ShrubberyCreationForm: Destructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other)
    : Form("ShrubberyCreationForm", 145, 137), _target(other.getTarget())
{
    std::cout << "ShrubberyCreationForm: Copy Constructor Called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget( void ) const
{
    return ( _target );
}

const ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& other)
{
    _target = other.getTarget();
    return (*this);
}

void ShrubberyCreationForm::specialFeature( void ) const
{
       std::fstream  out;
    
    
        out.open(_target + "_shrubbery", std::ios::out);
        if (out.is_open() == 0){
            std::cout << "error: cannot open file" << std::endl;
            return;
        }
        out << "\t\t\t\t\t\t          ,@@@@@@@,\n\
                    ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
                 ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
                ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
                %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
                %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
                `&%\\ ` /%&'    |.|        \\ '|8'\n\
                    |o|        | |         | |\n\
                    |.|        | |         | |\n\
                 \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;

}

void ShrubberyCreationForm::setTarget( std::string _target)
{
    this->_target = _target;
}