/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 16:30:40 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/31 17:12:52 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putstr(char *str)
{
	int val;
	int inc;

	inc = 0;
	val = atoi(str);
	while (str[inc] != '\0')
	{
		ft_putchar(val);
		inc++;
	}
	return (0);
}

int	main(void)
{
	char str = "i wont let you turn around";

	ft_putstr(val);
	ft_putchar('\n');
	return (0);
}
