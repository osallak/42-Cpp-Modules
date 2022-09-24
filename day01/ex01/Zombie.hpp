/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:41:59 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:42:02 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>


class Zombie{
	private:
		std::string name;
	public:
		void announce(void);
		Zombie(void);
		void initName(std::string name);
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
