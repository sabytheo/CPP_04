#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound" << std::endl;
}
