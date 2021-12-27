/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:51:56 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/27 16:14:49 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <iomanip>

class Karen
{
	private:
		void		(Karen::*_tab[4])(void);

		void		_debug(void);
		void		_info(void);
		void		_warning(void);
		void		_error(void);

	public:

		Karen(void);
		~Karen(void);

		void		complain(std::string level);

};

#endif
