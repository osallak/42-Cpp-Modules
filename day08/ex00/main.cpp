/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:46:32 by osallak           #+#    #+#             */
/*   Updated: 2022/10/28 21:57:30 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
    std::vector<int> __vec;

    for (int i = 0; i < 1000; i++){
        __vec.push_back(i + 1);
    }

    int index = -1;
    try{
        index = easyfind(__vec, 900);

        std::cout << "Element Found at index: " << index << '\n';
    }
    catch (std::exception){
        std::cout << "Target Not Found\n";
    }
    
    try{
        index = easyfind(__vec, -1);

        std::cout << "Element Found at index: " << index << '\n';
    }
    catch (std::exception){
        std::cout << "Target Not Found\n";
    }

    std::string __string = "Hello This message is just for testing\n";

    try{
        index = easyfind(__string, 'e');
        std::cout << "Element Found at index: " << index << '\n';
    }
    catch (std::exception){
        std::cout << "Target Not Found\n";
    }
}