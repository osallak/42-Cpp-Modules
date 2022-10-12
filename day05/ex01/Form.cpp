/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:22:08 by osallak           #+#    #+#             */
/*   Updated: 2022/10/12 02:24:45 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form( std::string name, uint32_t _gradeToSign,  uint32_t _gradeToExecute )
    : _name( name ), _gradeToSign( _gradeToSign ), _gradeToExecute( _gradeToExecute ), _formStatus( false )
{
    std::cout << "Form Constructor Called\n";
}

Form::~Form( void )
{
    std::cout << "Form Destructor Called\n";
}

Form::Form( const Form& other)
    : _name( other.getName() ), _gradeToSign( other.getGradeToSign() ), _gradeToExecute( other.getGradeToExec() ), _formStatus( false )
{
    std::cout << "Form Destructor Called\n";
}

const Form& Form::operator= (const Form& other)
{
    
    return *this;
}

const std::string& Form::getName( void ) const
{
    return ( _name );
}
uint32_t Form::getGradeToSign( void ) const
{
    return ( _gradeToSign );
}

uint32_t Form::getGradeToExec( void ) const
{
    return ( _gradeToExecute );
}

const char* Form::GradeTooHighException::what( void ) const throw()
{
    return "GradeTooHigh"; 
}

const char* Form::GradeTooLowException::what( void ) const throw()
{
    return "GradeTooLow"; 
}

void Form::beSigned( const Bureaucrat& _bureaucrat )
{
    if (_bureaucrat.getGrade() > _gradeToSign)
        throw (GradeTooLowException());
    _formStatus = true;
}

bool Form::getFormStatus( void ) const
{
    return ( _formStatus );
}