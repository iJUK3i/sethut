/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 01:37:01 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/28 04:10:58 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	nbr = 42
}
int	main(void)
{
	int	a;
	int	*nbr;

	a = 2;
	nbr = &a;
	printf("%d",nbr);
	ft_ft(*nbr);
	return (0);
}
