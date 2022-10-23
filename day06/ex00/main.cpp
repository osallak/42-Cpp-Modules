/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:24:16 by osallak           #+#    #+#             */
/*   Updated: 2022/10/17 18:26:11 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


int main(int ac, char** av){
    if (ac != 2){
        std::cerr << "invalid number of arguments\n";
        return 0;
    }
    
    Convert __converter(av[1]);

    __converter.__convert();
}