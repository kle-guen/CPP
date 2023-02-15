/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:50:24 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/13 11:39:47 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class   Dog : public Animal
{
    public:

        Dog(void);
		Dog(std::string name);
		Dog(const Dog &src);
		Dog &operator=(const Dog &c);
		~Dog(void);

		void makeSound(void) const; 
};


#endif