/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:21:03 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/05 14:32:36 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() 
{
	idx = 0;
}

void PhoneBook::add()
{
	std::string fName;
	std::string lName;
	std::string nickname;
	std::string number;
	std::string secret;

	fName = input("First Name :");
	lName = input("Last Name :");
	nickname = input("Nickname :");
	number = input("Phone Number :");
	secret = input("Darkest Secret :");

	Contact nCont(fName, lName, nickname, number, secret);

	cont[idx % 8] = nCont;
	idx++;
}

std::string PhoneBook::input(std::string pMsg)
{
	std::string res;

	std::cout << pMsg << "\n";
	std::cin >> res;

	return (res);
}
