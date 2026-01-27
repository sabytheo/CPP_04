#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const int array_size = 6;
	Animal* animals[array_size];

	for (int i = 0; i < array_size / 2; i++)
		animals[i] = new Dog();
	for (int i = array_size / 2; i < array_size; i++)
		animals[i] = new Cat();
	std::cout << "\n\033[1;34m===== CONSTRUCTION CAT =====\033[0m\n" << std::endl;
	Cat Cat1;
	Cat Cat2 = Cat1;
	Cat Cat3;
	Cat Cat4 = Cat3;
	std::cout << "\n\033[1;34m===== TEST CAT =====\033[0m\n" << std::endl;
	std::cout << Cat1.getBrain() << " vs " << Cat2.getBrain() << std::endl;
	std::cout << Cat3.getBrain() << " vs " << Cat4.getBrain() << std::endl;
	for (int k = 0; k < array_size; k++)
		std::cout << animals[k]->getType() << " " << std::endl;
	std::cout << "\n\033[1;33m===== CONSTRUCTION DOG =====\033[0m\n" << std::endl;
	Dog Dog1;
	Dog Dog2 = Dog1;
	Dog Dog3;
	Dog Dog4 = Dog3;
	std::cout << "\n\033[1;33m===== TEST DOG =====\033[0m\n" << std::endl;
	std::cout << Dog1.getBrain() << " vs " << Dog2.getBrain() << std::endl;
	std::cout << Dog3.getBrain() << " vs " << Dog4.getBrain() << std::endl;
	for (int k = 0; k < array_size; k++)
		std::cout << animals[k]->getType() << " " << std::endl;
	std::cout << "\n\033[1;31m===== DESTRUCTION =====\033[0m\n" << std::endl;
	for (int i = 0; i < array_size; i++)
		delete animals[i];
	return 0;
}
