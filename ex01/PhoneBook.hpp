/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:14:20 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/05 14:35:31 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>
# include <iostream>

class Contact
{
	private:
		std::string fName;
		std::string lName;
		std::string nickname;
		std::string number;
		std::string secret;
	public :
		Contact();
    	Contact (std::string pFName, std::string pLName, std::string pNickname,
			std::string pNumber, std::string pSecret);
};

class PhoneBook
{
    private:
        Contact cont[8];
		int		idx;

		std::string input(std::string pMsg);
    public:
        PhoneBook();
		void	add();
};

#endif