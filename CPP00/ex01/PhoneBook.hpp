/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:34:25 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/19 15:12:11 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook 
{
	public:

		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	search(void);

	private:

		Contact Contacts[8];
		int		NumContact;
		int		OldestContact;
};

#endif