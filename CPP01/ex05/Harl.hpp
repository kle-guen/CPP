/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 02:02:09 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/28 02:15:28 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
	public:

		Harl(void);
		~Harl(void);
		void complain(std::string level);

	private:

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);		
};

#endif