/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:41:05 by osallak           #+#    #+#             */
/*   Updated: 2022/10/06 23:41:55 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& other);
		~WrongAnimal(void);
		const std::string getType() const;
		void setType(std::string type);
		void makeSound( void ) const;
		const WrongAnimal& operator= (const WrongAnimal& other);
};