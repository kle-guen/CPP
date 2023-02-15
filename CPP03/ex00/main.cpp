/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:31:00 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/14 15:36:14 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << std::endl << "/--------ex00 test---------/" << std::endl << std::endl;
	ClapTrap	Alex("Alex");

	Alex.attack("Zied");

	std::cout << "ClapTrap " << Alex.getName() << " has " << Alex.getHitPoints() << " hit points" << std::endl;
	Alex.takeDamage(2);
	std::cout << "ClapTrap " << Alex.getName() << " has " << Alex.getHitPoints() << " hit points" << std::endl;
	Alex.beRepaired(1);
	std::cout << "ClapTrap " << Alex.getName() << " has " << Alex.getHitPoints() << " hit points" << std::endl;
	std::cout << "ClapTrap " << Alex.getName() << " has " << Alex.getEnergyPoints() << " energy points" << std::endl;

	Alex.attack("Zied");
	Alex.attack("Zied");
	Alex.attack("Zied");
	Alex.attack("Zied");
	Alex.attack("Zied");
	Alex.attack("Zied");
	Alex.attack("Zied");
	Alex.attack("Zied");
	std::cout << "ClapTrap " << Alex.getName() << " has " << Alex.getEnergyPoints() << " energy points" << std::endl;
	Alex.attack("Zied");
	Alex.beRepaired(1);
	Alex.takeDamage(8);
	std::cout << "ClapTrap " << Alex.getName() << " has " << Alex.getHitPoints() << " hit points" << std::endl;


	std::cout << std::endl << "/--------assigenment operator---------/" << std::endl << std::endl;
	ClapTrap Alex_bis = Alex;
	std::cout << "ClapTrap " << Alex_bis.getName() << " has " << Alex_bis.getHitPoints() << " hit points" << std::endl;
	std::cout << "ClapTrap " << Alex_bis.getName() << " has " << Alex_bis.getEnergyPoints() << " energy points" << std::endl;
	Alex_bis.attack("Zied");

	std::cout << std::endl << "/--------copy constructor---------/" << std::endl << std::endl;
	ClapTrap Alex_bis_bis(Alex);
	std::cout << "ClapTrap " << Alex_bis_bis.getName() << " has " << Alex_bis_bis.getHitPoints() << " hit points" << std::endl;
	std::cout << "ClapTrap " << Alex_bis_bis.getName() << " has " << Alex_bis_bis.getEnergyPoints() << " energy points" << std::endl;
	Alex_bis_bis.attack("Zied");

	std::cout << std::endl << "/--------destructors---------/" << std::endl << std::endl;

	return (0);
}