/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 12:53:15 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/29 21:03:33 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int x;

	x = nb;
	i = 1;
	if ((nb <= -1) || (nb > 12))
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	if ((nb >= 2) || (nb <= 12))
		while (i < x)
		{
			nb = nb * i;
			i++;
		}
	return (nb);
}