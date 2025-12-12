#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
			std::string type;
	public:

			Animal(void);
			Animal(const Animal& copy);
			~Animal(void);

			Animal& operator=(const Animal& other);
			virtual void makesound();

};

#endif
