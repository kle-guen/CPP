/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:27:20 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/13 11:40:26 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"


/**************************************************************************************/
/*                                  canonical form                                    */
/**************************************************************************************/


WrongAnimal::WrongAnimal(void) : _type("t_default")
{
	std::cout << "A wrong animal is born" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &a)
{
    _type = a.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "a wrong animal died" << std::endl;
}


/**************************************************************************************/
/*                                  setter/getter                                     */
/**************************************************************************************/


void    WrongAnimal::setType(std::string type)
{
    this->_type = type;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}


/**************************************************************************************/
/*                                     makesound                                      */
/**************************************************************************************/

void    WrongAnimal::makeSound(void) const
{
    std::cout << "*wrong animal noise*" << std::endl;
}