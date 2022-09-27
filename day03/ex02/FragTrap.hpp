#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		~FragTrap(void);
		void attack(const std::string& target);
		void highFivesGuys(void);
		const FragTrap& operator= (const FragTrap& other);
};
