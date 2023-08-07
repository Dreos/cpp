#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << " ClapTrap default constructor called" << std::endl;

	this->name = "undefined";
	this->hp = 10;
	this->energy = 10;
	this->atk = 0;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " as been created " << std::endl;
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->atk = 0;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	*this = copy;
	std::cout << "a Clap trap as been created by copy of "<< this->name << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " as been destroyed" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
	if(this->energy > 0 && this->hp > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " + target << " , causing " << this->atk << " point of damage" << std::endl;
		this->energy = this->energy - 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->energy > 0 && this->hp > 0)
	{
		std::cout << this->name << " take " << amount << " damage" << std::endl;
		this->hp = this->hp - amount;
		
	}
}

void ClapTrap::BeRepaired(unsigned int amount)
{
	if(this->energy > 0 && this->hp > 0)
	{
		std::cout << this->name << " heal for " << amount << " damage" << std::endl;
		this->hp = this->hp + amount;
		this->energy = this->energy - 1;
	}
}

void ClapTrap::state(void)
{
	std::cout << this->name << " as : "<<this->hp << "Hp " << this->energy << " energy" << std::endl;
}
std::string ClapTrap::getName(void)
{
	return(this->name);
}
