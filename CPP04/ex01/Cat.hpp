/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:49:19 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/13 15:38:24 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"


class   Cat : public Animal
{
    public:
        
        Cat(void);
		Cat(const Cat &src);
		Cat &operator=(const Cat &c);
		~Cat(void);

		void makeSound(void) const;

	private:

		Brain *_brain;
};


#endif