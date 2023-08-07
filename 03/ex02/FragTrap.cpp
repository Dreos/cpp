#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "A FragTrap as been created with default constructor " << std::endl;

	this->name = "undefined";
	this->hp = 100;
	this->energy= 100;
	this->atk = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "A Fragtrap as been created with the name " << name << std::endl;
	this->name = name;
	this->hp = 100;
	this->energy= 100;
	this->atk = 30;
}

FragTrap::~FragTrap(void)
{	
	std::cout << this->getName() << " (FragTrap) as been destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->name << "Hive five alone like a loser :) " << std::endl;
}
