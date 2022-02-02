#ifndef BRAIN_CLASS_HPP
#define BRAIN_CLASS_HPP

#include <iostream>
#include "AnimalClass.hpp"

class Brain 
{

	protected:

		std::string _ideas[100];

	public:

		Brain();
		Brain(Brain const &copy);
		
		virtual ~Brain();
		
		Brain &operator=(Brain const &copy);

		std::string		getId(int index);
		void			setId(int index, std::string brain);
		
};

#endif
