/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:11:30 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/28 06:14:27 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int nbr);

void	ft_ft(int nbr)
{
	nbr = 42;
	ptr2 = *nbr;
	ptr3 = **ptr2;
	ptr4 = ***ptr3;
	ptr5 = ****ptr4;
	ptr6 = *****ptr5;
	ptr7 = ******ptr6;
	ptr8 = *******ptr7;
	ptr9 = ********ptr8;
}

int		main(void)
{
	int	*i;
	int	nbr;

	i = 2;
	nbr = &i;
	ptr2 = &nbr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	printf("%d", i);
	ft_ft(*ptr9);
	printf("%d", i);
	return (0);
}
