/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 01:29:40 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/31 03:01:22 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int inc;

	inc = 0;
	while (str[inc] != '\0')
	{
		ft_putchar(str[inc]);
		inc++;
	}
}

void	replace_first_x(char *str)
{
	str[5] = 'f';
}

int		main(void)
{
	char str1[] = "i wont let you turn around, this time around, i'll be bullet proof!";
	
	ft_putstr(str1);
	ft_putchar('\n');
	replace_first_x(str1);
	ft_putstr(str1);
	ft_putchar('\n');
	return 0;
}
