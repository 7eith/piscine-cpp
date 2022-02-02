#include "AnimalClass.hpp"
#include "DogClass.hpp"
#include "CatClass.hpp"

int main(void)
{
	const Animal *tab[100];

	for (int i = 0; i < 50; i++)
		tab[i] = new Cat;
	for (int i = 50; i < 100; i++)
		tab[i] = new Dog;
	for (int i = 0; i < 100; i++)
		delete tab[i];

	std::cout << "\n\n======================================================================\n\n" << std::endl;

	Dog basic;
	{
		Dog tmp = basic;
	}
	
	return (0);
}