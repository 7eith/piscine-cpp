/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 01:17:07 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/01 15:07:09 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "[FragTrap] Default Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "[FragTrap] Constructor Called with name: " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "[FragTrap] Constructor called using Copy" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap(void)
{
	std::cout << "[FragTrap] Destructor Called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	return *this;
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap high fives" << std::endl;
}

void 		FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage  << " points of damage!" << std::endl;
	return ;
}