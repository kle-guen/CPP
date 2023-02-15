/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:44:23 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/11 15:03:51 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


/**************************************************************************************/
/*                                  canonical form                                    */
/**************************************************************************************/


ClapTrap::ClapTrap(void) : _name("n_default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << this->_name << " is born" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << this->_name << " is born" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &c)
{
	this->_name = c.getName();
	this->_hit_points = c.getHitPoints();
	this->_energy_points = c.getEnergyPoints();
	this->_attack_damage = c.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " died" << std::endl;
}


/**************************************************************************************/
/*                                     getters                                        */
/**************************************************************************************/


std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}


/**************************************************************************************/
/*                                 action functions                                   */
/**************************************************************************************/


void	ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points < 1)
		std::cout << "ClapTrap " << this->_name << " is out of hit points" << std::endl;
	else if (this->_energy_points < 1)
		std::cout << "ClapTrap " << this->_name << " is out of energy points" << std::endl;
	else
	{
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points < 1)
		std::cout << "ClapTrap " << this->_name << " is out of hit points" << std::endl;
	else if (this->_energy_points < 1)
		std::cout << "ClapTrap " << this->_name << " is out of energy points" << std::endl;
	else
	{
		if (this->_hit_points < amount)
			this->_hit_points = 0;
		else
			this->_hit_points -= amount;
		std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points < 1)
		std::cout << "ClapTrap " << this->_name << " is out of hit points" << std::endl;
	else if (this->_energy_points < 1)
		std::cout << "ClapTrap " << this->_name << " is out of energy points" << std::endl;
	else
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << "ClapTrap " << this->_name << " restored " << amount << " hit points!" << std::endl;
	}
}
