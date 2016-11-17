/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 20:20:36 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/03 23:09:24 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv);
char	*ft_str_concat(char *dest, char *src);

char	*ft_str_concat(char *dest, char *src)
{
	int i;
	int o;

	i = 0;
	while (dest[i] != '\0')
		i++;
	o = 0;
	while (src[o] != '\0')
	{
		dest[i + o] = src[o];
		o++;
	}
	dest[i + o] = '\n';
	dest[i + o + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		o;
	int		num;

	num = 0;
	while (argc > 0)
	{
		o = 0;
		while (argv[o])
		{
			num++;
			o++;
		}
	}
	str = (char*)malloc(sizeof(*str) * (num + 1));
	i = 0;
	while (i < argc - 1)
	{
		str = ft_str_concat(str, argv[i + 1]);
		i++;
	}
	return (str);
}
