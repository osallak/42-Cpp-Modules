#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &_weapon)
	: _Weapon(_weapon)
{
	this->name = name;
}


void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << _Weapon.getType() << std::endl;
}
