/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:44:33 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/06 17:48:19 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (*s1 ? nmatch(s1 + 1, s2 + 1) : 1);
	else if (*s2 - 42)
		return (0);
	return ((*s1 ? nmatch(s1 + 1, s2) : 0) + nmatch(s1, s2 + 1));
}
