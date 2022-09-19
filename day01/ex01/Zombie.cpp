#include "Zombie.hpp" 


Zombie::~Zombie(void)
{
	std::cout << name << " Has been killed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::initName(std::string name)
{
	this->name = name;
}
