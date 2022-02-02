/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 04:13:52 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/02 12:59:11 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
