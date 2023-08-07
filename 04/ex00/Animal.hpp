#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal :
{
	protected :
		std::string type;
	public:
		Animal(void);
		~Animal(void);

		void makeSound(void);
};

#endif
