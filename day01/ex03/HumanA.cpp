/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:44:21 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:44:22 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &_weapon)
	: _Weapon(_weapon)
{
	this->name = name;
}


void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << _Weapon.getType() << std::endl;
}
