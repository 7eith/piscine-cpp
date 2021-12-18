/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:52:18 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/18 20:05:36 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
	private:

		std::string _name;
		Weapon &_weapon;

	public:

		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		void		attack();
};

#endif
