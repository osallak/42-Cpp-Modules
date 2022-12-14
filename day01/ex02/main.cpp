/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:44:16 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:44:17 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string stringVAR= "HI THIS IS BRAIN";
	std::string *stringPTR = &stringVAR;
	std::string &stringREF = stringVAR;

	std::cout << "The memory address of the string variable: " << &stringVAR << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "The value of the string variable: " << stringVAR << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}
