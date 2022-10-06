/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:23:50 by osallak           #+#    #+#             */
/*   Updated: 2022/10/04 15:58:26 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void)
    : ClapTrap ("_clap_name")
{
    std::cout << "DiamondTrap: default constructor called" << std::endl;
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap( std::string name)
    : name( name ), ClapTrap( name + "_clap_name" )
{
    std::cout << "DiamondTrap: constructed with " << name <<  " as a name" <<std::endl;
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other)
    : ClapTrap ( other.getName() + "_clap_name")
{
    std::cout << "DiamondTrap: Copy constructor called" <<std::endl;
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    this->name = other.getName();
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "DiamondTrap: Destructed" << std::endl;
}

const DiamondTrap& DiamondTrap::operator= ( const DiamondTrap& other)
{
    *this = other;
    return *this;
}

void DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTrap Name: "<< name << ", ClapTrap Name: " << ClapTrap::name << std::endl;
}

const std::string& DiamondTrap::getName(void) const
{
	return (name);
}