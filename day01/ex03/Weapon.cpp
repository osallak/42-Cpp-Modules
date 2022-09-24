/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:44:59 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:45:00 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string newType)
{
	this->type = newType;
}


const std::string& Weapon::getType(void)
{
	return (this->type);
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}
