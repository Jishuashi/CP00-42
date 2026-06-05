/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:14:20 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/04 16:18:08 by hchartie         ###   ########.fr       */
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
		std::string number;
		std::string adress;
	public :
    Contact ();
};

class PhoneBook
{
    private:
        Contact cont[8];
    public:
        PhoneBook();
};

#endif