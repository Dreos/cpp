#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
	private :
 		Brain* b;
	protected :
		std::string type;
	public:
		Cat(void);
		virtual ~Cat(void);

		virtual void makeSound(void) const;
		virtual std::string getType(void) const;
};

#endif
