/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:32:21 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/18 20:35:17 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::attack()
{
	std::cout << this->_name;

	if (!this->_weapon)
		std::cout << " is unarmed" << std::endl;
	else
		std::cout << " attacks with his " << this->_weapon->getType() << std::endl;

	return;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return;
}
