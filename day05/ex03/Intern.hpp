/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:40:14 by osallak           #+#    #+#             */
/*   Updated: 2022/10/14 02:13:33 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN__
#define __INTERN__
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

struct __Forms{
    std::string _name;
    // bool        _souldBeFreed;
    Form*       _form;
};

class Intern {
    public:
        Intern( void );
        ~Intern( void );
        Intern( Intern const& other);
        Intern const& operator= (Intern const& other);

        Form* makeForm(std::string _name, std::string _target);
};

#endif