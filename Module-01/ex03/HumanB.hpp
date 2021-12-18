/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:53:53 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/18 20:35:34 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{
	private:

		std::string _name;
		Weapon* _weapon;

	public:

		HumanB(std::string name);
		~HumanB(void);

		void		attack();
		void		setWeapon(Weapon &weapon);
};

#endif
