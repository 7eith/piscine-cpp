#include "CatClass.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "[Animal] Creating Cat using Default Type" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	this->_type = copy._type;
	this->_brain = new Brain;

	for (int index = 0; index < 100; index++)
		this->_brain->setId(index, copy._brain->getId(index));

	std::cout << "[Animal] Creating Cat using DeepCopy" << std::endl;
	*this = copy;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "[Animal] Destructing Cat" << std::endl;
}

Cat &Cat::operator=(Cat const &copy)
{
	this->_type = copy._type;

	for (int index = 0; index < 100; index++)
		this->_brain->setId(index, copy._brain->getId(index));

	std::cout << "[Animal] Assignation operator Call!" << std::endl;
	return (*this);
}

void			Cat::makeSound(void) const
{
	std::cout << "[Animal] MIAOU!!!" << std::endl;
}