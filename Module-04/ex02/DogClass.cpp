#include "DogClass.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain;
	std::cout << "[Animal] Creating Dog using Default Type" << std::endl;
}

Dog::Dog(Dog const &copy)
{
	this->_type = copy._type;
	this->_brain = new Brain;

	for (int index = 0; index < 100; index++)
		this->_brain->setId(index, copy._brain->getId(index));

	std::cout << "[Animal] Creating Dog using DeepCopy" << std::endl;
	*this = copy;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "[Animal] Destructing Dog" << std::endl;
}

Dog &Dog::operator=(Dog const &copy)
{
	this->_type = copy._type;

	for (int index = 0; index < 100; index++)
		this->_brain->setId(index, copy._brain->getId(index));

	std::cout << "Dog Assignation operator called";
	return (*this);
}

void			Dog::makeSound(void) const
{
	std::cout << "[Animal] WOUAF!!!" << std::endl;
}
