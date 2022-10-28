/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:12:21 by osallak           #+#    #+#             */
/*   Updated: 2022/10/28 21:58:12 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    {   
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    Span sp(1e6);

    std::vector<int> __vec;

    for (int i = 0; i < 1e6 - 1; i++){
        __vec.push_back(i);
    }   
    try{
        sp.addSequence(__vec.begin(), __vec.end());
    }
    catch (std::exception& e){
        std::cerr << e.what() << '\n';
    }
    try
    {
        sp.addNumber(2001);
        sp.addNumber(720);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}