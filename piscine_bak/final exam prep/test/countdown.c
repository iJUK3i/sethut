/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countdwn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 05:43:48 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/18 06:18:24 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_countdown(int n)
{

	while (n >= '0')
	{
		write (1, &n, 1);
		n--;
	}
	write (1, "\n", 1);
}


int		main()
{
	int nbr;

	nbr = '9';
	ft_countdown(nbr);
	return (0);
}

