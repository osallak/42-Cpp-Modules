/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:17:45 by osallak           #+#    #+#             */
/*   Updated: 2022/10/22 21:19:02 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND__HPP
#define __EASYFIND__HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

template<typename T>
int easyfind(T &t, int n)
{
    typename T::iterator it;
    it = std::find(t.begin(), t.end(), n);
    if (it == t.end())
        throw std::exception();
    return *it;
}

#endif