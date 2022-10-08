/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:41:05 by osallak           #+#    #+#             */
/*   Updated: 2022/10/08 20:00:13 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


class Animal{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal& other);
		virtual ~Animal(void);
		const std::string getType() const;
		void setType(std::string __type);
		virtual void makeSound( void ) const = 0;
		const Animal& operator= (const Animal& other);
};

