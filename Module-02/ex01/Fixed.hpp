/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:59:12 by amonteli          #+#    #+#             */
/*   Updated: 2022/01/06 15:52:37 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <math.h>

class Fixed
{
	private:
		int					_fixedPoint;
		const static int	_fractionnalBits = 8;

	public:

		Fixed(void);
		Fixed(Fixed const &_copy);
		Fixed(const int val);
		Fixed(const float val);
		~Fixed(void);

		Fixed &operator=(Fixed const &_rhs);
		void	setRawBits(int const _rawBits);
		int		getRawBits(void) const;

		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
