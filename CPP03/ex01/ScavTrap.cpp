/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:36:55 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/12 15:16:50 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


/**************************************************************************************/
/*                                  canonical form                                    */
/**************************************************************************************/


ScavTrap::ScavTrap() : ClapTrap("n_Default")
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap " << _name << " is born" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :  ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap " << _name << " is born" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	*this = src;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &c)
{
    this->_name = c.getName();
	this->_hit_points = c.getHitPoints();
	this->_energy_points = c.getEnergyPoints();
	this->_attack_damage = c.getAttackDamage();
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " died" << std::endl;
}


/**************************************************************************************/
/*                                  ScavTrap attack                                   */
/**************************************************************************************/


void ScavTrap::attack(const std::string& target)
{
    if (this->_hit_points < 1)
		std::cout << "ScavTrap " << this->_name << " is out of hit points" << std::endl;
	else if (this->_energy_points < 1)
		std::cout << "ScavTrap " << this->_name << " is out of energy points" << std::endl;
	else
	{
		this->_energy_points--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
}


/**************************************************************************************/
/*                                    guardGate                                       */
/**************************************************************************************/


void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}
