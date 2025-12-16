/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:56:45 by tsaby             #+#    #+#             */
/*   Updated: 2025/12/12 17:16:46 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	this->_brain = new Brain(*copy._brain);
	this->type = copy.type;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Copy assignment operator Cat called" << std::endl;
	if (this != &other)
	{
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
		this->type = other.type;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "CAT GOES MEOW MEOW MEOW MEOW MEOW" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (_brain);
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Destructor Cat called" << std::endl;
}

