#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap(void);
		void attack(const std::string& target);
		void guardGate(void) const;
		const ScavTrap& operator= (const ScavTrap& other);
}; 
