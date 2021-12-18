/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:16:46 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/18 18:17:56 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	Zombies = new Zombie[N];

	for (int index = 0; index < N; index++)
	{
		Zombies[index].setName(name);
		Zombies[index].announce();
	}
	return (Zombies);
}
