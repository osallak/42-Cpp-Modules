/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 01:27:40 by osallak           #+#    #+#             */
/*   Updated: 2022/10/14 02:16:15 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM__ 

#include "Form.hpp"


class ShrubberyCreationForm : public Form{
        public:

            ShrubberyCreationForm( std::string _target );
            ~ShrubberyCreationForm( void );
            ShrubberyCreationForm( const ShrubberyCreationForm& other);
            const ShrubberyCreationForm& operator= (const ShrubberyCreationForm& other);

            std::string getTarget( void ) const;
            void specialFeature( void ) const;
            void setTarget( std::string _target);
        private:
                std::string _target;
};

#define __SHRUBBERYCREATIONFORM__ 
#endif