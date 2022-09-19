#include "Zombie.hpp" 


Zombie::Zombie(std::string ZombieName)
{
	this->name = ZombieName;
}

Zombie::~Zombie(void)
{
	std::cout << name << " Has been killed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
