/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 03:47:51 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/31 04:40:24 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_putnbr(int nb);

int		ft_putchar(char c)
{
	write (1, &c, 1);
}
int		ft_putnbr(int nb)
{
	ft_putchar(nb);
	return (0);
}
int		main(void)
{
	ft_putchar('\n');
	printf("%d\n", ft_putnbr(42));
	printf("%d\n", ft_putnbr(22));
	return (0);
}
