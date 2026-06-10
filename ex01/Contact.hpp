/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 22:28:06 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/10 13:52:39 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>
# include "utils/utils.hpp"

class Contact
{
	private:
		std::string _fName;
		std::string _lName;
		std::string _nickname;
		std::string _number;
		std::string _secret;
	public :
		Contact();
    	Contact (std::string pFName, std::string pLName, std::string pNickname,
			std::string pNumber, std::string pSecret);
		void	printTab(int id);
		void	printContact();
};

#endif