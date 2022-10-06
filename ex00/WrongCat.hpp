/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:31:32 by osallak           #+#    #+#             */
/*   Updated: 2022/10/06 23:42:55 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public:
           WrongCat( void );
           ~WrongCat( void );
           WrongCat ( const WrongCat& other);
           const WrongCat& operator= ( const WrongCat& other);
            void makeSound( void ) const;
};