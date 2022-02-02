/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:42:03 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/02 13:46:27 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "DogClass.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "[Animal] Creating Dog using Default Type" << std::endl;
	this->_brain = new Brain;
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
	std::cout << "[Animal] Destructing Dog" << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(Dog const &copy)
{
	this->_type = copy._type;

	for (int index = 0; index < 100; index++)
		this->_brain->setId(index, copy._brain->getId(index));

	std::cout << "Dog Assignation operator called" << std::endl;
	return (*this);
}

void			Dog::makeSound(void) const
{
	std::cout << "[Animal] WOUAF!!!" << std::endl;
}
