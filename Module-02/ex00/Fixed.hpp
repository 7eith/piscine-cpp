/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:59:12 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/27 18:08:40 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>

class Fixed
{
	private:
		int					_fixedPoint;
		const static int	_fractionnalBit = 8;

	public:

		Fixed(void);
		Fixed(Fixed const &_copy);
		~Fixed(void);

		Fixed &operator=(Fixed const &_rhs);
		void	setRawBits(int const _rawBits);
		int		getRawBits(void) const;

};

#endif
