/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 01:29:40 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/31 03:33:36 by ksmith           ###   ########.fr       */
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

void	replace_first_x(char *src, char *dest, str )
{
	dest[2] = src[7];
	src[2] = dest[7];

}

int		main(void)
{
	char str1[] = "i wont let you turn around, this time around, i'll be bullet proof!";
	char str2[] = "waking up to ash and dust, i wipe my brow and sweat my rust";
	char str3[] = "this is what the string looks like before:";
	char str4[] = "and this is after manipulation:";

	ft_putstr(str3);
	ft_putchar('\n');
	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putstr(str4);
	ft_putchar('\n');
	replace_first_x(str1, str2);
	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	return 0;
}
