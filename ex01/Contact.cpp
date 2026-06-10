/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:21:05 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/10 13:54:34 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <sstream>

Contact::Contact() {}

Contact::Contact(std::string pFName, std::string pLName, std::string pNickname,
		std::string pNumber, std::string pSecret) : _fName(pFName), _lName(pLName),
		_nickname(pNickname), _number(pNumber), _secret(pSecret) {}

void Contact::printTab(int id)
{
	std::ostringstream oss;

	oss << id;
	if (this->_fName.size() == 0)
		return ;
	std::cout << "|" << rightAlignSized(10, oss.str())
		<< "|" << rightAlignSized(10, this->_fName) << "|"
		<< rightAlignSized(10, this->_lName) << "|"
		<< rightAlignSized(10, this->_nickname) << "|" << std::endl;
}

void Contact::printContact()
{
	std::cout << "First Name : " << this->_fName << std::endl;
	std::cout << "Last Name  : " << this->_lName << std::endl;
	std::cout << "Nickname   : " << this->_nickname << std::endl;
	std::cout << "Phone Num  : " << this->_number << std::endl;
	std::cout << "Secret     : " << this->_secret << std::endl;
}
