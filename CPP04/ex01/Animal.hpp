/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:47:39 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/13 11:56:14 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
    public:

        Animal(void);
		Animal(const Animal &src);
		Animal &operator=(const Animal &c);
		virtual ~Animal(void);

        std::string getType(void) const;
        void setType(std::string type);

        virtual void makeSound(void) const;

    protected:

        std::string _type;
};


#endif