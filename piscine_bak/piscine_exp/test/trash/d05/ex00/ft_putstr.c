/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 03:34:06 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/31 03:41:59 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int output;

	output = 0;
	while (str[output] != '\0')
	{
		ft_putchar(str[output]);
		output++;
	}
}

int	main(void)
{
	char str1[] = "this is my string of text";

	ft_putstr(str1);
	ft_putchar('\n');
	return (0);
}
