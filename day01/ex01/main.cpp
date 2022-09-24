/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:43:09 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:43:10 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
	Zombie* newZombies = zombieHorde(20, "Alice");
	for (int i = 0;i < 20; i++)
		newZombies[i].announce();
	delete[] newZombies;
}
