/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:42:00 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/02 12:47:44 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include <iostream>
#include "AnimalClass.hpp"
#include "BrainClass.hpp"

class Dog : virtual public Animal 
{

	private:

		Brain	*_brain;

	public:

		Dog();
		Dog(Dog const &copy);
		
		virtual ~Dog();
		
		Dog &operator=(Dog const &copy);

		void 					makeSound() const;
		
};

#endif
