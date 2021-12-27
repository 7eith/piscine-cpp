/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:51:53 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/27 16:48:24 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	this->_tab[0] = &Karen::_debug;
	this->_tab[1] = &Karen::_info;
	this->_tab[2] = &Karen::_warning;
	this->_tab[3] = &Karen::_error;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::complain(std::string level)
{
	int				index;
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (index = 0; index < 4; index++)
	{
		if (levels[index] == level)
			break;
	}
	switch (index)
	{
		case 0:
			this->_debug();
			std::cout << std::endl;
		case 1:
			this->_info();
			std::cout << std::endl;
		case 2:
			this->_warning();
			std::cout << std::endl;
		case 3:
			this->_error();
			std::cout << std::endl;
		default:
			std::cout << "Probably complaining about insignificant problems" << std::endl;
	}
}

void	Karen::_debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::_info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::_error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
