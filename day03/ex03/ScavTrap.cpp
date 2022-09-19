#include "ScavTrap.hpp"



ScavTrap::ScavTrap(void)
{
	this->name = "unkown";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructed with no name" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructed with "<< name << " as a name" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}
 ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << name << " Destructed" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << name << " attacks " << target<< ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
