/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:21:03 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/10 14:45:59 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() 
{
	_idx = 0;
}

void PhoneBook::add()
{
	std::string fName;
	std::string lName;
	std::string nickname;
	std::string number;
	std::string secret;
	int			empty;

	empty = 0;
	fName = input("First Name :");
	if (fName.size() == 0)
		empty = 1;
	lName = input("Last Name :");
	if (lName.size() == 0)
		empty = 1;
	nickname = input("Nickname :");
	if (nickname.size() == 0)
		empty = 1;
	number = input("Phone Number :");
	if (number.size() == 0)
		empty = 1;
	secret = input("Darkest Secret :");
	if (secret.size() == 0)
		empty = 1;

	if (empty == 1)
	{
		std::cerr << "A Contact can't have a empty field" << std::endl;
		return ;
	}
	Contact nCont(fName, lName, nickname, number, secret);

	_cont[_idx % 8] = nCont;
	_idx++;
}

void	PhoneBook::search()
{
	std::string	resp;
	int			id;
	int			i = 0;
	int			len;

	std::cout << "┌----------┬----------┬----------┬----------┐"<< std::endl;
	std::cout << "|        ID|FIRST NAME| LAST NAME|  NICKNAME|"<< std::endl;
	if (this->_idx > 8)
		len = 8;
	else
		len = this->_idx;
	while (i < len)
	{
		std::cout << "|----------┼----------┼----------┼----------|"<< std::endl;
		this->_cont[i].printTab(i);
		i++;
	}
	std::cout << "└----------┴----------┴----------┴----------┘"<< std::endl;
	resp = this->input("Enter a contact's ID :");
	id = resp[0] - '0';
	if (id >= 0 && id < len)
		this->_cont[id].printContact();
	else 
		std::cerr << "No entry for index : " << resp << std::endl;
}

std::string PhoneBook::input(std::string pMsg)
{
	std::string res;

	std::cout << pMsg << " ";
	std::getline(std::cin, res);

	return (res);
}
