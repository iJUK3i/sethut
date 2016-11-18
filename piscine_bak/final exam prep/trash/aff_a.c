/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 04:07:11 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/18 05:43:29 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
/*
int		main(int nb_arg, char **str)
{
	int i;
	char *x;

	i = 0;
	x = (char*)malloc(sizeof(str[1]));
	if (nb_arg < 2)
		write (1, "?\n", 2);
	while (nb_arg == 2 && x[i] != '\0')
	{
		if (*x == 'a')
		{
			write (1, "a", 1);
			break;
		}
		i++;
	}
	write (1, "\n", 1);
	write (1, "the matrix has you\n", 18);
	return (0);
}*/

void	ft_putstring(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int		main(int nb_arg, char **str)
{
	int i;
	char *x;

	x = (char*)malloc(sizeof(str[1]));
	i = 0;
	while (nb_arg > 1)
	{
		if (str[1][i] == 'a')
		{
			write (1, "wtf", 3);
			break;
		}
		if (str[1][i] != 'a' && str[1][i] == '\0')
		{
			write (1, "no a\n", 5);
			break;
		}
		i++;
	}
	if (nb_arg <= 1)
		write (1, "no data\n", 8);
	ft_putstring(x);
	return (0);
}

