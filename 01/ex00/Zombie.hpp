

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>

class Zombie {

	public :
		Zombie(std::string name);
		~Zombie(void);
		std::string name;
		void announce(void);
};

Zombie *newZombie(std ::string name);
void randomChump(std::string name);
#endif
