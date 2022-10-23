/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:09:10 by osallak           #+#    #+#             */
/*   Updated: 2022/10/21 23:52:29 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#define SIZE 6

void isEven(const int &n)
{
    std::cout << "n is: " << (n % 2 == 0 ? "even" : "odd") << std::endl;    
}
int main( void )
{
    std::string sArr[3] = {"Random text", "you mad?", "khoribga is shit"};
    iter<std::string>(sArr, 3, test);

    int arr[SIZE] = {845, 923, 86453, 89, 9,76};
    iter<int>(arr, SIZE, isEven);
    return 0;
}

