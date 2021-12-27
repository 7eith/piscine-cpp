/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 18:02:38 by amonteli          #+#    #+#             */
/*   Updated: 2021/12/27 18:07:53 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = _copy;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed	&Fixed::operator=(Fixed const &_rhs)
{
	std::cout << "Assignement Operator Called" << std::endl;

	if (this != &_rhs)
		this->_fixedPoint = _rhs.getRawBits();
	return *this;
}

void	Fixed::setRawBits(const int _raw)
{
	this->_fixedPoint = _raw;
	return;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "Called Fixed::getRawBits()" << std::endl;
	return (this->_fixedPoint);
}
