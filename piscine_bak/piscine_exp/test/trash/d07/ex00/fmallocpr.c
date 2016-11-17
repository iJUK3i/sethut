/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmallocpr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 05:37:07 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/03 05:41:12 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*new_int(void);

int	main()
{
	int *p;
	p = new_int();
	*p = 15;

	printf("value of *p: %d\n", *p);

	free(p);

	return (0);
}

int*	new_int(void)
{
	int *p = malloc(sizeof(int));
	return (p);
}
