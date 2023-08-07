

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	protected :
		std::string name;
		int hp;
		int energy;
		int atk;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &copy);
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void BeRepaired(unsigned int amount);
		void state(void);
		std::string getName(void);
		
};
#endif
