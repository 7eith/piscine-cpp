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
