/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   good.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 14:09:36 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/27 17:42:29 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


void ft_print_alphabet (void)
{
	char c = 'a';
	while ( c <= 'z')
	{
	ft_putchar(c);
	c++;
	}
}

int main(

	ft_print_alphabet();

