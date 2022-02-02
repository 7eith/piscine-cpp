#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
	protected:
		std::string _type;

	public:
		Cure();
		Cure(std::string const &type);
		virtual ~Cure();
		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
