/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:44:41 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:44:43 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon *_Weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void attack(void);
		void setWeapon(Weapon &newWeapon);
};
