/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:10:11 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/22 18:46:11 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *Subielo;

	Subielo = newZombie("Subielo");
	Subielo->announce();
	randomChump("KUNZZZZ");
	delete(Subielo);
}
