/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alfatest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:53:42 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/08 20:11:12 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

void	putstr(char str[])
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
}

int	main(void)
{
	alpha(c);
	return 0;
}
