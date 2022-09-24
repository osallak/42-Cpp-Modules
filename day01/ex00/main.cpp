/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:43:29 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:43:30 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
	{
		Zombie astro("Astro");
		astro.announce();
	}
	
	Zombie Alice("Alice");
	Alice.announce();
	randomChump("Hakima");
	Zombie *jack = new Zombie("jack");
	jack->announce();
	delete jack;
}
