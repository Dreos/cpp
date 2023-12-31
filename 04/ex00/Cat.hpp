#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
	protected :
		std::string type;
	public:
		Cat(void);
		~Cat(void);

		virtual void makeSound(void) const;
		virtual std::string getType(void) const;
};

#endif
