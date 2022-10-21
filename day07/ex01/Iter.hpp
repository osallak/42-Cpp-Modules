/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 04:21:23 by osallak           #+#    #+#             */
/*   Updated: 2022/10/21 23:57:38 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER__HPP
#define __ITER__HPP
#include <iostream>


template<typename Type>
void iter(Type arr[], size_t length, void(*funPtr)(const Type& t))
{
    for (size_t i = 0; i < length; i++){
        funPtr(arr[i]);
    }
}

template<typename T>
void test(T &t)
{
    std::cout << "the value of the parametere is: " << t << std::endl;   
}

#endif