/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:17:53 by amonteli          #+#    #+#             */
/*   Updated: 2022/01/31 15:09:40 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie zombie("Sarkozy");
	zombie.announce();

	Zombie* zombieII = new Zombie("Mickey");
	Zombie* zombieIII = newZombie("EREN");

	randomChump("DOZO");
	
	delete zombieII;
	delete zombieIII;
	return (0);
}
