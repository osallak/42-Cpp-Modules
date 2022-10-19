/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:36:58 by osallak           #+#    #+#             */
/*   Updated: 2022/10/17 20:40:55 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TESTCLASS_HPP__
#include <iostream>


struct Data{
    std::string name;
    int age;
    std::string currentProject;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#define __TESTCLASS_HPP__
#endif