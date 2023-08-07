#include "Zombie.hpp"

int main(void)
{
	Zombie *z = newZombie("Charle");
	z->announce();
	randomChump("Bobby");
	return(1);
}
