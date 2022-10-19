/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:36:31 by osallak           #+#    #+#             */
/*   Updated: 2022/10/19 01:42:27 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ___BASE___ 
#define ___BASE___ 1

class Base{
    public:
        virtual ~Base( void );
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif