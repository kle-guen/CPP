/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:30:22 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/08 16:51:42 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:

		Fixed(void);
		Fixed(int const raw);
		Fixed(float const raw);
		Fixed	&operator=(const Fixed &f);
		Fixed(const Fixed &src);
		~Fixed(void);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

	private:

		int	fixedPointNumber;
		static const int binaryPoint = 8;

};

std::ostream	&operator<<(std::ostream &o, const Fixed &f);

#endif
