/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dliang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 17:01:21 by dliang            #+#    #+#             */
/*   Updated: 2016/11/13 21:41:47 by marahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_xlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n' && str[i])
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

char	*ft_malloc(int i, char *str)
{
	char	*str2;
	int		j;

	str2 = (char*)malloc(i + 10000);
	j = 0;
	while (j <= i)
	{
		str2[j] = str[j];
		j++;
	}
	free(str);
	return (str2);
}

int		main(void)
{
	int		ret;
	char	buf[1];
	char	*str;
	int		i;
	int		xy[2];

	str = (char*)malloc(10000);
	i = 0;
	while ((ret = read(0, buf, 1)))
	{
		if ((i + 1) % 10000 == 0)
			str = ft_malloc(i, str);
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
