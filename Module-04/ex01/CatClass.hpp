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
