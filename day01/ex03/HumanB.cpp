/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:44:36 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:44:37 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->_Weapon = NULL;
}

void HumanB::attack(void)
{
	std::string weapon;
	if (this->_Weapon == NULL)
			weapon = "unkown";
	else
			weapon = this->_Weapon->getType();
	std::cout << name << " attacks with their " << weapon << std::endl;
}

void HumanB::setWeapon(Weapon &_Weapon)
{
	this->_Weapon = &_Weapon;
}
