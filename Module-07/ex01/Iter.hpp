#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"

template <typename Tadd, typename Tlenght>
void iter(Tadd const *tab, Tlenght lenght, void (*fct)(Tadd const &tab))
{
	for (int index = 0; index < lenght; index++)
		(*fct)(tab[index]);
}

#endif