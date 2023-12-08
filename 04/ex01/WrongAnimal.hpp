#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal 
{
	protected :
		std::string type;
	public:
		WrongAnimal(void);
		~WrongAnimal(void);

		void makeSound(void)const ;
		std::string getType(void)const ;
};

#endif
