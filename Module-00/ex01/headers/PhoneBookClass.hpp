/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:04:25 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/15 22:27:23 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <iomanip>
#include "ContactClass.hpp"

class PhoneBook
{
	private:

		Contact _contacts[8];
		int		_contactLength;

	public:
	
		PhoneBook(void);
		~PhoneBook(void);

		void addContact(void);
		void searchContact(void);
};

#endif