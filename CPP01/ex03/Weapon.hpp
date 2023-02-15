/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:24:00 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/23 18:12:57 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	public:

		Weapon(std::string weaponType);
		~Weapon(void);
		std::string	&getType(void);
		void		setType(std::string newType);

	private:

		std::string type;
};

#endif