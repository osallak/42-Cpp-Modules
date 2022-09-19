#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap astro = ClapTrap("astro");
	ClapTrap unkown = ClapTrap();
	

	astro.attack("unkown");
	astro.takeDamage(5);
	astro.beRepaired(2);
	astro.takeDamage(7);
	astro.attack("unkown");
	astro.beRepaired(10);
	unkown.attack("astro");
}
