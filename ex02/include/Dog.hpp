/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:59:57 by tsaby             #+#    #+#             */
/*   Updated: 2025/12/16 08:06:38 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
			Brain* _brain;
	public:

			Dog(void);
			Dog(const Dog& copy);
			virtual ~Dog();

			Dog& operator=(const Dog& other);
			Brain*	getBrain() const;
			virtual void makeSound() const;
};
