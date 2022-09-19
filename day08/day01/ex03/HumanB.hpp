#pragma once

# include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon *_Weapon;
	public:
		HumanB(std::string name);
		void attack(void);
		void setWeapon(Weapon &newWeapon);
};
