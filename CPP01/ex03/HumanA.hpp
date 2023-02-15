/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:13:04 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/25 08:20:04 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA
{
	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		std::string	getWeaponType(void) const;
		void		attack(void);

	private:

		Weapon		&weapon;
		std::string	name;
};


#endif
