/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:18:42 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/21 16:32:11 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{ 	
	NumContact = 0;
	OldestContact = 0;
}

PhoneBook::~PhoneBook(void){}

void	PhoneBook::add(void)
{
	if (NumContact < 8)
	{
		Contacts[NumContact].setContactFields();
		NumContact++;
	}
	else
	{
		Contacts[OldestContact].cleanContactFields();
		Contacts[OldestContact].setContactFields();
		OldestContact++;
		if (OldestContact > 7)
			OldestContact = 0;
	}
}

int	check_index(std::string given_index, int nb_contacts)
{
	if (given_index.size() > 1 || given_index[0] <= '0' || given_index[0] > (nb_contacts + 48))		
	{
		std::cerr << "Invalid index: range is " << "1 - " << nb_contacts; 
		std::cout << std::endl << "Index : ";
		return (1);
	}
	return (0);
}

void	PhoneBook::search(void)
{
	std::string given_index;

	if (!NumContact)
	{
		std::cerr << "PhoneBook is empty" << std::endl;
		return ;
	}
	std::cout << "     Index| FirstName|  LastName|  Nickname" << std::endl;
	for (int i = 0; i < NumContact; i++)
		Contacts[i].getContacts(i);
	std::cout << "Index : ";
	while (given_index.empty() || check_index(given_index, NumContact))
		std::getline(std::cin, given_index);
	Contacts[given_index[0] - 49].getContactFields();
}
