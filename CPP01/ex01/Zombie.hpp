/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:10:07 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/23 15:11:17 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:

		Zombie(void);
		~Zombie(void);
		std::string	getName(void) const;
		void	setName(std::string name);
		void	announce(void);

	private:

		std::string name;

};

Zombie* zombieHorde(int N, std::string name);

#endif
