/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-guen <kle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 09:54:24 by kle-guen          #+#    #+#             */
/*   Updated: 2023/02/07 10:38:24 by kle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replace_str(std::string str, std::string s1, std::string s2)
{
	int	found;

	found = str.find(s1);
	while (found != -1)
	{
		str.erase(found, s1.size());
		str.insert(found, s2);
		found = str.find(s1, found + 1);
	}
	return (str);
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string	s_replaced;
		std::string	filename(av[1]);
		std::string	s1(av[2]);
		std::string	s2(av[3]);
		std::ifstream	ifs(filename.c_str());
		std::ofstream	ofs(filename.append(".replace").c_str());
		if (ifs)
		{
			ifs.seekg(0, ifs.end);
			int		length = ifs.tellg();
			ifs.seekg(0, ifs.beg);
			char	*ifstring = new char[length + 1];
			ifs.read(ifstring, length);
			ifstring[length] = '\0';
			ofs << replace_str(ifstring, s1, s2);
			delete [] ifstring;
		}
		else
			std::cerr << "Unable to open the given file" << std::endl;
	}
	else
		std::cerr << "Invalid number of arguments" << std::endl;
	return (0);
}
