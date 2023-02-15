/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:30:22 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/08 12:52:39 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:

		Fixed(void);
		Fixed(const Fixed &src);
		Fixed	&operator=(const Fixed &f);
		~Fixed(void);
		int	getRawBits(void) const;
		void setRawBits(int const raw);

	private:

		int	fixedPointNumber;
		static const int binaryPoint = 8;

};

#endif
