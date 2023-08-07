#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);

		void attack(const std::string& target);	
		void guardGate();
		
};
#endif
