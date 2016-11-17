/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 03:43:09 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/31 23:15:39 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

int		ft_putchar(char c)
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

int	main()
{
	int val;
	char str[] = "whoa";
	
	val = ft_putstr(str);
	printf("%d\n", val);
	return (0);
}
