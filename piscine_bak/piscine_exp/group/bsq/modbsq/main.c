/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 22:41:27 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/17 00:57:03 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **argv)
{
	int 	i;
	char	buf[1];
	int		j;
	int		fd;
	char	*new_str;

	i = 0;
	if (ac > 2)
	{
		while (i < ac)
		{			

			new_str = (char*)malloc(10000);
			fd = open(0, O_RDONLY);
			j = 0;
			while ((0 < read(fd, argv[i], 1)))
			{
				if ((j + 1) % 10000 == 0)
					new_str = ft_malloc(j, new_str);
				new_str[j] = buf[0];
				j++;
			}
			new_str[j] = '\0';
			bsq(new_str);
			//i++;
		}
	}
	return (0);
}
