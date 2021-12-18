/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:23:12 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/18 20:00:57 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main(void)
{

	Weapon	club = Weapon("crude spiked club");

	HumanA Elon("Elon", club);
	Elon.attack();
	club.setType("some other type of club");
	Elon.attack();
}
