#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ScavTrap robot("astro");

    robot.guardGate();
    robot.attack("alex");
    robot.beRepaired(10);
    robot.takeDamage(10);
    robot = ScavTrap("alex");
    robot.attack("astro");
    robot.beRepaired(20);
}
