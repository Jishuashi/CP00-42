/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:31:54 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/04 14:14:49 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void			ftPrint(std::string s);
std::string		toUpperCase(std::string s);

int main(int ac, char *av[])
{
	std::string str;

	if (ac != 2)
		return (1);
	str	= av[1];
	ftPrint(toUpperCase(str));
}

std::string    toUpperCase(std::string s)
{
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}

void   ftPrint(std::string s)
{
   std::cout << s << "\n";
}
