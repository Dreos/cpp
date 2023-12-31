#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	protected :
		std::string type;
	public:
		Dog(void);
		~Dog(void);

		virtual void makeSound(void) const;
		virtual std::string getType(void) const;
};

#endif
