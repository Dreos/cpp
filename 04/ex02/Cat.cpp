#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "A Cat as been created" << std::endl;
	this->type = "Cat";
	this->b = new Brain();
}
Cat::~Cat(void)
{
	std::cout << "A Cat as been destroyed" << std::endl;
	delete this->b;
}
void Cat::makeSound(void) const
{
	std::cout << "meow" << std::endl;
	
}
const std::string& Cat::getType(void) const
{
	return this->type;
}
