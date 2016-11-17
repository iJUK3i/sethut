/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dliang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 17:01:21 by dliang            #+#    #+#             */
/*   Updated: 2016/11/13 17:03:37 by dliang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_xlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int		ft_ylen(char *str)
{
	int y;

	y = 0;
	while (*str)
	{
		if (*str == '\n')
			y++;
		str++;
	}
	return (y);
}

int		main(void)
{
	int		ret;
	char	buf[1];
	char	str[100000];
	int		i;
	int		xy[2];

	i = 0;
	while ((ret = read(0, buf, 1)))
	{
		str[i] = buf[0];
		i++;
	}
	str[i + 1] = '\0';
	xy[0] = ft_xlen(str);
	xy[1] = ft_ylen(str);
	if (check_invalid(xy[0], xy[1]))
		return (0);
	check_rush(str, xy[0], xy[1]);
	return (0);
}
