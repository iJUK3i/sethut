/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:18:07 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/14 17:32:19 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_strcat(char *dest, char *src)
{
	if (*src)
	{
		*(dest + ft_strlen(dest)) = *src;
		ft_strcat(dest, (src + 1));
	}
	else
		*(dest + ft_strlen(dest)) = '\0';
	return (dest);
}
