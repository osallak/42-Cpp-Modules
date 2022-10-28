/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:02:28 by osallak           #+#    #+#             */
/*   Updated: 2022/10/28 04:17:44 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN__HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <iterator>


class Span{
    private:
        std::vector<int> __vector;
        unsigned int __size;
        unsigned int __shortestSpan;
        unsigned int __max;
        unsigned int __min;
        bool __firstTime;
        bool __updated;
    public:
        Span( unsigned int __size);
        ~Span( void );
        Span( Span const& other);
        Span const& operator= (Span const& other);
        unsigned int shortestSpan( void );
        unsigned int longestSpan( void ) const;
        void addNumber( unsigned int n);
        void addSequence( std::vector<int>::iterator begin, std::vector<int>::iterator end );
        unsigned int getSize( void ) const;
        const std::vector<int>& getVec( void ) const;
        int getMax( void ) const;
        int getMin( void ) const;
        class SpanNotFoundException: public std::exception{
            const char* what() const _NOEXCEPT;
        };
};

#define __SPAN__HPP
#endif