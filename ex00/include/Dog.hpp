/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:59:57 by tsaby             #+#    #+#             */
/*   Updated: 2025/12/12 18:37:50 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

class Dog : public Animal
{
	public:

			Dog(void);
			Dog(const Dog& copy);
			virtual ~Dog();

			Dog& operator=(const Dog& other);
			void makesound();
};
