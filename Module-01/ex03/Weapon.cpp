/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:45:14 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/18 19:51:35 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string		Weapon::getType(void)
{
	return this->_type;
}

void			Weapon::setType(std::string type)
{
	this->_type = type;
	return;
}
