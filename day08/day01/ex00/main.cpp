#include "Zombie.hpp"


int main()
{
	Zombie Alice("Alice");
	Alice.announce();
	randomChump("Hakima");
	Zombie *jack = new Zombie("jack");
	jack->announce();
	delete jack;
}
