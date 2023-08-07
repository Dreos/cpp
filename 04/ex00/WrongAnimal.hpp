#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal :
{
	protected :
		std::string type;
	public:
		WorngAnimal(void);
		~WrongAnimal(void);

		void makeSound(void);
};

#endif
