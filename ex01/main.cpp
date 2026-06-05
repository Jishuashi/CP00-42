/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:21:01 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/05 13:42:59 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	str;
	PhoneBook	phonebook;

	while (1)
	{
		std::cout << "Type a command (ADD, SEARCH, EXIT):" << "\n";
		std::cin >> str;
		if (!str.compare("ADD"))
			phonebook.add();
		if (!str.compare("SEARCH"))
		std::cout << "The command is SEARCH" << "\n";
		if (!str.compare("EXIT"))
			return (0);
	}
}