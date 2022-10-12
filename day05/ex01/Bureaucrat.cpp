/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:16:25 by osallak           #+#    #+#             */
/*   Updated: 2022/10/12 02:23:46 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*****************************-CONSTRUCTORS-DESTRUCTORS-***********************************/

Bureaucrat::Bureaucrat( std::string name, int grade )
    : _name( name )
{
    std::cout << "Bureaucrat: constructor called\n";
	if (grade < 1){
		throw (GradeTooHighException());
	} else if (grade > 150){
		throw (GradeTooLowException());
	}
	_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other )
    : _name( other.getName() ) , _grade ( other.getGrade() )
{
    std::cout << "Bureaucrat: copy constructor called\n";
}

Bureaucrat::~Bureaucrat( void )
{
    std::cout << "Bureaucrat: default destructor called\n";
}

/*****************************-OPERATORS-OVELOADING-***********************************/

const Bureaucrat& Bureaucrat::operator= ( const Bureaucrat& other )
{
	_grade = other.getGrade();
    return *this;
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat& _bureaucrat)
{
	out << _bureaucrat.getName() << ", bureaucrat grade " << _bureaucrat.getGrade() << std::endl;

	return (out);
}

/*****************************-EXCEPTION-CLASSES-***********************************/

const char* Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return "GradeTooHighException";
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return "GradeTooLowException";
}

/*****************************-GETTERS-***********************************/

int Bureaucrat::getGrade( void ) const
{
    return ( _grade );
}

std::string Bureaucrat::getName( void ) const
{
	return ( _name );
}

/*****************************-OTHER-MEMBER-FUNCTIONS-***********************************/

void Bureaucrat::increment( void )
{
	if (_grade == 1)
		throw (GradeTooHighException());
	_grade--;
}

void Bureaucrat::decrement( void )
{
	if (_grade == 150)
		throw (GradeTooLowException());
	_grade++;
}

void Bureaucrat::signForm( Form& _form) const
{
	try {
		_form.beSigned( *this );
	}
	catch (std::exception & e){
		std::cout << _name << " couldn’t sign " << _form.getName() << " Form, because " << e.what() << std::endl;
	}
	std::cout << _name << "  signed " << _form.getName()<< std::endl;
}