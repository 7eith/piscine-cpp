/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:33:10 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/02 12:41:49 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include <iostream>
#include "AnimalClass.hpp"
#include "BrainClass.hpp"

class Cat : virtual public Animal 
{

	private:

		Brain		*_brain;

	public:

		Cat();
		Cat(Cat const &copy);
		
		virtual ~Cat();
		
		Cat &operator=(Cat const &copy);

		void 			makeSound() const;
		
};

#endif
