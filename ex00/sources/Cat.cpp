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

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	this->type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void Cat::makesound()
{
	std::cout << "CAT GOES MEOW MEOW MEOW MEOW MEOW" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
}

