/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:14:33 by osallak           #+#    #+#             */
/*   Updated: 2022/10/13 23:20:48 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM__
#define __FORM__

#include <iostream>
#include <exception>
#include <stdexcept>
#include "Bureaucrat.hpp"


class Bureaucrat;
class Form{
        private:
                const std::string	_name;
                const uint32_t		_gradeToSign;
				const uint32_t		_gradeToExecute;
				bool				_formStatus;

		public:
				// Form ( void );
				virtual ~Form ( void );
				Form ( const Form& other);
				Form ( std::string name, uint32_t _gradeToSign,  uint32_t _gradeToExecute);
				const Form& operator= (const Form& other);

				const std::string& getName( void ) const;
				uint32_t getGradeToSign( void ) const;  
				uint32_t getGradeToExec( void ) const;
				bool getFormStatus( void ) const;

				class GradeTooHighException : public std::exception{
							const char *what( void ) const throw();	
				};

				class GradeTooLowException : public std::exception{
							const char *what( void ) const throw();	
				};
				
				class UnsigendFormException : public std::exception{
							const char *what( void ) const throw();	
				};
				
				void beSigned( const Bureaucrat& _bureaucrat );
				void execute(Bureaucrat const & executor) const;
				virtual void specialFeature( void ) const = 0;
				
};

const std::ostream& operator<< (std::ostream& out, const Form& _form );

#endif