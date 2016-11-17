/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 16:22:50 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/31 17:02:25 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	int val;
	char str[20];

	strcpy(str, "321456");
	val = atoi(str);
	printf("string value = %s, int value = %d\n", str, val);

	strcpy(str, "the other string");
	val = atoi(str);
	printf("string value = %s, int value = %d\n", str, val);

	return (0);
}
