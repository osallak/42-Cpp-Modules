/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:31:32 by osallak           #+#    #+#             */
/*   Updated: 2022/10/06 23:42:23 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal{
    public:
           Cat( void );
           ~Cat( void );
           Cat ( const Cat& other);
           const Cat& operator= ( const Cat& other);
            void makeSound( void ) const;
};