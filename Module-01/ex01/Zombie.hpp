/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:14:07 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/18 18:19:33 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
	private:

		std::string _name;

	public:

		Zombie(void);
		~Zombie(void);

		void announce(void);
		void setName(std::string name);

};

Zombie* zombieHorde(int N, std::string name);

#endif
