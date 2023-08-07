#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	std::cout << "A fixed number as been created" << std::endl;
	this->value = 0;
	return;		
}

Fixed::Fixed(Fixed &f)
{
	std::cout << "A fixed number as been created by copy" << std::endl;
	this->value = f.getRawBits();
	return;
}
Fixed::~Fixed(void)
{
	std::cout << "A fixed number as been detroyed" << std::endl;
	return;
}

Fixed& Fixed::operator=(const Fixed& f)
{
	this->value = f.getRawBits();
	return(*this);
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function member as been called" << std::endl;
	return (this->value);
}
void Fixed::setRawBits(int const rax)
{
	this->value = rax;
}

