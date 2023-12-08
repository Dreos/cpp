#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "A Dog as been created" << std::endl;
	this->type = "Dog";
	this->b = new Brain();
}
Dog::~Dog(void)
{
	std::cout << "A Dog as been destroyed" << std::endl;
	delete this->b;
}
void Dog::makeSound(void) const
{
	std::cout << "Wouf" << std::endl;
	
}
const std::string& Dog::getType(void) const
{
	return this->type;
}
