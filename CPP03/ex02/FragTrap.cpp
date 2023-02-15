/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:47:18 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/14 15:30:46 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


/**************************************************************************************/
/*                                  canonical form                                    */
/**************************************************************************************/


FragTrap::FragTrap() : ClapTrap("n_Default")
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap " << _name << " is born" << std::endl;
}

FragTrap::FragTrap(std::string name) :  ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "FragTrap " << _name << " is born" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	*this = src;
}

FragTrap	&FragTrap::operator=(const FragTrap &c)
{
    this->_name = c.getName();
	this->_hit_points = c.getHitPoints();
	this->_energy_points = c.getEnergyPoints();
	this->_attack_damage = c.getAttackDamage();
    return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name << " died" << std::endl;
}


/**************************************************************************************/
/*                                  highFivesGuys                                     */
/**************************************************************************************/


void FragTrap:: highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " wants a high five!" << std::endl;
}
