/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 20:29:24 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/02 13:02:42 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"
#include "DogClass.hpp"
#include "CatClass.hpp"

int main(void)
{
	// const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << "Type : ";
	std::cout << j->getType() << " " << std::endl;
	std::cout << "Type : ";
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	std::cout << "MakeSound Cat : ";
	i->makeSound();
	std::cout << std::endl;
	std::cout << "MakeSound Dog : ";
	j->makeSound();
	std::cout << std::endl;
	delete j;
	delete i;
	return (0);
	return (0);
}