/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 06:56:42 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/25 08:49:19 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class	HumanB
{
	public:

		HumanB(std::string name);
		~HumanB(void);
		void		setWeapon(Weapon& weapon);
		std::string	getWeaponType(void) const;
		void		attack(void);

	private:

		Weapon		*weapon;
		std::string	name;
};

#endif
