/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:30:55 by osallak           #+#    #+#             */
/*   Updated: 2022/10/14 02:16:02 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOT_TO_MY_REQUEST_FORM_HPP__
#define __ROBOT_TO_MY_REQUEST_FORM_HPP__

#include "Form.hpp"

class RobotomyRequestForm : public Form{
            public:

                RobotomyRequestForm( std::string _target );
                ~RobotomyRequestForm( void );
                RobotomyRequestForm( const RobotomyRequestForm& other);
                const RobotomyRequestForm& operator= (const RobotomyRequestForm& other);

                std::string getTarget( void ) const;
                void specialFeature( void ) const;
                void setTarget( std::string _target);
            private:
                std::string _target;          
};

#endif