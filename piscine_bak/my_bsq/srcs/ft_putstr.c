/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 06:15:59 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/17 06:17:28 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funkshunz.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}
