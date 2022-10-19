/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:40:43 by osallak           #+#    #+#             */
/*   Updated: 2022/10/19 19:46:08 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base( void ) {}

Base* generate( void )
{
    int rand = ((unsigned long) &rand % 3);
    
    switch (rand)
    {
           case 0:
                std::cout << "generating type A...\n";
                return (new A);
            case 1:
                std::cout << "generating type B...\n";
                return (new B);
            case 2:
                std::cout << "generating type C...\n";
                return (new C);
    }
    return (0x0);
}

void identify(Base *p)
{
    std::string __type;

    if (dynamic_cast<A *>(p)){
        __type = "A";
    } else if (dynamic_cast<B *>(p)){
        __type = "B";
    } else {
        __type = "C";
    }
    std::cout << "this object is a  " << __type <<  std::endl;
}

void identify(Base& p)
{
    std::string __type;
    A _a;
    B _b;
    C _c;

    try{
        _a = dynamic_cast<A &>(p);
        std::cout << "the type of p is: A\n";
    }
    catch (std::bad_cast&){
        try{
            _b = dynamic_cast<B &>(p);
             std::cout << "the type of p is: B\n";
        }
        catch (std::bad_cast&){
                _c = dynamic_cast<C &>(p);
                std::cout << "the type of p is: C\n";
        }
    }
}