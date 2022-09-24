/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:45:38 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:45:39 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout <<"I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << std::endl << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money" << std::endl;
	std::cout <<"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << std::endl << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free" << std::endl;
	std::cout <<"I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << std::endl << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
	typedef void (Harl::*fctptr)();

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	fctptr Ptrs[4] =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	int i = 0;
	while (i < 4 && level != levels[i])
		i++;
	switch (i)
	{
		case (0):
			(this->*Ptrs[i])();
			complain(levels[i + 1]);
			break;
		case (1):
			(this->*Ptrs[i])();
			complain(levels[i + 1]);
			break;
		case (2):
			(this->*Ptrs[i])();
			complain(levels[i + 1]);
			break ;
		case (3):
			(this->*Ptrs[i])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
