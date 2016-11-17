/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newptet.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 22:37:03 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/08 22:52:58 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (i != '\0')
	{
		putchar(str);
		i++;
	}
	return (0);
}

int		main(void)
{`
	
