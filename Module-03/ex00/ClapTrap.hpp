/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 20:14:26 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/01 14:49:39 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "iostream"
#include "string"

class ClapTrap 
{
	private:

			std::string _name;
			int			_hitPoints;
			int			_energyPoints;
			int			_attackDamage;
	
	public:

			ClapTrap(void);
			ClapTrap(std::string name);
			ClapTrap(ClapTrap const &copy);
			~ClapTrap(void);

			ClapTrap	&operator=(ClapTrap const &copy);

			void		attack(std::string const &target);
			void		takeDamage(unsigned int amount);
			void		beRepaired(unsigned int amount);

			std::string	getName(void) const;
			int			getHitPoints(void) const;
			int			getEnergyPoints(void) const;
			int			getAttackDamage(void) const;
};

#endif