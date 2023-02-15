/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 06:34:44 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/25 08:52:29 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA(void){}

std::string	HumanA::getWeaponType(void) const
{
	return (this->weapon.getType());
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->getWeaponType() << std::endl;
}
