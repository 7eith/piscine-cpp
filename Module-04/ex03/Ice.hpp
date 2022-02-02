#ifndef ICE_HPP
#define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	protected:
		std::string _type;

	public:
		Ice();
		Ice(std::string const & type);
		virtual ~Ice();
		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif