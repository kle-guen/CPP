/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:48:55 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/15 14:24:51 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


/**************************************************************************************/
/*                                  canonical form                                    */
/**************************************************************************************/


Cat::Cat(void) : Animal()
{
    setType("Cat");
	this->_brain = new Brain();
	std::cout << "A Cat is born" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	if (this != &src)
	{
		this->_brain = new Brain();
		*(this->_brain) = *(src._brain);
		this->_type = src.getType();
	}
}

Cat	&Cat::operator=(const Cat &c)
{
	if (this != &c)
	{
		this->_brain = new Brain();
		*(this->_brain) = *(c._brain);
		setType(c.getType());
	}
	return (*this);
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "A Cat died" << std::endl;
}

/**************************************************************************************/
/*                                     makesound                                      */
/**************************************************************************************/


void	Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou!" << std::endl;
}