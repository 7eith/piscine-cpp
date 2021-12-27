/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:52:00 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/27 16:08:27 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int args_count, char **args)
{
	Karen karen;

	if (args_count == 2)
		karen.complain(args[1]);
	return (0);
}
