/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:13:15 by osallak           #+#    #+#             */
/*   Updated: 2022/11/02 17:13:53 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span( unsigned int __size)
{
    this->__size = __size;
    __shortestSpan = -1;
    __max = 0;
    __min  = -1;
    __firstTime = true;
    __updated = true;
}

Span::Span( Span const& other)
{
    this->__size = other.getSize();
    this->__vector = other.getVec();
    __shortestSpan = other.__shortestSpan;
    __firstTime = true;
    __updated = false;
}

Span::~Span( void )
{
    
}

Span const& Span::operator=(Span const& other)
{
    __size = other.getSize();
    __vector = other.getVec();
    __shortestSpan = other.__shortestSpan;
    __updated = false;
    return *this;
}

void Span::addNumber( unsigned int n )
{
    if (__vector.size() >= __size){
        throw std::out_of_range("Span already on it's maximum size");
    }
    __vector.push_back(n);
    if (n > __max){
        __max = n;
    } if (n < __min){
        __min = n;
    }
    __updated = true;
}

unsigned int Span::getSize( void ) const
{
    return __size;
}

const std::vector<int>& Span::getVec( void ) const
{
    return __vector;
}

 void Span::addSequence( std::vector<int>::iterator begin, std::vector<int>::iterator end )
{
    while (begin != end && __size > __vector.size()){
        __vector.push_back(*begin);
        if ((unsigned int)*begin > __max){
            __max = *begin;
        } if ((unsigned int) *begin < __min){
            __min = *begin;
        }
        begin++;
    }
    __updated = true;
    if (__size <= __vector.size())
        throw std::out_of_range("Span already on it's maximum size");
}

unsigned int Span::shortestSpan( void )
{
    if (__vector.size() <= 1){
        throw SpanNotFoundException();
    }
    if (__updated == false){
        return (__shortestSpan);
    }
    std::sort(__vector.begin(), __vector.end());
    for (size_t i = 1; i < __vector.size(); i++){
        if ((unsigned int)(__vector[i] - __vector[i - 1]) < __shortestSpan || __firstTime == true){
            __shortestSpan = __vector[i] - __vector[i - 1];
            __firstTime = false;
        }
    }
    if (__firstTime == true){
        throw SpanNotFoundException();
    }
    if (__vector.size() >= __size)
        throw std::out_of_range("Span already on it's maximum size");
    __updated = false;
    return __shortestSpan;
}

unsigned int Span::longestSpan( void ) const
{
    if (__vector.size() <= 1){
        throw SpanNotFoundException();
    }
    return __max - __min;
}

const char *Span::SpanNotFoundException::what( void ) const throw()
{
    return "NO SPAN FOUND";
}

int Span::getMax( void ) const
{
    return (__max);
}

int Span::getMin( void ) const
{
    return (__min);
}