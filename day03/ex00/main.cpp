/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:45:55 by osallak           #+#    #+#             */
/*   Updated: 2022/09/27 17:46:31 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap astro("astro");
	ClapTrap unkown = ClapTrap();
	

	astro.attack("unkown");
	astro.takeDamage(5);
	astro.beRepaired(2);
	astro.takeDamage(7);
	astro.attack("unkown");
	astro.beRepaired(10);
	unkown.attack("astro");
}
