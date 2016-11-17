/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 23:26:23 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/01 00:04:31 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char src[];
	char dest[];

	memset(dest, '\0', sizeof(dest));
	strcpy(src);
	strcpy(dest, src);
}

int		main()
{
	ft_strcpy(;
	return (0);
}
