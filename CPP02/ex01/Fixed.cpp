/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:31:12 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/10 10:24:26 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


/**************************************************************************************/
/*									canonical form								      */
/**************************************************************************************/


Fixed::Fixed(void) : fixedPointNumber(0)
{
	std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = src;
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignement operator called " << std::endl;
	this->fixedPointNumber = f.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}


/**************************************************************************************/
/*								integer/float constructors							  */
/**************************************************************************************/


Fixed::Fixed(int const raw) : fixedPointNumber(raw << binaryPoint)
{
	std::cout << "Int constructor called " << std::endl;
}

Fixed::Fixed(float const raw): fixedPointNumber(roundf(raw * (1 << binaryPoint)))
{
	std::cout << "Float constructor called " << std::endl;
}


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
/*								insertion surchage operator						      */
/**************************************************************************************/


std::ostream	&operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}
