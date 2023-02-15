/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:31:35 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/23 17:37:14 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
	this->type = weaponType;
}

Weapon::~Weapon(void){}

std::string	&Weapon::getType(void)
{
	std::string	&typeREF = this->type;
	return (typeREF);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}
