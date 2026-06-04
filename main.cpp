/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:31:54 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/04 13:58:41 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void   ftPrint(char *s);
char    *toUpperCase(char	*s);

int main(int ac, char *av[])
{
    if (ac != 2)
        return (1);
    ftPrint(toUpperCase(av[1]));
}

int	strLen(char *s)
{
	int	res = 0;

	while (*s)
	{
		s++;
		res++;
	}
	return (res);
}

char    *toUpperCase(char	*s)
{
	for (int i = 0; i < strLen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}

void   ftPrint(char *s)
{
   std::cout << s << "\n";
}
