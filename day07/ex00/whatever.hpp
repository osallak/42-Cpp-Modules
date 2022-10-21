/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 04:04:34 by osallak           #+#    #+#             */
/*   Updated: 2022/10/21 19:16:04 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SRCS__
#define __SRCS__

template<typename Type>
Type max(Type a ,Type b)
{
    return (a > b ? a : b);   
}

template<typename Type>
Type min(Type a, Type b)
{
    return (a < b ? a : b);
}

template<typename Type>
void swap(Type &a, Type &b)
{
    Type tmp = a;
    a = b;
    b = tmp;   
}

#endif