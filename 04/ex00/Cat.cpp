#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "A Cat as been created" << std::endl;
	this->type = "Cat";
}
Cat::~Cat(void)
{
	std::cout << "A Cat as been destroyed" << std::endl;
}
void Cat::makeSound(void) const
{
	std::cout << "meow" << std::endl;
	
}
std::string Cat::getType(void) const
{
	return this->type;
}
