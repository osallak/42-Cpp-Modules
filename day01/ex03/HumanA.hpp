/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:44:27 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:44:28 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"


class HumanA{
	private:
		Weapon& _Weapon;
		std::string name;
	public:
		void attack(void);
		HumanA(std::string name, Weapon& weapon);
};
