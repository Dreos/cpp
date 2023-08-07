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
void Cat::makeSound(void)
{
	std::cout << "meow" << std::endl;
	
}
