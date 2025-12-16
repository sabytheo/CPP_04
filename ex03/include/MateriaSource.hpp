#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materias[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const & copy);
		virtual ~MateriaSource();

		MateriaSource & operator=(MateriaSource const & other);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
