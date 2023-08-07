#include <iostream>
#include "Fixed.hpp"

float pow(float base , int exp)
{
	float result;

	if(exp == 0)
		return(1);	
	if(exp < 0)
	{
		base = 1 / base; 
		exp = exp * -1;
	}
	result = base;
	while(--exp)
		result = result * base;
	return (result);
}

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	std::cout << "A fixed number as been created" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed const &f)
{
	std::cout << "A fixed number as been created by copy" << std::endl;
	*this = f;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor as been called" << std::endl;
	this->value = i * pow(2, this->f);	
}
Fixed::Fixed(const float f)
{
	std::cout << "Float constructor as been called" << std::endl;
	this->value = f * pow(2, this->f);
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
std::ostream	&operator<<(std::ostream& os ,const Fixed& f)
{
	return(os << f.toFloat());
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

float Fixed::toFloat(void) const
{
	return(this->value * pow(2,-this->f));
}
int Fixed::toInt(void) const
{
	return(this->value * pow(2,-this->f));
}	
