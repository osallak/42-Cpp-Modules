/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:31:32 by osallak           #+#    #+#             */
/*   Updated: 2022/10/06 22:29:53 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
    public:
           Dog( void );
           ~Dog( void );
           Dog ( const Dog& other);
           const Dog& operator= ( const Dog& other);
            void makeSound( void ) const;
};