/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:16:27 by osallak           #+#    #+#             */
/*   Updated: 2022/10/12 02:13:59 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP
#define __BUREAUCRAT_HPP
#pragma once

#include <iostream>
#include <exception>
#include <stdexcept>
#include <algorithm>

#include "Form.hpp"

class Form;
class Bureaucrat{
        private:
                const std::string _name;
                uint8_t           _grade;
        public:
                Bureaucrat ( std::string name, int grade );
                Bureaucrat ( const Bureaucrat& other );
                ~Bureaucrat ( void );

                const Bureaucrat& operator= (const Bureaucrat& other);

                int getGrade( void ) const;
                std::string getName( void ) const;

                void increment( void );
                void decrement( void );
                

                struct GradeTooHighException : public std::exception
                {
                    const char* what( void ) const throw();
                };
                struct GradeTooLowException : public std::exception
                {
                    const char* what( void ) const throw();
                };
                
                void signForm( Form& _form) const;
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat& _bureaucrat);

#endif