/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 01:01:47 by osallak           #+#    #+#             */
/*   Updated: 2022/10/30 09:30:31 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK__HPP__
#define __MUTANTSTACK__HPP__

#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>
#include <vector>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>{
    public:
        MutantStack( void ){}
        MutantStack( MutantStack const& other): std::stack<T>(other){}
        ~MutantStack(){}
    
        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack const& operator= (MutantStack& other)
        {
            this->c = other.c;
            return *this;
        }
        
        iterator begin(void)
        {
            return (this->c.begin());
        }
        
        iterator end(void)
        {
            return (this->c.end());
        }
};
#endif