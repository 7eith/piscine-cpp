#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	return ;
}

Cure::Cure(std::string const &type) : AMateria("cure")
{
	this->_type = type;
}

Cure::~Cure()
{
	return ;
}

std::string const	&Cure::getType() const
{
	return (this->_type);
}

AMateria			*Cure::clone() const
{
	AMateria	*newClone = new Cure(this->_type);
	return (newClone);
}

void				Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
