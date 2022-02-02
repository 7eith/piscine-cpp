/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:24:16 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/02 13:26:52 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	return ;
}

Ice::Ice(std::string const &type) : AMateria("ice")
{
	this->_type = type;
}

Ice::~Ice()
{
	return ;
}

std::string const &Ice::getType() const
{
	return (this->_type);
}

AMateria			*Ice::clone() const
{
	AMateria	*newClone = new Ice(this->_type);
	return newClone;
}

void				Ice::use(ICharacter &target)
{
	std::cout << "* shoots an Ice bolt at " << target.getName() << " *" << std::endl;
}