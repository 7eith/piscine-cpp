/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:33:10 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/01 15:47:19 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include <iostream>
#include "AnimalClass.hpp"

class Cat : public Animal 
{

	protected:

		std::string _type;

	public:

		Cat(void);
		Cat(Cat const &copy);
		
		virtual ~Cat(void);
		
		Cat &operator=(Cat const &copy);

		virtual void 			makeSound(void) const;
		std::string				getType(void) const;
		
};

class WrongCat : public WrongAnimal
{
	protected:
	
		std::string _type;
	
	public:

		WrongCat(void);
		virtual		~WrongCat(void);
		void		makeSound(void) const;
};

#endif
