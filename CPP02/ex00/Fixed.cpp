/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:31:12 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/10 10:36:40 by kle-guen         ###   ########.fr       */
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
/*									getter/setter								      */
/**************************************************************************************/


int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointNumber);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPointNumber = raw;
}
