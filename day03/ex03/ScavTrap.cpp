/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:43:16 by osallak           #+#    #+#             */
/*   Updated: 2022/09/29 17:43:17 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



ScavTrap::ScavTrap(void)
{
	this->name = "unkown";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructed with no name" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructed with "<< name << " as a name" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}
 ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << name << " Destructed" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << name << " attacks " << target<< ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

const ScavTrap& ScavTrap::operator= (const ScavTrap& other)
{
	this->name = other.getName();
	this->attackDamage = other.getAttackDamage();
	this->energyPoints = other.getEnergyPoints();
	this->hitPoints = other.getHitPoints();
	return (other);
}