#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int size = 10;
	Animal* tab[size];
	int i = 0;
	while(i < size/2)
	{
		tab[i] = new Dog();
		i++;
	}
	while(i < size)
	{
		tab[i] = new Cat();
		i++;
	}
	i = 0;
	while(i < size)
	{
		delete tab[i];
		i++;
	}
	return 0;
}
