/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:45:24 by osallak           #+#    #+#             */
/*   Updated: 2022/10/11 13:39:02 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static inline int _find(std::string levels[], std::string level)
{
	int i;
	for (i = 0; levels[i] != level && i < 4; i++);
	return i;
}


void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{
	typedef void(Harl::*FuncPtr)();
	FuncPtr fpointers[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = _find(levels, level);
	(this->*fpointers[index])();
	// Harl::debug();
}
