/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:50:30 by khanson           #+#    #+#             */
/*   Updated: 2016/11/02 14:21:57 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}