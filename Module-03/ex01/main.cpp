/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 20:29:24 by amonteli          #+#    #+#             */
/*   Updated: 2022/01/06 22:20:57 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap crous("Crous");
	std::cout << std::endl;

	std::cout << "Stats :" << std::endl;
	std::cout << "Hit points " << crous.getHitPoints() << std::endl;
	std::cout << "Energy points " << crous.getEnergyPoints() << std::endl;
	std::cout << "Attack Damage " << crous.getAttackDamage() << std::endl;
	std::cout << std::endl;

	crous.attack("boursier");
	std::cout << std::endl;

	crous.beRepaired(50);
	std::cout << std::endl;

	crous.takeDamage(20);
	std::cout << std::endl;

	crous.guardGate();
	std::cout << std::endl;
	
	return (0);
}