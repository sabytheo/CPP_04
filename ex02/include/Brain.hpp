#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
			std::string _ideas[100];
	public:

			Brain(void);
			Brain(const Brain& copy);
			~Brain(void);

			Brain& operator=(const Brain& other);

};

#endif
