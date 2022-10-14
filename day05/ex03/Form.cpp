/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:22:08 by osallak           #+#    #+#             */
/*   Updated: 2022/10/14 01:51:02 by osallak          ###   ########.fr       */
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
    std::string* _namePtr = (std::string *) &_name;
    uint32_t     *_gradeToSignPtr = (uint32_t *) &_gradeToSign;
    uint32_t     *_gradeToExecPtr = (uint32_t *) &_gradeToExecute;
    
    *_namePtr = other.getName();
    *_gradeToSignPtr = other.getGradeToSign();
    *_gradeToExecPtr = other.getGradeToExec();
    _formStatus = other.getFormStatus();

    return *this;
}

const std::ostream& operator<< (std::ostream& out, const Form& _form )
{
    std::string status = _form.getFormStatus() == true ? "signed" : "unsigned";
    out << "Name: "<< _form.getName() << ", grade to sign: " << _form.getGradeToSign() << ", grade to execute " << _form.getGradeToExec() << ", Status: "<<  status << std::endl;
    return out;
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

const char* Form::UnsigendFormException::what( void ) const throw()
{
    return "UnsigendForm"; 
}

void Form::beSigned( const Bureaucrat& _bureaucrat )
{
    if ((uint32_t) _bureaucrat.getGrade() > _gradeToSign){
        throw (GradeTooLowException());
    }
    std::cout << "Form: " << _name << " Signed" << std::endl;
    _formStatus = true;
}

void Form::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > (int) _gradeToExecute){
        throw (GradeTooLowException());
    } else if (_formStatus == false){
        throw (UnsigendFormException());
    }
    specialFeature();
    std::cout << "Form: " << _name << " executed" << std::endl;
}

bool Form::getFormStatus( void ) const
{
    return ( _formStatus );
}

void Form::setName( std::string _name )
{
    std::string *_namePtr = (std::string *) &this->_name;

    *_namePtr = _name;
}