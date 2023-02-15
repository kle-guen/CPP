/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:47:21 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/13 11:40:07 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


/**************************************************************************************/
/*                                  canonical form                                    */
/**************************************************************************************/


Animal::Animal(void) : _type("t_default")
{
	std::cout << "An animal is born" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
}

Animal	&Animal::operator=(const Animal &a)
{
    _type = a.getType();
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "An animal died" << std::endl;
}


/**************************************************************************************/
/*                                  setter/getter                                     */
/**************************************************************************************/


void    Animal::setType(std::string type)
{
    this->_type = type;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}


/**************************************************************************************/
/*                                     makesound                                      */
/**************************************************************************************/

void    Animal::makeSound(void) const
{
    std::cout << "*animal noise*" << std::endl;
}