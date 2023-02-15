/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:27:32 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/15 15:32:58 by kle-guen         ###   ########.fr       */
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
		~WrongAnimal(void);

        std::string getType(void) const;
        void setType(std::string type);

        void makeSound(void) const;
   
    protected:

        std::string _type;
};


#endif