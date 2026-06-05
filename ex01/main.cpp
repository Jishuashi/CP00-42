/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:21:01 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/04 15:45:09 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string str;

	while (1)
	{
		std::cout << "Type a command :" << "\n";
		std::cin >> str;
		if (!str.compare("ADD"))
		std::cout << "The command is ADD" << "\n";
		if (!str.compare("SEARCH"))
		std::cout << "The command is SEARCH" << "\n";
		if (!str.compare("EXIT"))
			return (0);
	}
}