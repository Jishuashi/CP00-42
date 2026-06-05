/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:21:05 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/05 14:33:52 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() {}

Contact::Contact (std::string pFName, std::string pLName, std::string pNickname,
		std::string pNumber, std::string pSecret) : fName(pFName), lName(pLName),
		nickname(pNickname), number(pNumber), secret(pSecret) {}
