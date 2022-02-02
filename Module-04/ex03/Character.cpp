#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

Character::Character(std::string name) : _name(name)
{
	for (int index = 0; index < 4; index++)
		this->Inventory[index] = 0;
}

Character::Character() : _name("default")
{
	for (int index = 0; index < 4; index++)
		this->Inventory[index] = 0;
}

Character::Character(Character const &copy)
{
	this->_name = copy._name;
	
	for (int index = 0; index < 4; index++)
	{
		if (copy.Inventory[index]->getType() == "cure")
			this->Inventory[index] = new Cure;
		else if (copy.Inventory[index]->getType() == "ice")
			this->Inventory[index] = new Ice;
	}
}

Character::~Character()
{
	for (int index = 0; index < 4; index++)
	{
		if (this->Inventory[index] != 0)
			delete Inventory[index];
	}
}

std::string const 	&Character::getName() const
{
	return (this->_name);
}

void				Character::equip(AMateria *abstractMateria)
{
	int		index;

	for (index = 0; ((this->Inventory[index] != 0) && index < 4); index++)
		;
	if ((index < 4) && (abstractMateria))
		this->Inventory[index] = abstractMateria;
}

void				Character::unequip(int index)
{
	if (index >= 0 && index < 4)
		this->Inventory[index] = 0;
}

void				Character::use(int index, ICharacter &target)
{
	if ((index >= 0 && index < 4) && this->Inventory[index] != 0)
		this->Inventory[index]->use(target);
}