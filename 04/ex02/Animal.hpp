#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>

class Animal
{
	protected :
		std::string type;
	public:
		Animal(void);
		virtual ~Animal(void);

		virtual void makeSound(void) const = 0;
		virtual const std::string& getType(void) const;
};
#endif
