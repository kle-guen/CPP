/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:49:19 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/13 11:52:33 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{
    public:
        
        WrongCat(void);
		WrongCat(const WrongCat &src);
		WrongCat &operator=(const WrongCat &c);
		~WrongCat(void);

		void makeSound(void) const;
};


#endif