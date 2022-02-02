/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:34:57 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/01 15:49:30 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "CatClass.hpp"

Cat::Cat(void) : Animal(), _type("Cat")
{
	std::cout << "[Animal] Creating Cat using Default Type" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	std::cout << "[Animal] Creating Cat using Copy and " << this->_type << " as Type" << std::endl;
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << "[Animal] Destructing Cat" << std::endl;
}

Cat &Cat::operator=(Cat const &copy)
{
	this->_type = copy._type;
	return (*this);
}

std::string		Cat::getType(void) const
{
	return (this->_type);
}

void			Cat::makeSound(void) const
{
	std::cout << "[Animal] MIAOU!!!" << std::endl;
}

WrongCat::WrongCat(void): _type("default")
{
	std::cout << "[Animal] Creating WrongCat using default Constructor" << std::endl;
}

void			WrongCat::makeSound(void) const
{
	std::cout << "[Animal] MIAOU!!!";
}

WrongCat::~WrongCat(void)
{
	std::cout << "[Animal] Destructor called on WrongCat" << std::endl;
}
