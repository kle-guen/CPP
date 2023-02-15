/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:51:36 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/13 11:54:27 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"


/**************************************************************************************/
/*                                  canonical form                                    */
/**************************************************************************************/


WrongCat::WrongCat(void) : WrongAnimal()
{
    this->setType("WrongCat");
	std::cout << "A wrong cat is born" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	*this = src;
}

WrongCat	&WrongCat::operator=(const WrongCat &c)
{
	setType(c.getType());
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "A wrong cat died" << std::endl;
}

/**************************************************************************************/
/*                                     makesound                                      */
/**************************************************************************************/


void	WrongCat::makeSound(void) const
{
	std::cout << "Miaou Miaou!" << std::endl;
}