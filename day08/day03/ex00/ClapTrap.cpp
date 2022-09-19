#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void)
	:name("unkown"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Constructed with "<< name << " as a name"<< std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints <= 0 || hitPoints <= 0){
		std::cout << "ClapTrap " << name <<" can't attack " << target << " no energy/hit Points left" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing "<< attackDamage <<" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (energyPoints < 1 || hitPoints < 1){
		std::cout << "ClapTrap " << name << " already destroyed!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " lose " << amount << " points of damage!" << std::endl;
	hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0 || hitPoints <= 0){
		std::cout << "It is too late to save ClapTrap " << name << " no energy/hit Points left!" << std::endl;
		return;
	}
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " get repared by " << amount << " hit points!" << std::endl; 
}
