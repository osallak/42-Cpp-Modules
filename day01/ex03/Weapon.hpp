/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:45:07 by osallak           #+#    #+#             */
/*   Updated: 2022/09/24 16:45:08 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		const std::string& getType(void);
		void setType(std::string newType);
};
