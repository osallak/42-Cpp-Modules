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
