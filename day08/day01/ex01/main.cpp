#include "Zombie.hpp"


int main()
{
	Zombie* newZombies = zombieHorde(20, "Alice");
	for (int i = 0;i < 20; i++)
		newZombies[i].announce();
	delete[] newZombies;
}
