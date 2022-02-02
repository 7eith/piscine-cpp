#include "AnimalClass.hpp"

Animal::Animal(void): _type("default")
{
	std::cout << "[Animal] Creating Animal using Default Type" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "[Animal] Creating Animal using Copy and " << this->_type << " as Type" << std::endl;
	*this = copy;
}

Animal::~Animal(void)
{
	std::cout << "[Animal] Destructing Animal" << std::endl;
}

Animal &Animal::operator=(Animal const &copy)
{
	std::cout << "Operator = of Animal" << std::endl;
	this->_type = copy._type;
	return (*this);
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}

void			Animal::makeSound(void) const
{
	std::cout << "[Animal] Animal sound!!!" << std::endl;
}

WrongAnimal::WrongAnimal(void): _type("default")
{
	std::cout << "[Animal] Creating WrongAnimal using default Constructor" << std::endl;
}

void			WrongAnimal::makeSound(void) const
{
	std::cout << "[Animal] WrongAnimal makeSound!" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[Animal] Destructor called on WrongAnimal" << std::endl;
}
