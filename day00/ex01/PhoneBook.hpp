/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:38:11 by osallak           #+#    #+#             */
/*   Updated: 2022/09/23 16:38:14 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
#include "Contact.hpp"

class PhoneBook{
	private:
		int ContactsNumber;
		Contact _Contacts[8];
		void _error(int flag);
		void DisplayContactInfo(int index, bool flag);
	public:
		PhoneBook();
		int Search(void);
		int Add(void);
};
