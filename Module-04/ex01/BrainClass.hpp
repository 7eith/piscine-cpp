/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrainClass.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:28:35 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/02 12:47:54 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_CLASS_HPP
#define BRAIN_CLASS_HPP

#include <iostream>
#include "AnimalClass.hpp"

class Brain 
{

	protected:

		std::string _ideas[100];

	public:

		Brain(void);
		Brain(Brain const &copy);
		
		virtual ~Brain(void);
		
		Brain &operator=(Brain const &copy);

		std::string		getId(int index);
		void			setId(int index, std::string brain);
		
};

#endif
