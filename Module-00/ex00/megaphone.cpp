/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:45:07 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/11 20:28:33 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **args)
{
	int		index;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	index = 1;
	while (args[index])
	{
		std::string str = args[index];
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			std::cout << str[i];
		}
		index++;
	}
	std::cout << std::endl;
	return (0);
}
