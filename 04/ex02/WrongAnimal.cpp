#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(void)
{
	std::cout << "A WrongAnimal has been created " << std::endl;;
	this->type = "undefined";	
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "A WrongAnimal has been destroyed " << std::endl;
}
void WrongAnimal::makeSound(void)const 
{
	std::cout << "A WrongAnimal does no sound" << std::endl;
}
std::string WrongAnimal::getType(void) const
{
	return this->type;
}
