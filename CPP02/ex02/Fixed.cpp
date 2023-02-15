/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:31:12 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/10 11:49:11 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


/**************************************************************************************/
/*									canonical form								      */
/**************************************************************************************/


Fixed::Fixed(void) : fixedPointNumber(0){}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	this->fixedPointNumber = f.getRawBits();
	return (*this);
}

Fixed::~Fixed(void){}


/**************************************************************************************/
/*								integer/float constructors							  */
/**************************************************************************************/


Fixed::Fixed(int const raw) : fixedPointNumber(raw << binaryPoint){}

Fixed::Fixed(float const raw): fixedPointNumber(roundf(raw * (1 << binaryPoint))){}


/**************************************************************************************/
/*									getter/setter								      */
/**************************************************************************************/


int	Fixed::getRawBits(void) const
{
	return (this->fixedPointNumber);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointNumber = raw;
}


/**************************************************************************************/
/*								conversion functions								  */
/**************************************************************************************/


float Fixed::toFloat(void) const
{
	return ((float)(this->fixedPointNumber) / (1 << binaryPoint));
}		
		
int Fixed::toInt(void) const
{
	return (this->fixedPointNumber >> binaryPoint);
}

/**************************************************************************************/
/*								comparison operators								  */
/**************************************************************************************/


bool	Fixed::operator>(const Fixed &f) const
{
	return (this->fixedPointNumber > f.getRawBits());
}

bool	Fixed::operator<(const Fixed &f) const
{
	return (this->fixedPointNumber < f.getRawBits());
}

bool	Fixed::operator>=(const Fixed &f) const
{
	return (this->fixedPointNumber >= f.getRawBits());
}

bool	Fixed::operator<=(const Fixed &f) const
{
	return (this->fixedPointNumber <= f.getRawBits());
}

bool	Fixed::operator==(const Fixed &f) const
{
	return (this->fixedPointNumber == f.getRawBits());
}

bool	Fixed::operator!=(const Fixed &f) const
{
	return (this->fixedPointNumber != f.getRawBits());
}


/**************************************************************************************/
/*							    arithmetical operators								  */
/**************************************************************************************/


Fixed	Fixed::operator+(const Fixed &f) const
{
	return (toFloat() + f.toFloat());
}

Fixed	Fixed::operator-(const Fixed &f) const
{
	return (toFloat() - f.toFloat());
}

Fixed	Fixed::operator*(const Fixed &f) const
{
	return (toFloat() * f.toFloat());
}

Fixed	Fixed::operator/(const Fixed &f) const
{
	return (toFloat() / f.toFloat());
}


/**************************************************************************************/
/*								incrementation operators							  */
/**************************************************************************************/


Fixed	Fixed::operator++(int)
{
	Fixed	cpy(*this);

	this->fixedPointNumber++;
	return (cpy);
}

Fixed	&Fixed::operator++(void)
{
	this->fixedPointNumber++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	cpy(*this);

	this->fixedPointNumber--;
	return (cpy);
}

Fixed	&Fixed::operator--(void)
{
	this->fixedPointNumber--;
	return (*this);
}


/**************************************************************************************/
/*								  min/max functions								      */
/**************************************************************************************/


Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}


/**************************************************************************************/
/*								insertion surchage operator						      */
/**************************************************************************************/


std::ostream	&operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}
