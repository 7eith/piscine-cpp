/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 04:08:15 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/01 15:47:16 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include <iostream>

class Animal 
{

	protected:

		std::string _type;

	public:

		Animal(void);
		Animal(Animal const &copy);
		
		virtual ~Animal(void);
		
		Animal &operator=(Animal const &copy);

		virtual void 			makeSound(void) const;
		virtual std::string		getType(void) const;
		
};

class WrongAnimal
{
	protected:
	
		std::string _type;
	
	public:

		WrongAnimal(void);
		virtual		~WrongAnimal(void);
		void		makeSound(void) const;
		
};

#endif
