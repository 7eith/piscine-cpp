/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 20:29:24 by amonteli          #+#    #+#             */
/*   Updated: 2022/02/02 12:53:22 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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