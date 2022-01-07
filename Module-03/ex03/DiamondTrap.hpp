/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 01:22:30 by amonteli          #+#    #+#             */
/*   Updated: 2022/01/07 01:31:25 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	
	private:
			std::string _name;

	public:
			DiamondTrap(void);
			DiamondTrap(std::string name);
			DiamondTrap(DiamondTrap const &copy);
			~DiamondTrap(void);

			DiamondTrap	&operator=(DiamondTrap const &copy);
			void		whoAmI(void);
			void		attack(std::string const &target);

};

#endif