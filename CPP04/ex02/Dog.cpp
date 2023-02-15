/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:50:48 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/15 15:30:21 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


/**************************************************************************************/
/*                                  canonical form                                    */
/**************************************************************************************/


Dog::Dog(void) : AAnimal()
{
    setType("Dog");
	this->_brain = new Brain();
	std::cout << "A Dog is born" << std::endl;
}

Dog::Dog(const Dog &src) : AAnimal(src)
{
	if (this != &src)
	{
		this->_brain = new Brain();
		*(this->_brain) = *(src._brain);
		this->_type = src.getType();
	}
}

Dog	&Dog::operator=(const Dog &c)
{
	if (this != &c)
	{ 
		this->_brain = new Brain();
		*(this->_brain) = *(c._brain);
		setType(c.getType());
	}
	return (*this);
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "A Dog died" << std::endl;
}


/**************************************************************************************/
/*                                  setter/getter                                     */
/**************************************************************************************/


void    Dog::setFirstIdea(std::string idea)
{
	this->_brain->setIdeas(idea, 0);
}

std::string Dog::getFirstIdea(void)
{
    return (*this->_brain->getIdeas());
}


/**************************************************************************************/
/*                                     makesound                                      */
/**************************************************************************************/


void	Dog::makeSound(void) const
{
	std::cout << "Wouaf Wouaf!" << std::endl;
}