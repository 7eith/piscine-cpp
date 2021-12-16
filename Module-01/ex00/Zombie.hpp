/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:17:57 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/16 19:28:02 by amonteli         ###   ########lyon.fr   */
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

		Zombie(std::string name);
		~Zombie(void);

		void announce(void);

};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
