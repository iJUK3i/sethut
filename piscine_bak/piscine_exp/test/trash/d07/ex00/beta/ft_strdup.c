/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 06:08:10 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/03 22:58:53 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		o;
	char	*str;

	o = 0;
	while (src[o])
		o++;
	str = (char*)malloc(sizeof(*str) * (o + 1));
	i = 0;
	while (i < o)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
