/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:48:55 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/15 15:30:00 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


/**************************************************************************************/
/*                                  canonical form                                    */
/**************************************************************************************/


Cat::Cat(void) : AAnimal()
{
    setType("Cat");
	this->_brain = new Brain();
	std::cout << "A Cat is born" << std::endl;
}

Cat::Cat(const Cat &src) : AAnimal(src)
{
	Brain *brain_cpy = new Brain();

	brain_cpy = src._brain;
	this->_brain = brain_cpy;
	setType(src.getType());
}

Cat	&Cat::operator=(const Cat &c)
{
	Brain *brain_cpy = new Brain();

	brain_cpy = c._brain;						// garde fou cf tmp/idiotduvillage/ex02/fragtratrap.cpp
	this->_brain = brain_cpy;
	setType(c.getType());
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