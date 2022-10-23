/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:35:03 by osallak           #+#    #+#             */
/*   Updated: 2022/10/17 20:51:43 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TestClass.hpp"



static void printData(const Data* _data)
{
    std::cout << "Name: " << _data->name << std::endl;
    std::cout << "Age: " << _data->age << std::endl;
    std::cout << "Working On: " << _data->currentProject << std::endl;    
}

int main(void)
{
    Data *uss4ma = new Data;

    uss4ma->age = 21;
    uss4ma->name = "Oussama Sallak";
    uss4ma->currentProject = "Cpp && Minirt";

    printData(uss4ma);

    uintptr_t castedPtr = serialize(uss4ma);
    
    std::cout << "Printing addresses after casting Data to uintptr_t" << std::endl;

    std::cout << "Value of the uintptr_t after casting it: " << castedPtr << std::endl;
    
    uss4ma = deserialize(castedPtr);

    printData(uss4ma);
    return 0;   
}