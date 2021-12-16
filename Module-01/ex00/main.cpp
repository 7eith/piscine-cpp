/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:17:53 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/16 19:30:39 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie zombie("Sarkozy");
	zombie.announce();

	Zombie* zombieII = new Zombie("Mickey");

	randomChump("DOZO");
	delete zombieII;
	return (0);
}
