/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 01:16:32 by osallak           #+#    #+#             */
/*   Updated: 2022/10/21 04:00:32 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY__
#define __ARRAY__
#include <iostream>
#include <exception>

template<typename T>class Array{
        size_t __size;
        T *__arr;
    public:
        Array( void )
        {
            __size = 0;
            __arr = NULL;
        }

        Array( size_t size)
        {
            __arr = new T[size];
            __size = size;
        }

        Array( Array const& other)
        {
            T* tmp;
        
            __size = other.getSize();
            if (__arr != NULL)
                delete[] __arr;
            __arr = new T[__size];
            tmp = other.getArray();
            for (size_t i = 0; i < __size; i++){
                __arr[i] = tmp[i];
            }
        }
        
        T const& operator= (T const& other)
        {
            T* tmp;
        
            __size = other.getSize();
            if (__arr != NULL)
                delete[] __arr;
            __arr = new T[__size];
            tmp = other.getArray();
            for (size_t i = 0; i < __size; i++){
                __arr[i] = tmp[i];
            }
        }
        
        ~Array( void )
        {
            if (__arr)
                delete[] __arr;
        }

        T& operator[] (size_t index)
        {
            if (index >= __size)
                throw (std::out_of_range("Index Out Of Range"));
            return (__arr[index]);
        }
        
        size_t getSize( void ) const
        {
            return __size;
        }
        
        T const* getArray( void ) const
        {
            return (__arr);
        }
};
#endif