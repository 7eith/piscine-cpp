#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include <iostream>
#include "AnimalClass.hpp"

class Dog : public Animal 
{

	protected:

		std::string _type;

	public:

		Dog(void);
		Dog(Dog const &copy);
		
		virtual ~Dog(void);
		
		Dog &operator=(Dog const &copy);

		virtual void 			makeSound(void) const;
		std::string				getType(void) const;
		
};

#endif
