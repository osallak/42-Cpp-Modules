/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:45:33 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:45:34 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(void)
{
	Harl _harl;

	std::cout << "-----------debug--------------" << std::endl;
	_harl.complain("DEBUG");

	std::cout << "-----------info--------------" << std::endl;
	_harl.complain("INFO");

	std::cout << "-----------warning--------------" << std::endl;
	_harl.complain("WARNING");

	std::cout << "-----------error--------------" << std::endl;
	_harl.complain("ERROR");




}
