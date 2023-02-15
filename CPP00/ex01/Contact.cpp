/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:12:48 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/19 17:43:07 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

std::string	getcolumn(std::string field)
{
	std::string	column;

	if (field.size() > 10)
	{
		column = field.substr(0,9);
		column.append(".");
		return (column);
	}
	else
		return (field);
}

void	Contact::getContactFields(void) const
{
	std::cout << "First Name: " << FirstName << std::endl;
	std::cout << "Last Name: " << LastName << std::endl;
	std::cout << "PhoneNumber: " << PhoneNumber << std::endl;
	std::cout << "Nickname: " << Nickname << std::endl;
	std::cout << "DarkestSecret: " << DarkestSecret << std::endl;
}

void	Contact::getContacts(int index) const
{
	std::string	str;

	std::cout << std::setw(10) << index + 1 << "|";
	std::cout << std::setw(10) << getcolumn(FirstName) << "|";
	std::cout << std::setw(10) << getcolumn(LastName) << "|";
	std::cout << std::setw(10) << getcolumn(Nickname) << std::endl;
}

void 	Contact::cleanContactFields(void)
{
	FirstName.erase();
	LastName.erase();
	PhoneNumber.erase();
	Nickname.erase();
	DarkestSecret.erase();
}

void 	Contact::setContactFields(void)
{
	while (FirstName.empty())
	{
		std::cout << "First Name: ";	
		std::getline(std::cin, FirstName);
	}
	while (LastName.empty())
	{
		std::cout << "Last Name: ";	
		std::getline(std::cin, LastName);
	}
	while (PhoneNumber.empty())
	{
		std::cout << "PhoneNumber: ";	
		std::getline(std::cin, PhoneNumber);
	}
	while (Nickname.empty())
	{
		std::cout << "Nickname: ";	
		std::getline(std::cin, Nickname);
	}
	while (DarkestSecret.empty())
	{
		std::cout << "DarkestSecret: ";	
		std::getline(std::cin, DarkestSecret);
	}
}
