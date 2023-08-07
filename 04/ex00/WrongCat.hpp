#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	protected :
		std::string type;
	public:
		WrongCat(void);
		~WrongCat(void);

		void makeSound(void);
};

#endif
