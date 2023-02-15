/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:27:32 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/13 12:00:44 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
    public:

        WrongAnimal(void);
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal &operator=(const WrongAnimal &c);
		virtual ~WrongAnimal(void);

        std::string getType(void) const;
        void setType(std::string type);

        void makeSound(void) const;
   
    protected:

        std::string _type;
};


#endif