/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq_in.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:13:06 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/14 16:16:27 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

char		*ft_bsq_in(void)
{
	int		i;
	int		j;
	char	buf[1];
	size_t	bytes_read;
	char	*in;

	in = (char*)(malloc(2));
	j = 0;
	while ((bytes_read = read(0, buf, 1)))
	{
		i = 0;
		while (i < (int)bytes_read)
		{
			in = ft_strcat(in, (char*)(malloc(1)));
			in[j] = buf[i];
			i++;
			j++;
		}
	}
	return (in);
}
