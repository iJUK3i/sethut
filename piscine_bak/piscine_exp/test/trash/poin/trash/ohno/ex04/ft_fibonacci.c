/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 22:17:19 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/29 23:41:10 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (0);
	else 
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}
