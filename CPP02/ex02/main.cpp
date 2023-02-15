/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:31:00 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/10 11:51:00 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	std::cout << std::endl << "/--------ex01 test---------/" << std::endl << std::endl;
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	std::cout << std::endl << "/--------ex02 test---------/" << std::endl << std::endl;
	Fixed e;
	Fixed const f( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "e : " << e << std::endl;
	std::cout << "++e :" << ++e << std::endl;
	std::cout << "e : " << e << std::endl;
	std::cout << "e++ :" << e++ << std::endl;
	std::cout << "e :" << e << std::endl;
	std::cout << "f : " << f << std::endl;
	std::cout << "max(e, f) : " << Fixed::max( e, f ) << std::endl;
	std::cout << "min(e, f) : " << Fixed::min( e, f ) << std::endl;

	std::cout << std::endl <<  "/--------comparison tests--------/ " << std::endl << std::endl;
	
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "e < f: " << (e < f) << std::endl;
	std::cout << "e <= f: " << (e <= f) << std::endl;
	std::cout << "e > f: " << (e > f) << std::endl;
	std::cout << "e >= f: " << (e >= f) << std::endl;
	std::cout << "e == f: " << (e == f) << std::endl;
	
	std::cout << std::endl << "/------Creation d'un fixed g = f------/" << std::endl << std::endl;
	
	Fixed g = f;
	std::cout << "g = " << g << ", f = " << f << std::endl;
	std::cout << "g < f: " << (g < f) << std::endl;
	std::cout << "g <= f: " << (g <= f) << std::endl;
	std::cout << "g > f: " << (g > f) << std::endl;
	std::cout << "g >= f: " << (g >= f) << std::endl;
	std::cout << "g == f: " << (g == f) << std::endl;

	std::cout << std::endl <<  "/--------arithmetical tests--------/ " << std::endl << std::endl;
	Fixed i(4.5f);
	Fixed j(2);
	std::cout << "i = " << i << ", j = " << j << std::endl;
	std::cout << "i + j: " << (i + j) << std::endl;
	std::cout << "i - j: " << (i - j) << std::endl;
	std::cout << "i * j: " << (i * j) << std::endl;
	std::cout << "i / j: " << (i / j) << std::endl;
	return 0;
}
