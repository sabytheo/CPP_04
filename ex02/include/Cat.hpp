/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:59:57 by tsaby             #+#    #+#             */
/*   Updated: 2025/12/16 08:06:54 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
			Brain* _brain;
	public:

			Cat(void);
			Cat(const Cat& copy);
			virtual ~Cat();

			Cat& operator=(const Cat& other);
			Brain*	getBrain() const;
			virtual void makeSound() const;
};
