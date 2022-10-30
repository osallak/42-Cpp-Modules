/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 03:25:55 by osallak           #+#    #+#             */
/*   Updated: 2022/10/30 09:27:13 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    for (int i = 0; i < 1000; i++){
        mstack.push(i);
    }
    
    std::cout << mstack.size() << std::endl;
    std::cout << mstack.top() << std::endl;
    
    for (int i = 0; i < 1000; i++){
        mstack.pop();
    }

    std::cout << (mstack.empty() ? "Empty" : "Full") << std::endl;
    
    mstack.push(-1);

    std::cout << (mstack.empty() ? "Empty" : "Full") << std::endl;
    return 0;
}