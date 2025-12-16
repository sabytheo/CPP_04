#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

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

	delete  i;
	delete  j;
	delete  meta;

	std::cout << "\n--- WrongAnimal Test ---\n" << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();
	const WrongCat* wrongCat = new WrongCat();

	std::cout << wrongI->getType() << " " << std::endl;
	wrongI->makeSound(); //will output the wrong animal sound!
	wrongMeta->makeSound();
	wrongCat->makeSound();

	delete wrongI;
	delete wrongMeta;
	delete wrongCat;

	return 0;
}
