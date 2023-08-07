
#include <iostream>
#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap jean("jean");
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
	jean.guardGate();
	return 0;
}

