/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 01:17:10 by amonteli          #+#    #+#             */
/*   Updated: 2022/01/07 01:42:02 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:
			FragTrap(void);
			FragTrap(std::string name);
			FragTrap(FragTrap const &copy);
			~FragTrap(void);

			FragTrap	&operator=(FragTrap const &copy);
			void		highFivesGuys(void);

};

#endif