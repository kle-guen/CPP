/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:10:48 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/23 15:14:17 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : name("ndefault")
{
	std::cout << "Zombie " << name << " is born" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName(void) const
{
	return (this->name);
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
