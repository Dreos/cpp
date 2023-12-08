#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
	protected :
		std::string type;
	public:
		Animal(void);
		~Animal(void);

		virtual void makeSound(void) const;
		virtual std::string getType(void) const;
};

#endif
