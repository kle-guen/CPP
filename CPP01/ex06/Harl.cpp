/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 02:02:03 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/06 16:14:18 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void	Harl::debug(void)
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

typedef struct s_complain
{
	std::string	str;
	void		(Harl::*f)(void);
}				t_complain;

void	Harl::complain(std::string level)
{
	int	j = 0;
	static const t_complain	complain[4] = {{"DEBUG", &Harl::debug}, {"INFO", &Harl::info}, {"WARNING", &Harl::warning}, {"ERROR", &Harl::error}};
	while (j < 4)
	{
		if (complain[j].str == level)
			break;
		j++;
	}
	switch 	(j)
	{
		case 0 :
			for (int i = 0; i < 4; i++)
			{
				std::cout << "[ " << complain[i].str << " ]" << std::endl;
				(this->*(complain[i].f))();
				std::cout << std::endl;
			}
			break ;
		case 1 :
			for (int i = 1; i < 4; i++)
			{
				std::cout << "[ " << complain[i].str << " ]" << std::endl;
				(this->*(complain[i].f))();
				std::cout << std::endl;
			}
			break ;
		case 2 :
			for (int i = 2; i < 4; i++)
			{
				std::cout << "[ " << complain[i].str << " ]" << std::endl;
				(this->*(complain[i].f))();
				std::cout << std::endl;
			}
			break ;
		case 3 :
			std::cout << "[ " << complain[3].str << " ]" << std::endl;
			(this->*(complain[3].f))();
			std::cout << std::endl;
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
