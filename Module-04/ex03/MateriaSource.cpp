#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int index = 0; index < 4; index++)
		this->srcs[index] = 0;
}

MateriaSource::~MateriaSource()
{
	return ;
}

void		MateriaSource::learnMateria(AMateria *abstractMateria)
{
	int		index;

	for (index = 0; ((this->srcs[index] != 0) && index < 4); index++)
		;
	if (index < 4)
		this->srcs[index] = abstractMateria->clone();
	delete abstractMateria;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int index = 0; ((this->srcs[index] != 0) && index < 4); index++)
	{
		if (this->srcs[index]->getType() == type)
		{
			AMateria *found = this->srcs[index];
			return found;
		}
	}
	return (0);
}