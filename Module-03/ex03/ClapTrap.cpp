/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:27:54 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/01 15:13:47 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_name = "default";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	
	std::cout << "[ClapTrap] Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 10;

	std::cout << "[ClapTrap] Creating new ClapTrap named " << name << " using Constructor " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "[ClapTrap] Creating Copy ClapTrap using Constructor " << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[ClapTrap] Destructor Called! " << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &copy)
{
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	return *this;
}

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

int			ClapTrap::getHitPoints(void) const
{
	return this->_hitPoints;
}

int			ClapTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

int			ClapTrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}

void		ClapTrap::attack(std::string const &target)
{
	std::cout << "[ClapTrap] " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	this->_energyPoints -= amount;
	std::cout << "[ClapTrap] " << this->_name << " take " << amount << " damage" << std::endl;

	if (this->_energyPoints > 0)
		std::cout << this->_energyPoints << " energy points left.";
	else
		std::cout << "no more energy points!";
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	this->_energyPoints += amount;
	std::cout << "[ClapTrap] " << this->_name << " heal " << amount << " points" << std::endl;
	std::cout << this->_energyPoints << " energy points left.";
}