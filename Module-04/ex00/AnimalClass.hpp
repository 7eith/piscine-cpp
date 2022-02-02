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
