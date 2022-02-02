#include "BrainClass.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
}

Brain	&Brain::operator=(Brain const &copy)
{
	std::cout << "Operator = of Brain" << std::endl;
	for (int index = 0; index < 100; index++)
		this->_ideas[index] = copy._ideas[index];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain" << std::endl;
}

void			Brain::setId(int index, std::string brain)
{
	this->_ideas[index] = brain;
}

std::string		Brain::getId(int index)
{
	return (this->_ideas[index]);
}

