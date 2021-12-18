/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 18:23:12 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/18 18:27:48 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{

	std::string String = "HI THIS IS BRAIN";

	std::string* stringPTR = &String;
	std::string& stringREF = String;

	std::cout << "PTR - Address : " << stringPTR << std::endl;
	std::cout << "REF - Address : " << stringREF << std::endl;
	std::cout << "PTR - String : " << *stringPTR << std::endl;
	std::cout << "REF - String : " << stringREF << std::endl;

}
