/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:31:32 by osallak           #+#    #+#             */
/*   Updated: 2022/10/06 23:45:48 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal{
    public:
           WrongDog( void );
           ~WrongDog( void );
           WrongDog ( const WrongDog& other);
           const WrongDog& operator= ( const WrongDog& other);
            void makeSound( void ) const;
};