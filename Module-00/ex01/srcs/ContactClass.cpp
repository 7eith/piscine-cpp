/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:18:31 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/15 22:59:23 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ContactClass.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void			Contact::createContact(void)
{
	std::cout << "[Prompt] Enter the First Name: ";
	std::getline(std::cin, this->_firstName);

	std::cout << "[Prompt] Enter the Last Name: ";
	std::getline(std::cin, this->_lastName);

	std::cout << "[Prompt] Enter the Nick Name: ";
	std::getline(std::cin, this->_nickName);

	std::cout << "[Prompt] Enter the Phone Number: ";
	std::getline(std::cin, this->_phoneNumber);

	std::cout << "[Prompt] Enter the Darkest Secret: ";
	std::getline(std::cin, this->_darkestSecret);
}

void			Contact::_displayField(std::string fieldValue)
{
	if (fieldValue.size() > 10)
		std::cout << std::right << std::setw(9) << fieldValue.substr(0, 9) << ".|";
	else
		std::cout << std::right << std::setw(10) << fieldValue.substr(0, 10) << "|";
}

void			Contact::displayContact(int identifier)
{
	std::cout << std::right << std::setw(10) << identifier << "|";

	this->_displayField(this->getFirstName());
	this->_displayField(this->getLastName());
	this->_displayField(this->getNickName());
	
	std::cout << std::endl;
}

void			Contact::displayFullContact(void)
{
	std::cout << "First Name: " << this->getFirstName() << std::endl;
	std::cout << "Last Name: " << this->getLastName() << std::endl;
	std::cout << "Nick Name: " << this->getNickName() << std::endl;
	std::cout << "Phone Number: " << this->getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->getDarkestSecret() << std::endl;
}

/**
 * @GETTERS
 */

std::string		Contact::getFirstName(void)
{
	return this->_firstName;
}

std::string		Contact::getLastName(void)
{
	return this->_lastName;
}

std::string		Contact::getNickName(void)
{
	return this->_nickName;
}

std::string		Contact::getPhoneNumber(void)
{
	return this->_phoneNumber;
}

std::string		Contact::getDarkestSecret(void)
{
	return this->_darkestSecret;
}
