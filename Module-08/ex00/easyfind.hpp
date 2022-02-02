
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <algorithm>
#include <iostream>

template<typename T>
int		easyfind(T cont, int occurence)
{
	std::vector<int>::iterator ret;

	ret = std::find (cont.begin(), cont.end(), occurence);
	if (ret != cont.end())
	{
		std::cout << "Trouvé !" << std::endl;
		return (1);
	}
	else
	{
		std::cout << "L'occurence n'a pas été trouvée..." << std::endl;
		return (0);
	}
}

#endif
