#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "A WrongCat as been created" << std::endl;
	this->type = "WrongCat";
}
WrongCat::~WrongCat(void)
{
	std::cout << "A WrongCat as been destroyed" << std::endl;
}
void WrongCat::makeSound(void) const
{
	std::cout << "wrong meow" << std::endl;
	
}
