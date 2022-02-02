#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	protected:
	
		std::string _name;
		AMateria	*Inventory[4];
		
	public:
	
		Character();
		Character(std::string name);
		Character(Character const &copy);
		~Character();

		std::string const &getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);

};

#endif
