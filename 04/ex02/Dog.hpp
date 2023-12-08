#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
	private :
 		Brain* b;
	protected :
		std::string type;
	public:
		Dog(void);
		virtual ~Dog(void);

		virtual void makeSound(void) const;
		virtual const std::string& getType(void) const;
};

#endif
