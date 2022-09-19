#include "HumanB.hpp"



HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::attack(void)
{
	std::cout << name << " attacks with their " << _Weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &_Weapon)
{
	this->_Weapon = &_Weapon;
}
