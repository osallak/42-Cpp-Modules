/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestClass.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:41:06 by osallak           #+#    #+#             */
/*   Updated: 2022/10/17 20:43:00 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TestClass.hpp"


Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}