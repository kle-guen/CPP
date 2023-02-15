/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:10:07 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/23 14:57:30 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:

		Zombie(std::string name);
		~Zombie(void);
		std::string	getName(void) const;
		void	setName(std::string name);
		void	announce(void);

	private:

		std::string name;

};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif