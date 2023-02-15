/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:50:24 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/13 16:11:28 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class   Dog : public Animal
{
    public:

        Dog(void);
		Dog(std::string name);
		Dog(const Dog &src);
		Dog &operator=(const Dog &c);
		~Dog(void);
    
        void setFirstIdea(std::string idea);
        std::string getFirstIdea(void);

		void makeSound(void) const;
	
	private:

		Brain *_brain;
		int	_index;
};


#endif