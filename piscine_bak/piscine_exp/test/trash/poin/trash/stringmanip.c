/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 02:42:47 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/30 04:31:01 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	replace_first_h_with_y(char *str)
{
	str[0] = 'y';
}

void	replace_first_char(char *src, char *dest)
{
	dest[3] = src[2];
}
int main(void)
{
	char str1[] = "Hello, mate!";
	char str2[] = "Yello, mellow, dew!";

	ft_putstr(str1);
	ft_putchar('\n');
	replace_first_h_with_y(str1);
	replace_first_char(str1, str2);
	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	return 0;
}
