/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:59:12 by amonteli          #+#    #+#             */
/*   Updated: 2022/01/06 17:29:57 by amonteli         ###   ########lyon.fr   */
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

		Fixed	operator+(Fixed const &_rhs) const;
		Fixed	&operator=(Fixed const &_rhs);
		Fixed	operator-(Fixed const &_rhs) const;
		Fixed	operator/(Fixed const &_rhs) const;
		Fixed	operator*(Fixed const &_rhs) const;

		int		operator>(Fixed const &_rhs) const;
		int		operator<(Fixed const &_rhs) const;
		int		operator>=(Fixed const &_rhs) const;
		int		operator<=(Fixed const &_rhs) const;
		int		operator==(Fixed const &_rhs) const;
		int		operator!=(Fixed const &_rhs) const;

		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		static	Fixed &min(Fixed &_first, Fixed &_second);
		static	Fixed &max(Fixed &_first, Fixed &_second);
		static	Fixed const &min(Fixed const &_first, Fixed const &_second);
		static	Fixed const &max(Fixed const &_first, Fixed const &_second);
		
		void	setRawBits(int const _rawBits);
		int		getRawBits(void) const;

		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
