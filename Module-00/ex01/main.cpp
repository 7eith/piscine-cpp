/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:27:37 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/15 22:31:05 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "headers/PhoneBookClass.hpp"

int		main(void)
{
	PhoneBook phoneBook;
	std::string input;

	std::cout << "Welcome to PhoneBook!" << std::endl;
	std::cout << "Command(s): ADD, SEARCH, EXIT" << std::endl;
	std::cout << "Type what do you want to do: ";
	
	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
			phoneBook.addContact();
		else if (input == "SEARCH")
			phoneBook.searchContact();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid command! Command(s): ADD, SEARCH, EXIT" << std::endl;
		std::cout << "Type what do you want to do: ";
	}
	std::cout << "Exiting PhoneBook..." << std::endl;
	return (0);
}