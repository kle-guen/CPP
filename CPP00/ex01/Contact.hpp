/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:35:30 by kle-guen          #+#    #+#             */
/*   Updated: 2023/01/19 17:40:28 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>

class Contact 
{
	public:

		Contact();
		~Contact();

		void	getContacts(int index) const;
		void 	getContactFields(void) const;
		void 	cleanContactFields(void);
		void 	setContactFields(void);

	private:

		std::string FirstName;
		std::string LastName;
		std::string PhoneNumber;
		std::string Nickname;
		std::string DarkestSecret;
};

#endif