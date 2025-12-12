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

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	this->type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void Dog::makesound()
{
	std::cout << "DOG GOES BARK BARK BARK BARK BARK" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
}

