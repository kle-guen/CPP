/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:46:00 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/23 15:07:54 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *Subielos = zombieHorde(10, "Subielo");
	for (int i = 0; i < 10; i++)
	{	
		std::cout << i << ": ";
		Subielos[i]. announce();
	}
	delete [] Subielos;
	return (0);
}