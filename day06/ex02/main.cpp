/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:16:37 by osallak           #+#    #+#             */
/*   Updated: 2022/10/19 01:19:56 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


int main(void)
{
    Base* __base = generate();

    std::cout << "TESTING DYNAMIC_CAST  USING POINTERS\n";
    identify(__base);
    std::cout << "TESTING DYNAMIC_CAST  USING REFERENCES\n";
    identify(*__base);
    
}