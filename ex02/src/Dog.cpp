/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:56:45 by tsaby             #+#    #+#             */
/*   Updated: 2025/12/12 17:17:53 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	this->_brain = new Brain(*copy._brain);
	this->type = copy.type;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment operator Dog called" << std::endl;
	if (this != &other)
	{
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
		this->type = other.type;
	}
	return *this;
}

Brain* Dog::getBrain() const
{
	return (_brain);
}

void Dog::makeSound() const
{
	std::cout << "DOG GOES BARK BARK BARK BARK BARK" << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Destructor Dog called" << std::endl;
}

