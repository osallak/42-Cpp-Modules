/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:43:51 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:43:52 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>


class Zombie{
	private:
		std::string name;
	public:
		void announce(void);
		Zombie(std::string ZombieName);
		~Zombie();
};


Zombie* newZombie( std::string name );
void randomChump( std::string name );
