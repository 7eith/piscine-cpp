/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:19:25 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/16 19:31:16 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " RIP..." << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
