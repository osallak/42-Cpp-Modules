#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	Zombie* newZombies = new Zombie[N];
	while (--N >= 0)
		newZombies[N].initName(name);
	return newZombies;
}
