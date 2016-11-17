/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anewfilethatfuningworks.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 00:27:43 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/03 06:47:16 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#define	LEN	21

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int o;

	o = 0;
	while (str[o] != '\0')
	{
		ft_putchar(*str);
		o++;
	}
}

int		main()
{
	int i;
	char *str;
	
	str = (char*)malloc(sizeof(*str) * (LEN + 1));
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
	ft_putstr("\n");
	return (0);
}
