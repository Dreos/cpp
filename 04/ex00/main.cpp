#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	const WrongAnimal *bob = new WrongAnimal();
	const WrongAnimal *boby = new WrongCat();
	std::cout << bob->getType() << " " << std::endl;
	std::cout << boby->getType() << " " << std::endl;
	bob->makeSound(); //will output the cat sound!
	boby->makeSound();

	return 0;
}
