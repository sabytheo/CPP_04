/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:59:57 by tsaby             #+#    #+#             */
/*   Updated: 2025/12/12 18:48:56 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

class Cat : public Animal
{
	public:

			Cat(void);
			Cat(const Cat& copy);
			virtual ~Cat();

			Cat& operator=(const Cat& other);
			void makesound();
};
