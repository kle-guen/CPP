/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:02:12 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/25 06:23:14 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	while (std::cin)
	{
		std::cout << "Enter a command: ";
		while (command.empty() && std::cin)
			std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
			phonebook.add();
		else if (command.compare("SEARCH") == 0)
			phonebook.search();
		else if (command.compare("EXIT") == 0)
			break;
		command.erase();
	}
	return (0);
}
