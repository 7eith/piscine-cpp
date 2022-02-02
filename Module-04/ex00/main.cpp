#include "AnimalClass.hpp"
#include "DogClass.hpp"
#include "CatClass.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal *t = new WrongAnimal();
	const WrongAnimal *c = new WrongCat();

	t->makeSound();
	c->makeSound();

	delete meta;
	delete j;
	delete i;
	delete t;
	delete c;
	
	return (0);
}