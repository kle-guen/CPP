/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:18:45 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/13 16:02:33 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class   Brain
{
    public:

        Brain(void);
		Brain(const Brain &src);
		Brain &operator=(const Brain &c);
		~Brain(void);
    
        void setIdeas(std::string idea, int index);
        std::string *getIdeas(void);

    private:

        std::string ideas[100];
};


#endif 