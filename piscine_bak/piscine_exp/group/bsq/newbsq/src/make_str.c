/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 22:25:25 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/16 23:32:32 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*make_str(char *new_str)
{
	char	buf[1];
	int		ret;
	int		fd;
	int		i;

	new_str = (char*)malloc(100000);
	fd = open(0, O_RDONLY);
	i = 0;
	while ((ret = read(fd, buf, 1)))
	{
		if ((i + 1) % 100000 == 0)
			new_str = ft_malloc(i, new_str);
		new_str[i] = buf[0];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
