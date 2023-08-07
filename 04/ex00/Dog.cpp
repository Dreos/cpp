#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "A Dog as been created" << std::endl;
	this->type = "Dog";
}
Dog::~Dog(void)
{
	std::cout << "A Dog as been destroyed" << std::endl;
}
void Dog::makeSound(void)
{
	std::cout << "Wouf" << std::endl;
	
}
