/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:11:45 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/14 17:21:20 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1)
		return (ft_strcmp(s1 + 1, s2 + 1));
	return (*s1 - *s2);
}