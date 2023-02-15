/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:47:39 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/15 15:18:53 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal
{
    public:

        AAnimal(void);
		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &c);
		~AAnimal(void);

        std::string getType(void) const;
        void setType(std::string type);

        virtual void makeSound(void) const = 0;

    protected:

        std::string _type;
};


#endif