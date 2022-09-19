#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void) {
    FragTrap astro("astro");

    astro.attack("FourArms");
    astro.highFivesGuys();
    astro.takeDamage(100);
    astro.beRepaired(20);
}
