/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:18:30 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/13 16:27:38 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


/**************************************************************************************/
/*                                  canonical form                                    */
/**************************************************************************************/


Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

Brain	&Brain::operator=(const Brain &b)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = b.ideas[i];
    return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}


/**************************************************************************************/
/*                                  setter/getter                                     */
/**************************************************************************************/

void    Brain::setIdeas(std::string idea, int index)
{
    this->ideas[index] = idea;
}

std::string *Brain::getIdeas(void)
{
    return (this->ideas);
}