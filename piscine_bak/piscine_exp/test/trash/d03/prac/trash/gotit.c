/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gotit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 01:13:01 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/28 01:34:59 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char ptr);
int	ft_putnbr(int ptr);
int	ft_putaddr(int *ptr);

int		main(void)
{
	char	c;

	c = '*';
	ft_putchar(c);
	ft_putchar('\n');
	return (0);
}
