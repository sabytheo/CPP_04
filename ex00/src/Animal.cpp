#include "Animal.hpp"

Animal::Animal(void): _type("Animal")
{
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
		this->_type = other._type;
	}
	return *this;
}

std::string Animal::getType() const
{
	return(_type);
}

 void Animal::makeSound() const
{
	std::cout << "Animals make appropriate sound" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal " << this->_type << " called" << std::endl;
}
