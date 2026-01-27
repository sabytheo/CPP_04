#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\n--- Animal Test ---\n" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n-----------------------\n" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete  i;
	delete  j;
	delete  meta;

	std::cout << "\n--- WrongAnimal Test ---\n" << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();
	const WrongCat* wrongCat = new WrongCat();
	std::cout << "\n-----------------------\n" << std::endl;

	std::cout << wrongI->getType() << " " << std::endl;
	wrongI->makeSound();
	wrongMeta->makeSound();
	wrongCat->makeSound();

	std::cout << "\n-----------------------\n" << std::endl;

	delete wrongI;
	delete wrongMeta;
	delete wrongCat;

	return (0);
}
