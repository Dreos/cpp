
#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap jean("jean");
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
	ClapTrap robert(jean);
	return 0;
}

