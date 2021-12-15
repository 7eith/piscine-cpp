/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:11:26 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/15 23:02:51 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/PhoneBookClass.hpp"

PhoneBook::PhoneBook(void)
{
	this->_contactLength = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	PhoneBook::addContact(void)
{
	if (this->_contactLength == 8)
	{
		std::cout << "PhoneBook are full!";
		return;
	}
	this->_contacts[this->_contactLength].createContact();
	this->_contactLength++;
}

void	PhoneBook::searchContact(void)
{
	if (this->_contactLength == 0)
	{
		std::cout << "PhoneBook empty! Please add Contact using ADD!" << std::endl;
		return ;
	}
	
	std::cout << "     index|first name| last name| nick name|" << std::endl;

	for (int index = 0; index < this->_contactLength; index++)
		this->_contacts[index].displayContact(index);

	std::cout << "Type which contact do you want to expand informations: ";
	std::string input;
	std::getline(std::cin, input);
	if (input.length() != 1)
	{
		std::cout << "Invalid search settings! Retry with SEARCH!" << std::endl;
		return;
	}
	if (input[0] >= '0' && input[0] <= '7')
	{
		int index = std::atoi(input.c_str());

		if (index >= 0 && index <= 7)
		{
			if (index < this->_contactLength)
				this->_contacts[index].displayFullContact();
			else
				std::cout << "This contact doesn't exists!" << std::endl;
		}
	}
	else
		std::cout << "You can't search contact without another criteria than index! " << std::endl;
}