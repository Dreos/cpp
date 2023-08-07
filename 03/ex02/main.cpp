
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	FragTrap jean("jean");
	jean.state();
	jean.attack("jeanne");
	jean.state();
	jean.takeDamage(2);
	jean.state();
	jean.BeRepaired(3);
	jean.state();
	jean.takeDamage(11);
	jean.state();
	jean.attack("jeanne");
	jean.highFivesGuys();
	return 0;
}

