/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 04:13:52 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/02 13:41:07 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"

Animal::Animal(void): _type("default")
{
	std::cout << "[Animal] Creating Animal using Default Type" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "[Animal] Creating Animal using Copy" << std::endl;
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
	std::cout << "[Animal] WrongAnimal makeSound!";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[Animal] Destructor called on WrongAnimal" << std::endl;
}
