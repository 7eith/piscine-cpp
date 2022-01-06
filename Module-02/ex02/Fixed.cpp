/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 18:02:38 by amonteli          #+#    #+#             */
/*   Updated: 2022/01/06 17:39:32 by amonteli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _fixedPoint(0)
{
	return;
}

Fixed::Fixed(const Fixed &_copy)
{
	*this = _copy;
	return;
}

Fixed::Fixed(const int val): _fixedPoint(val << this->_fractionnalBits)
{
	return;
}

Fixed::Fixed(const float val): _fixedPoint(roundf(val * (1 << this->_fractionnalBits)))
{
	return;
}

Fixed::~Fixed(void)
{
	return;
}

/**
 * @OPERATORS
 */

Fixed	&Fixed::operator=(Fixed const &_rhs)
{
	if (this != &_rhs)
		this->_fixedPoint = _rhs.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(Fixed const &_rhs) const
{
	Fixed	result(this->toFloat() + _rhs.toFloat());

	return result;
}

Fixed	Fixed::operator-(Fixed const &_rhs) const
{
	Fixed	result(this->toFloat() - _rhs.toFloat());

	return result;
}

Fixed	Fixed::operator/(Fixed const &_rhs) const
{
	Fixed	result(this->toFloat() / _rhs.toFloat());

	return result;
}

Fixed	Fixed::operator*(Fixed const &_rhs) const
{
	Fixed	result(this->toFloat() * _rhs.toFloat());

	return result;
}

int		Fixed::operator>(Fixed  const &_rhs) const
{
	if (this->_fixedPoint > _rhs._fixedPoint)
		return (1);
	return (0);
}

int		Fixed::operator<(Fixed const &_rhs) const
{
	if (this->_fixedPoint < _rhs._fixedPoint)
		return (1);
	return (0);
}

int		Fixed::operator>=(Fixed const &_rhs) const
{
	if (this->_fixedPoint >= _rhs._fixedPoint)
		return (1);
	return (0);
}

int		Fixed::operator<=(Fixed const &_rhs) const
{
	if (this->_fixedPoint <= _rhs._fixedPoint)
		return (1);
	return (0);
}

int		Fixed::operator==(Fixed const &_rhs) const
{
	if (this->_fixedPoint == _rhs._fixedPoint)
		return (1);
	return (0);
}

int		Fixed::operator!=(Fixed const &_rhs) const
{
	if (this->_fixedPoint != _rhs._fixedPoint)
		return (1);
	return (0);
}

Fixed	&Fixed::operator++()
{
	this->_fixedPoint++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed	&Fixed::operator--()
{
	this->_fixedPoint--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

Fixed	&Fixed::min(Fixed &_first, Fixed &_second)
{
	if (_first > _second)
		return (_first);
	return (_second);
}

Fixed	const &Fixed::min(Fixed const &_first, Fixed const &_second)
{
	if (_first > _second)
		return (_first);
	return (_second);
}

Fixed	&Fixed::max(Fixed &_first, Fixed &_second)
{
	if (_first < _second)
		return (_second);
	return (_first);
}

Fixed	const &Fixed::max(Fixed const &_first, Fixed const &_second)
{
	if (_first < _second)
		return (_second);
	return (_first);
}

void	Fixed::setRawBits(const int _raw)
{
	this->_fixedPoint = _raw;
	return;
}

int		Fixed::getRawBits(void) const
{
	return (this->_fixedPoint);
}

int		Fixed::toInt(void) const
{
	return _fixedPoint >> this->_fractionnalBits;
}

float	Fixed::toFloat(void) const
{
	return ((float) this->getRawBits() / (float)(1 << this->_fractionnalBits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return out;
}