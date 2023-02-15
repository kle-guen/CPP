/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:47:21 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/13 11:40:07 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"


/**************************************************************************************/
/*                                  canonical form                                    */
/**************************************************************************************/


AAnimal::AAnimal(void) : _type("t_default")
{
	std::cout << "An Aanimal is born" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	*this = src;
}

AAnimal	&AAnimal::operator=(const AAnimal &a)
{
    _type = a.getType();
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "An Aanimal died" << std::endl;
}


/**************************************************************************************/
/*                                  setter/getter                                     */
/**************************************************************************************/


void    AAnimal::setType(std::string type)
{
    this->_type = type;
}

std::string AAnimal::getType(void) const
{
    return (this->_type);
}


/**************************************************************************************/
/*                                     makesound                                      */
/**************************************************************************************/

void    AAnimal::makeSound(void) const
{
    std::cout << "*Aanimal noise*" << std::endl;
}