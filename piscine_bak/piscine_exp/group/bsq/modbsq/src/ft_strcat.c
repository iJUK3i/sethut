/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:18:07 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/14 22:41:38 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_strcat(char *dest, char *src)
{
	int x;

	if (*src)
	{
		x = ft_strlen(dest);
		*(dest + x) = *src;
		*(dest + x + 1) = '\0';
		ft_strcat(dest, (src + 1));
	}
	*(dest + ft_strlen(dest)) = '\0';
	return (dest);
}
