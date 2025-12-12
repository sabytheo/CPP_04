#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

 void Animal::makesound()
{
	std::cout << "Animals make appropriate sound" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal " << this->type << " called" << std::endl;
}
