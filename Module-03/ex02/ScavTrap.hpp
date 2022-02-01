/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:57:17 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/01 15:05:15 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:
			ScavTrap(void);
			ScavTrap(std::string name);
			ScavTrap(ScavTrap const &copy);
			~ScavTrap(void);

			ScavTrap	&operator=(ScavTrap const &copy);
			void		attack(std::string const &target);
			void		guardGate(void);

};

#endif