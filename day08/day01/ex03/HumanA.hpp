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
