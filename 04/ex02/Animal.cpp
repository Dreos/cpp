#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "An animal as been created" << std::endl;
	this->type = "undefined";
}
Animal::~Animal(void)
{
	std::cout << "An animal as been destroyed" << std::endl;
}
void Animal::makeSound(void) const
{
	std::cout << "An undefined animal does no sound you dumbass" << std::endl;
	
}
const std::string& Animal::getType(void) const
{
	return this->type;
}
