#include "FragTrap.hpp"



FragTrap::FragTrap(void)
{
	this->name = "unkown";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "FragTrap constructed with no name" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "FragTrap constructed with "<< name << " as a name" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
	: ClapTrap(other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	std::cout << "FragTrap copy constructor called" << std::endl;
}
 FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << name << " Destructed" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	std::cout << "FragTrap: " << name << " attacks" << target << ", causing " << attackDamage << " points of damage" << std::endl; 
}

void FragTrap::highFivesGuys(void)
{
	std::cout << name << " High Fives Guys" << std::endl;
}
