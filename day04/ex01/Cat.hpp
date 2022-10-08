/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:31:32 by osallak           #+#    #+#             */
/*   Updated: 2022/10/07 21:27:54 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal{
    private:
            Brain*  CatBrain;
    public:
            Cat( void );
            ~Cat( void );
            Cat ( const Cat& other);
            const Cat& operator= ( const Cat& other);

            void makeSound( void ) const;
            const Brain* getBrain( void ) const;
            int getIdeasCount( void ) const;
};