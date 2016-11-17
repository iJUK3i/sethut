/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yari.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:54:09 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/08 19:50:43 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	putstr(char c, char*);

int		getnum(int argc, char *argv)
{
	int i;

	i = 0;
	while (argv != 0)
	{
		if (argv[i] == '\0')
			return (1);
		else if (argv[i])
			{
				putstr(argv);
				i++;
			}
	}
	return (0);
}

void	putstr(char c, char*)
{
	int inc;
	write (1, &c, 1);
	inc = 0;
	while (*str)
	{
		putstr(str[inc]);
		inc++;
	}
}

int		main(argv[])
{
	char *argv = "this is my first self test";
	return 0;
}
