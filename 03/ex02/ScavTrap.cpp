#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "A Scavtrap as been created with default constructor " << std::endl;

	this->name = "undefined";
	this->hp = 100;
	this->energy= 50;
	this->atk = 20;
}
ScavTrap::ScavTrap(std::string name)
{
	std::cout << "A scavtrap as been created with the name " << name << std::endl;
	
	this->name = name;
	this->hp = 100;
	this->energy= 50;
	this->atk = 20;	
}
ScavTrap::~ScavTrap(void)
{
	std::cout << this->getName() << " (Scavtrap) as been destroyed" << std::endl;

}
void ScavTrap::attack(const std::string& target)
{
	if(this->energy > 0 && this->hp > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " + target << " , causing " << this->atk << " point of damage" << std::endl;
		this->energy = this->energy - 1;
	}
}
void ScavTrap::guardGate(void)
{
	std::cout << this->getName() << " is now gate keeping " << std::endl;

}
		
