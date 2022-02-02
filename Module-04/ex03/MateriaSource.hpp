#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();

		void	learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria *srcs[4];
};

#endif
