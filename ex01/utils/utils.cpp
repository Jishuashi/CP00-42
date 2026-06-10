/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:44:26 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/10 14:46:29 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	rightAlignSized(int	pSize, std::string pStr)
{
	std::string res;
	int			diff;
	int			i;

	if ((size_t)pSize == pStr.size())
		res = pStr;
	else if (pStr.size() > (size_t)pSize)
		res = pStr.substr(0, pSize - 1) + ".";
	else
	{
		diff = pSize - (int)pStr.size();
		i = 0;
		while (i < diff)
		{
			res.append(" ");
			i++;
		}
		res.append(pStr);
	}
	return (res);
}