/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 19:43:37 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/29 20:33:56 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int	i;

	if ((nb <= -1) || (nb >= 13))
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	i = (nb * ft_recursive_factorial(nb - 1));
		return (i);
}
