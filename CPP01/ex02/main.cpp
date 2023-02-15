/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:25:56 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/07 10:23:16 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Adresse de str : " << &str << std::endl;
	std::cout << "Adresse stockée dans stringPTR : " << stringPTR << std::endl;
	std::cout << "Adresse stockée dans stringREF : " << &stringREF << std::endl;
	
	std::cout << "Valeur de str : " << str << std::endl;
	std::cout << "Valeur pointée par stringPTR : " << *stringPTR << std::endl;
	std::cout << "Valeur pointée par stringREF : " << stringREF << std::endl;

	return (0);
}